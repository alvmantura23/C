/*
Program        : Use of pointers in C.
Programmer     : Alvaro Cueva
Description: Escribe un programa que:
                1. Declare un arreglo de 5 enteros
                2. Use un puntero para recorrer el arreglo e imprimir sus valores
                3. Use el mismo puntero para duplicar los valores del arreglo
                4. Imprima el arreglo modificado
Creation date   : August 2025
Revision        : None
Compilation     : gcc Pointers_2.c -o build/Pointers_2
Execute         : .\build\Pointers_2.exe
*/

#include <stdio.h>

void asignar(int arreglo[], int **puntero) {
    *puntero = arreglo; // Asigna la dirección del arreglo al puntero
}
/*
puntero + 0 → array[0]
puntero + 1 → array[1]
puntero + 2 → array[2]
*/
void imprimir(int *puntero, int tamaño) {
    for(int i = 0; i < tamaño; i++) {
        printf("%d\n", *(puntero + i));     // "*" indica que accedemos al valor almacenado en la direcicon calculada
    }
}
void duplicar(int *puntero, int tamaño) {
    for(int i = 0; i < tamaño; i++) {
        *(puntero + i) = *(puntero + i) * 2;
    }
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *pointer;
    
    asignarP(array, &pointer);
    
    imprimir(pointer, 5);       //Pasando el puntero y el tamaño
    duplicar(pointer, 5);
    imprimir(pointer, 5);
    return 0;
}