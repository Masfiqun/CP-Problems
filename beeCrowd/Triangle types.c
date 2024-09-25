/*beecrowd | 1045
Triangle Types
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

if A ≥ B + C, write the message: NAO FORMA TRIANGULO
if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
Input
The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output
Print all the classifications of the triangle presented in the input.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A >= B + C || B >= A + C || C >= A + B) {
        printf("NAO FORMA TRIANGULO\n");
    } else if (pow(A, 2) == pow(B, 2) + pow(C, 2) || pow(B, 2) == pow(A, 2) + pow(C, 2) || pow(C, 2) == pow(A, 2) + pow(B, 2)) {
        printf("TRIANGULO RETANGULO\n");
    } else if (pow(A, 2) > pow(B, 2) + pow(C, 2) || pow(B, 2) > pow(A, 2) + pow(C, 2) || pow(C, 2) > pow(A, 2) + pow(B, 2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (pow(A, 2) < pow(B, 2) + pow(C, 2) || pow(B, 2) < pow(A, 2) + pow(C, 2) || pow(C, 2) < pow(A, 2) + pow(B, 2)) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (A == B && B == C) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (A == B || B == C || A == C) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
