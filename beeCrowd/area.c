/*beecrowd | 1012
Area
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.
*/



#include<stdio.h>

int main() {
    double A, B, C, triangle, circle, trapizium, square, rectangle, pi=3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    // scanf("%lf",&A);
    // scanf("%lf",&B);
    // scanf("%lf",&C);
    triangle = 0.5*A*C;
    printf("TRIANGULO: %.3lf\n", triangle);
    circle = pi*C*C;
    printf("CIRCULO: %.3lf\n", circle);
    trapizium = (A+B)*0.5*C;
    printf("TRAPEZIO: %.3lf\n", trapizium);
    square = B*B;
    printf("QUADRADO: %.3lf\n", square);
    rectangle = A*B;
    printf("RETANGULO: %.3lf\n", rectangle);
    return 0;
}