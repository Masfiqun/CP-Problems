#include<stdio.h>

int main(){
    int a[7] = {61,71,11,21,32,19,27,31};
    int b;

    scanf("%d", &b);

    if(b == a[0]){
        printf("Brasilia\n");
    }else if(b == a[1]){
        printf("Salvador\n");
    }else if(b == a[2]){
        printf("Sao Paulo\n");
    }else if(b == a[3]){
        printf("Rio de Janeiro\n");
    }else if(b == a[4]){
        printf("Juiz de Fora\n");
    }else if(b == a[5]){
        printf("Campinas\n");
    }else if(b == a[6]){
        printf("Vitoria\n");
    }else if(b == a[7]){
        printf("Belo Horizonte\n");
    }else{
        printf("DDD nao cadastrado\n");
    }

    return 0;
}