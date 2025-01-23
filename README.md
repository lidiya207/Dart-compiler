                      Dart-like Language Compiler (C-based Parser)


This project implements a Dart-like language compiler utilizing Bison for parsing, Flex for lexical analysis, and C for semantic analysis. The compiler validates the syntax and semantics of a Dart-like programming language, ensuring that it adheres to defined rules and catches errors during the compilation process.

                   The primary goals of this project are:

To build a simple compiler that can process a subset of Dart-like code.
To perform both syntax and semantic analysis on the code.
To provide meaningful error messages related to common issues such as undefined variables and type mismatches.
   
   
                           Prerequisites

The following software tools are required to compile and run this project:

Bison: A parser generator used for creating the parser from grammar specifications.
Flex: A lexical analyzer (scanner) generator used to tokenize the input.
GCC: The GNU Compiler Collection, used for compiling the C code.
Make: A build automation tool that simplifies the process of compiling the project.
Installing Required Tools
On Linux (Ubuntu/Debian):

                    Update package list:
sudo apt-get update
   
                     Install required packages:
sudo apt-get install bison flex build-essential


                       Project Structure

/dart-compiler
  ├── semantic/                # Semantic analysis (symbol table management)
  ├── test/                    # Test files for compiler validation
  ├── parser.y                 # Bison file for grammar definitions
  ├── lexer.l                  # Flex file for lexical analysis
  ├── Makefile                 # Build script for compiling the project
  ├── README.md                # Project documentation


                          Explanation of Project Files:

semantic/: Contains C files responsible for managing the symbol table, handling variable types, and checking semantic errors such as type mismatches or undefined variables.

test/: This directory holds sample source code files that can be parsed and analyzed by the compiler to verify its correctness.

parser.y: This Bison file defines the grammar rules of the Dart-like language. It contains the syntax for parsing Dart-like constructs such as variable declarations, expressions, and control flow statements.

lexer.l: This Flex file is used to tokenize the input source code. It breaks the code into tokens such as keywords, identifiers, literals, and operators.


Makefile: A build automation file that defines the steps for compiling and linking the source code files, making the build process easier and more efficient.

README.md: Provides an overview of the project, installation instructions, and a guide for running the compiler.

How to Build and Run the Compiler
Clone the repository to your local machine.

   Navigate to the project directory:
cd /dart-compiler


     Run make to compile the project:
make


      After successful compilation, you can run the compiler with the following command:
./parser < test/testfile.dart

This will parse the Dart-like code in test/testfile.dart and output any syntax or semantic errors detected.

                         Running the Tests:

You can add new test cases by creating Dart-like source code files in the test/ directory. Each file should contain code in the Dart-like language, which will be parsed and analyzed by the compiler.

                   To run a specific test case:

./parser < test/main.dart
./parser < test/index.dart


The compiler will output either a successful parse message or error messages related to syntax or semantic issues.

                         Error Handling:
The compiler will provide meaningful error messages for common issues such as:

Undefined variables: Variables used before they are declared.
Type mismatches: Assigning or operating on incompatible types.
Redundant declarations: Attempting to declare a variable that already exists.