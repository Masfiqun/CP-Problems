/*beecrowd | 1038
Snack
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.



Input
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.
*/

#include<stdio.h>
#include<math.h>

int main(){
    int X, Y;

    scanf("%d %d", &X, &Y);

    if(X == 1){
        printf("Total: R$ %.2lf\n", Y*4.00);
    }else if(X == 2){
        printf("Total: R$ %.2lf\n", Y*4.50);
    }else if(X == 3){
        printf("Total: R$ %.2lf\n", Y*5.00);
    }else if(X == 4){
        printf("Total: R$ %.2lf\n", Y*2.00);
    }else if(X == 5){
        printf("Total: R$ %.2lf\n", Y*1.50);
    }else{
        printf("not applicable\n");
    }

    return 0;
}
