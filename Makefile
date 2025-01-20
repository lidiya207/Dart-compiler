# Tools and flags
FLEX = flex
BISON = bison
CC = gcc
CFLAGS = -lfl

# Files
LEX_FILE = dart_lexer.l
BISON_FILE = dart_parser.y
LEX_OUT = lex.yy.c
BISON_OUT_C = dart_parser.tab.c
BISON_OUT_H = dart_parser.tab.h
EXECUTABLE = parser
DART_FILE = main.dart

# Default target: build and run
all: build run

# Build: Generate lexer, parser, and compile
build: $(LEX_OUT) $(BISON_OUT_C)
	@echo "Compiling the parser..."
	$(CC) -o $(EXECUTABLE) $(LEX_OUT) $(BISON_OUT_C) $(CFLAGS)

# Generate lexer file
$(LEX_OUT): $(LEX_FILE)
	@echo "Generating lexer from $(LEX_FILE)..."
	$(FLEX) $(LEX_FILE)

# Generate parser files
$(BISON_OUT_C): $(BISON_FILE)
	@echo "Generating parser from $(BISON_FILE)..."
	$(BISON) -d $(BISON_FILE)

# Run the parser
run:
	@echo "Running the parser..."
	./$(EXECUTABLE) < $(DART_FILE)

# Clean up generated files
clean:
	@echo "Cleaning up..."
	rm -f $(LEX_OUT) $(BISON_OUT_C) $(BISON_OUT_H) $(EXECUTABLE)

# Phony targets
.PHONY: all build run clean
