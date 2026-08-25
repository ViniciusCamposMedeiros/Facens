#include <stdio.h>

void recebe(int *p);
void mostra(int *p);

int main(){
    int vetor[5];
    recebe(vetor);
    mostra(vetor);
    return 0;
}

void recebe(int *p){
    for(int i=0;i<5;i++,p++){
        printf("Valor[%i]= ", i);
            scanf("%i", p);
    }
}

void mostra(int *p){
    for(int i=0;i<5;i++,p++){
        printf("End[%i]= %i \nValor[%i]= %i", i, p, i, *p);
    }
}