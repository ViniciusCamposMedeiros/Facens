#include <stdio.h>

float mult(float num1, float num2);

int main(){
	float numero1 = 10;
	float numero2 = 20;
	
	float resultado = mult(numero1, numero2);
	
	printf("%.1f", resultado);
}

float mult(float num1, float num2){
	return num1*num2;
}