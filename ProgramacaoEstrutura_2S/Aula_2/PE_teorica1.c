#include <stdio.h>

int main (){
    int x=100, *p_x;
    p_x=&x;

    printf("valor = %i", *p_x);

    return 0;
}