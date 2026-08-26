#include <stdio.h>
#include <stdlib.h>

int receba(int *p);
void soma(int *pa, int *pb, int *pc, int q);
void mostra(int *p, int q);

int main (){
    int vetorA[100]={0}, vetorB[100]={0}, vetorC[100]={0}, qntd1, qntd2, qntdf;

    qntd1 = receba(vetorA);
    qntd2 = receba(vetorB);
    if(qntd1==qntd2 || qntd1>qntd2)
        qntdf = qntd1;
    else
        qntdf = qntd2;
    soma(vetorA, vetorB, vetorC, qntdf);
    mostra(vetorC, qntdf);
    system("pause");
}

    int receba(int *p){
        char letra;
        for(int i=0; i<100; i++,p++){
            printf("Digite o valor[%i]= \n", i);
                scanf("%i", p);
            printf("Deseja continuar digitando numeros?= S/N\n");
                scanf(" %c", &letra);
                    if(letra=='N' || letra=='n')
                        return i+1;
        }
        return 100;
    }

    void soma(int *pa, int *pb, int *pc, int q){
        for (int i=0; i<q; i++, pa++, pb++, pc++){
            *pc = *pa+*pb;
        }
    }

    void mostra(int *p,  int q){
        for(int i=0; i<q; i++, p++){
            printf("End[%i]= %i // Valor[%i]= %i\n", i, p, i, *p);
        }
    }