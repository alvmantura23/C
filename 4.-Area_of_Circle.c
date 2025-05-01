/*
Programa        : Area_of_a_Circle.
Programador     : Alvaro Cueva
Description     : We use this program to calculate the area of a circle.
Creation date   : April 2025
Revision        : None
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){

    double area;
    int radius;

    scanf("%d",&radius);        /*Input of an integer value*/

    area = PI * pow(radius, 2); /*Finding the area of ​​the circle*/

    printf("The area of the circle the radius %d is: %f", radius, area);
    return 0;
}