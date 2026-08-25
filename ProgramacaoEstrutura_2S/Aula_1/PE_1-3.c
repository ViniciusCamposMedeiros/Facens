#include <stdio.h>

int calcDias(int anos);
int calcMeses(int anos);

int main(){
	float idade;
	
	printf("Digite sua idade: ");
		scanf("%f", &idade);
	
	float dias = calcDias(idade);
	float meses = calcMeses(idade);
	
	printf("Voce tem aproximadamente %.0f dias e %.0f meses de vida!: ", dias, meses);
}

int calcDias(int anos){
	return anos*365;
}

int calcMeses(int anos){
	return anos*12;
}