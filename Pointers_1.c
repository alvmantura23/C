/*
Program        : Use of pointers in C.
Programmer     : Alvaro Cueva
Description    :// Escribe un programa que
                1. Declare una variable entera y un puntero a entero
                2. Asigne la dirección de la variable al puntero
                3. Modifique el valor de la variable usando el puntero
                4. Imprima el valor original y el modificado
Creation date   : August 2025
Revision        : None

Structure of compiler: gcc program_name.c -o file/executable_name
Structure of execute: .\direction_of_the_file\executable_name.exe

Compilation     : gcc Pointers_1.c -o build/Pointers_1
Execute         : .\build\Pointers_1.exe
*/
#include<stdio.h>
#include<stdlib.h>

void modifier(int *p){
    *p = 10;    //Remember *p save the value
}
int main(int argc, char* argv[]){
    int value = 5;
    int *pointer;       //Creates a variable that stores a *memory address*

    pointer = &value;   //Asignamos la direccion de memoria de la variable a ese puntero
                        //                _________
                        //Ahora:  pointer |_AX030B_|     <-----     value |    5     |
                        //                                                   AX030B
    printf("The original value is: %d", value);
    modifier(pointer);
    printf("\nThe new value is: %d", value);
    return 0;
}