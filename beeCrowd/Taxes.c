#include<stdio.h>

int main(){
    float salary, tax;
    scanf("%f",&salary);

    if(salary >= 2000){
        salary = salary - 2000;
        if(salary > 0 && salary <= 1000){
            tax = (salary * 8) / 100;
            salary = salary - 1000;
        }else if(salary > 1000){
            tax = (1000 * 8) / 100;
            salary = salary - 1000;
        }

        if(salary >= 0 && salary <= 1500){
            tax = ((salary * 18) /100) + tax;
            salary = salary - 1500;
        }else if(salary > 1500){
            tax = ((1500 * 18) /100) + tax;
            salary = salary - 1500;
        }

        if(salary > 0){
            tax = ((salary * 28) /100) + tax;
        }

        printf("R$ %.2f\n",tax);
    }else{
        printf("Isento\n");
    }
}