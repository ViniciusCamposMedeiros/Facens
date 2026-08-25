#include <stdio.h>
#include <locale.h>

int fatorial (int n);

int main (){
    setlocale(LC_ALL, "Portuguese");
    int num, fat;

    printf("Digite um número: ");
    scanf("%d", &num);

    fat = fatorial(num);
    printf("Fatorial de %d é: %d", num, fat);

}

int fatorial (int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}