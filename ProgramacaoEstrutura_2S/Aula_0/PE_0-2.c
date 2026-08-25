#include <stdio.h>

float media(float num1, float num2);

int main(){
	float nota1, nota2, mediaFinal;
	
	printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		
	mediaFinal = media(nota1, nota2);
	
	printf("A media das notas e: %.2f", mediaFinal);
}

float media(float num1, float num2){
	float sum = num1+num2;
	return sum/2;
}