#include <stdio.h>
#include <stdlib.h>

int tamanho();
void recebe(int *p, int tam);
void mostra(int *p, int tam);

int main(){
    int grandeza = tamanho();
    int *vetor= (int *)malloc(grandeza*sizeof(int)); // sizeof pega o tamanho em bytes que a variável precisa, malloc separa aquele 
                                                     // espaço de memória, o int * é para definir que esse espaço é para int.

    recebe(vetor, grandeza); // como não tem index recebe o endereço
    mostra(vetor, grandeza);
    system("pause");
}

int tamanho(){
    int tam;
    printf("Digite o tamanho da matriz= ");
        scanf("%i", &tam);
    return tam;
}

void recebe(int *p, int tam){
    for(int i=0;i<tam;i++,p++){ //p++ aumenta o endereço
        printf("Valor[%i]= ", i);
            scanf("%i", p);
    }
}

void mostra(int *p, int tam){
    for(int i=0;i<tam;i++,p++){
        printf("End[%i]= %i // Valor[%i]= %i\n",i, p, i, *p);
    }
}