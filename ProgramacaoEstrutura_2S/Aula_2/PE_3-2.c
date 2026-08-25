#include <stdio.h>
#include <stdlib.h>

void recebe(int *p);
void mostra(int *p);

int main(){
    int parar=0;
    char letra;
    int vetor[5];
    do{
    recebe(vetor); // como não tem index recebe o endereço
    mostra(vetor);
        printf("Continuar? Y/N");
            scanf(" %c", &letra);
                if(letra=='N' || letra=='n'){
                    parar=1;
                }
                else{
                    parar=0;
                }
    }while(parar==0);
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