#include <stdio.h>

void aloca(float **p, int tam); 

int main (){
    float *ptr=NULL;
    aloca(&ptr,10)
    return 0;
}

void aloca(float **p, int tam){
    if( (*p=(float* )realloc(*p, tam * sizeof(float)))==NULL){
        printf("Erro na alocacao de memoria");
        exit(1);
    }
    printf("\nFuncao aloca - End: %u", *p);
}

//------não terminado------