
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data definitions (part a.)
// Define an enumeration and typedef to `Type`
// Define a union and typedef to `Value`
// Define a struct, inckuding `Type` and `Value` and typedef to `Variable`
typedef enum _type{
    INTEGER,
    REAL,
    STRING
}Type;

typedef union _value{
    int ival;
    float fval;
    char sval[10];
}Value;

typedef struct _variable{
    Type _type;
    Value _value;
}Variable;

// Function prototypes (part b.)
// void print( Variable var ); 
// Variable assign( Type t, Value v );
// Variable add( Variable var1, Variable var2 );


int main( void ) {

    // define and initialise Variable, eg. 
    //Variable var1 = { .type=INTEGER, .value.ivalue=2 };

    return 0;
}