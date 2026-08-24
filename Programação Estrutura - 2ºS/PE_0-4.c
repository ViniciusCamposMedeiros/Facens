#include <stdio.h>

float consumo(float dist, float volum);

int main(){
	float distancia, combustivel;
	
	printf("Digite a distancia percorrida em kilometros: ");
		scanf("%f", &distancia);
	printf("Digite a quantidade de combustivel consumido em litros: ");
		scanf("%f", &combustivel);

	float consumoMedio = consumo(distancia, combustivel);
	
	printf("A media de consumo e: %.3f Km/L", consumoMedio);
}

float consumo(float dist, float volum){
	return dist/volum;
}
