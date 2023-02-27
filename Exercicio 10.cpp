#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	int neymar,ronaldinho;
	
	printf("Insira sua idade: ");
	scanf("%d",&neymar);
	
	printf("Insira sua renda mensal: ");
	scanf("%d",&ronaldinho);
	
	if(neymar>17&&ronaldinho<1501){
		printf("Parabens, voce e elegivel para receber o beneficio!");
	}else{
		printf("Infelizmente, voce nao e elegivel para receber o beneficio");
	}
	
	return 0;
	
}