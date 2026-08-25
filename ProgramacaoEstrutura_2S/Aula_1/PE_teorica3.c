#include <stdio.h>
#include <stdlib.h>

void recebe(int *p);
void mostra(int *p);

int main(){
    int vetor[5];
    recebe(vetor); // como não tem index recebe o endereço
    mostra(vetor);
    system("pause");
}

void recebe(int *p){
    for(int i=0;i<5;i++,p++){ //p++ aumenta o endereço
        printf("Valor[%i]= ", i);
            scanf("%i", p);
    }
}

void mostra(int *p){
    for(int i=0;i<5;i++,p++){
        printf("End[%i]= %i // Valor[%i]= %i\n",i, p, i, *p);
    }
}