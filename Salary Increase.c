/*
The company ABC decided to give a salary increase to its employees, according to the following table:


Salary	Readjustment Rate
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

15%
12%
10%
7%
4%


Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
Input
The input contains only a floating-point number, with 2 digits after the decimal point.

Output
Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
Em percentual: means "In percentage"
*/

#include<stdio.h>

int main(){
    
    float salary, increment, money;
    int percentage;
    
    scanf("%f",&salary);
    // printf("%.2f\n",salary);
    
    if(salary>=0 && salary<=400){
        percentage = 15;
    }else if(salary>=400.01 && salary<=800){
        percentage = 12;
    }else if(salary>=800.01 && salary<=1200){
        percentage = 10;
    }else if(salary>=1200.01 && salary<=2000){
        percentage = 7;
    }else if(salary > 2000){
        percentage = 4;
    }
    
    increment = (salary * percentage)/100;
    money = salary + increment;
    
    printf("Novo salario: %.2f\n",money);
    printf("Reajuste ganho: %.2f\n",increment);
    printf("Em percentual: %d %\n",percentage);
    
    return 0;
}