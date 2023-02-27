#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	float altura,peso,imc;
	
	printf("Insira seu peso: ");
	scanf("%f",&peso);
	
	printf("Insira sua altura: ");
	scanf("%f",&altura);
	
	imc=peso/(altura*altura);
	
	if(imc<18.5){
		printf("Voce esta abaixo do peso");
	}else if(imc>18.5&&imc<24.9){
		printf("Voce esta no peso normal");
	}else if(imc>25&&imc<29.9){
		printf("Voce esta com sobrepeso");
	}else if(imc>30&&imc<34.9){
		printf("Voce esta com obesidade classe I");
	}else if(imc>35&&imc<39.9){
		printf("Voce esta com obesidade classe II");
	}else if(imc>40||imc==40){
		printf("Voce ta com obesidade classe III");
	}
	
	return 0;
}