/*beecrowd | 1036
Bhaskara's Formula
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.
*/

#include<stdio.h>
#include<math.h>

int main(){
    double A, B, C, R1, R2, delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = B*B - 4*A*C;

    if(A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    }
    else {
        R1 = (-B + sqrt(delta)) / (2*A);
        R2 = (-B - sqrt(delta)) / (2*A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}

