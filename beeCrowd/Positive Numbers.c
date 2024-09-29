#include<stdio.h>

int main(){
    float in;
    int i, count=0;

    for(i=1;i<=6;i++){
        scanf("%f",&in);
        if(in > 0){
            count++;
        }
    }
    printf("%d valores positivos",count);
}