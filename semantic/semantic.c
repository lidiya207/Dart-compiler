#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic.h"

// Global symbol table
SymbolTable* symbol_table = NULL;

// Initialize the symbol table
void init_symbol_table() {
    symbol_table = create_symbol_table();
}

// Create a new symbol table
SymbolTable* create_symbol_table() {
    SymbolTable* table = (SymbolTable*)malloc(sizeof(SymbolTable));
    table->head = NULL;
    return table;
}

// Destroy the symbol table
void destroy_symbol_table(SymbolTable* table) {
    Symbol* current = table->head;
    Symbol* temp;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp->name);
        free(temp);
    }
    free(table);
}

// Insert a symbol into the symbol table
int insert_symbol(char* name, int type) {
    // Check if the symbol already exists
    Symbol* existing_symbol = lookup_symbol(name);
    if (existing_symbol != NULL) {
        return 1; // Symbol already exists
    }
    
    // Create a new symbol
    Symbol* new_symbol = (Symbol*)malloc(sizeof(Symbol));
    new_symbol->name = strdup(name);
    new_symbol->type = type;
    new_symbol->is_const = 0;
    new_symbol->is_final = 0;
    new_symbol->next = symbol_table->head;
    symbol_table->head = new_symbol;
    
    return 0; // Success
}

// Lookup a symbol by name
Symbol* lookup_symbol(char* name) {
    Symbol* current = symbol_table->head;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Symbol not found
}

// Check type compatibility for assignments
void check_type_assignment(int expected_type, int expression_type) {
    if (expected_type != expression_type) {
        printf("Type mismatch: expected type %d, but got type %d\n", expected_type, expression_type);
        exit(1); // Exit on type mismatch
    }
}

// Mark a variable as final
void mark_as_final(char* name) {
    Symbol* symbol = lookup_symbol(name);
    if (symbol != NULL) {
        symbol->is_final = 1;
    }
}

// Mark a variable as const
void mark_as_const(char* name) {
    Symbol* symbol = lookup_symbol(name);
    if (symbol != NULL) {
        symbol->is_const = 1;
    }
}

// Print the symbol table
void print_symbol_table() {
    Symbol* current = symbol_table->head;
    while (current != NULL) {
        printf("Symbol: %s, Type: %d, Const: %d, Final: %d\n",
               current->name, current->type, current->is_const, current->is_final);
        current = current->next;
    }
}

// Check if two types are compatible for arithmetic operations
int check_arithmetic(int type1, int type2) {
    if (type1 != type2) {
        printf("Type mismatch in arithmetic operation: %d vs %d\n", type1, type2);
        exit(1); // Exit on type mismatch
    }
    return type1; // Return the type if compatible
}

// Get the return type of a function (placeholder implementation)
int get_function_return_type(char* function_name) {
    // For now, return TYPE_INT for all function calls (you can customize this)
    return TYPE_INT;
}

// Check compatibility of types in ternary expression
int check_ternary(int condition_type, int true_type, int false_type) {
    if (condition_type != TYPE_BOOL) {
        printf("Condition must be of type BOOL in ternary expression\n");
        exit(1);
    }
    if (true_type != false_type) {
        printf("Mismatched types in ternary expression: %d vs %d\n", true_type, false_type);
        exit(1);
    }
    return true_type; // Return the common type
}

// Check const or final constraint during assignment
void check_const_or_final(Symbol* symbol) {
    if (symbol->is_const) {
        printf("Cannot modify a const variable: %s\n", symbol->name);
        exit(1);
    }
    if (symbol->is_final) {
        printf("Cannot modify a final variable: %s\n", symbol->name);
        exit(1);
    }
}

// Check assignment compatibility (check if types match)
void check_assignment_compatibility(char* var_name, int expression_type) {
    Symbol* symbol = lookup_symbol(var_name);
    if (symbol == NULL) {
        printf("Undefined variable: %s\n", var_name);
        exit(1); // Exit on undefined variable
    }
    check_type_assignment(symbol->type, expression_type);
    check_const_or_final(symbol);
}

// Handle assignment operations
void handle_assignment(char* var_name, int expression_type, char operator) {
    Symbol* symbol = lookup_symbol(var_name);
    if (symbol == NULL) {
        printf("Undefined variable: %s\n", var_name);
        exit(1); // Exit on undefined variable
    }

    // Check if the assignment is valid
    check_assignment_compatibility(var_name, expression_type);
    
    // Handle specific arithmetic assignment operations like +=, -=, etc.
    if (operator == '+') {
        printf("Performing addition assignment: %s += <expression>\n", var_name);
    } else if (operator == '-') {
        printf("Performing subtraction assignment: %s -= <expression>\n", var_name);
    } else if (operator == '*') {
        printf("Performing multiplication assignment: %s *= <expression>\n", var_name);
    } else if (operator == '/') {
        printf("Performing division assignment: %s /= <expression>\n", var_name);
    }
    // Add further checks for other operators as needed.
}
