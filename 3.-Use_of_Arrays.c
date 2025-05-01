/*
Programa        : Use_of_Arrays.
Programador     : Alvaro Cueva
Description     : Array operations and uses in C.
Creation date   : April 2025
Revision        : None
*/
#include <stdio.h>                              /*Prprocessor directives*/

#include <string.h>                             /*Header file and standard library that provides functions for manipulating character strings and memory*/

int main(){                                     /*Principal function*/
    char notice[30];
    
    strcpy (notice, "The world is changing");   /* It is used to copy a string of characters, notice[30] = "The world is changing"*/

    printf(notice);
}