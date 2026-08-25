#include <stdio.h>

int main(){
    int vector[5], *p, i;
    p=vector;

        for(i=0;i<5;i++){
            printf("Valor[%i]= ", i);
                scanf("%i",p++);
        }

        for(i=0;i<5;i++){
            printf("\nValor[%i]= %i",i,vector[i]);
        }

    return 0;
}