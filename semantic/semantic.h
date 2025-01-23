#ifndef SEMANTIC_H
#define SEMANTIC_H

// Type constants
#define TYPE_CHAR 1
#define TYPE_INT 2
#define TYPE_DOUBLE 3
#define TYPE_BOOL 4
#define TYPE_STRING 5

// Symbol structure
typedef struct Symbol {
    char* name;          // Variable name
    int type;            // Variable type (e.g., int, double)
    int is_const;        // Flag for const variables
    int is_final;        // Flag for final variables
    struct Symbol* next; // Pointer to the next symbol (linked list)
} Symbol;

// Symbol table structure
typedef struct {
    Symbol* head; // Head of the linked list
} SymbolTable;

// Function declarations
void init_symbol_table();
SymbolTable* create_symbol_table();
void destroy_symbol_table(SymbolTable* table);
int insert_symbol(char* name, int type);
Symbol* lookup_symbol(char* name);
void check_type_assignment(int expected_type, int expression_type);
void mark_as_final(char* name);
void mark_as_const(char* name);
void print_symbol_table();
int check_arithmetic(int type1, int type2);
int get_function_return_type(char* function_name);
int check_ternary(int condition_type, int true_type, int false_type);
void check_const_or_final(Symbol* symbol);
void check_assignment_compatibility(char* var_name, int expression_type);
void check_arithmetic_assignment(char* var_name, int expression_type, char operator);
void handle_assignment(char* var_name, int expression_type, char operator);

#endif
