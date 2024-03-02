/*beecrowd | 1043
Triangle
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:


Perimetro = XX.X


If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:


Area = XX.X

Input
The input file has tree floating point numbers.

Output
Print the result with one digit after the decimal point.
*/

#include <stdio.h>

int main() {
    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    if(A+B>C && B+C>A && C+A>B){
        printf("Perimetro = %.1f\n", A+B+C);
    }else{
        printf("Area = %.1f\n", ((A+B)*C/2));
    }

    return 0;
}