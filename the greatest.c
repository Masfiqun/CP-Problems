/*beecrowd | 1013
The Greatest
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
maior=(a+b+(abs)*(a-b))/2


Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.
*/

#include<stdio.h>

int main() {
    int a,b,c,maior;
    scanf("%d %d %d", &a, &b, &c);
    // scanf("%d", &a);
    // scanf("%d", &b);
    // scanf("%d", &c);
    if(a>=b && a>=c){
        printf("%d eh o maior\n", a);
    }else if(b>=a && b>=c){
        printf("%d eh o maior\n", b);
    }else{
        printf("%d eh o maior\n", c);
    }
    // maior=(a+b+((a*b*c)*(a-b)))/2.0;
    // printf("%d eh o maior", maior);
    return 0;
}