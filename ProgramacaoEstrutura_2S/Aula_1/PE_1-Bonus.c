#include <stdio.h>


long int fib(long int num);

long int main (){
    long int n, fibo;
    printf("Digite uma posicao: ");
    scanf("%ld", &n);
    fibo = fib(n);
    printf("Numero na posicao %ld da sequencia de fibonacci e: %ld", n, fibo);
}

long int fib(long int num){
    if (num == 0){
        return 0;
    } else if (num == 1){
        return 1;
    } else {
        return fib(num - 1) + fib(num - 2);
    }
}