/*beecrowd | 1042
Simple Sort
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above.
*/

#include <stdio.h>

int main() {
    int a, b, c, temp, i, j, k;

    scanf("%d %d %d", &a, &b, &c);

    i = a;
    j = b;
    k = c;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);

    printf("%d\n%d\n%d\n", i, j, k);

    return 0;
}