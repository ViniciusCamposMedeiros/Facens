#include <stdio.h>
const float PI = 3.4;

float calcArea(float r);

int main (){
	float resultado, raio;
	
	printf("digite o raio da esfera: ");
		scanf("%f", &raio);
	
	resultado=calcArea(raio);
	
	printf("A area da esfera e: %.2f", resultado);
}

float calcArea(float r){
	return r*PI*4;
}