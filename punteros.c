#include <stdio.h>
int main ( int arg, char const *argv []) 
{
    char variableCaracter;
    char *m;
    variableCaracter = 'X';

    m = &variableCaracter; //guardo la direcciion de memoria de variableCaracter

    printf ("%c %x\n", variableCaracter, m);

    int variableEntera, *n;
    variableEntera = 500;
    n = &variableEntera; 
    printf ("%d %x\n", variableEntera, n);

    return 0;
}
