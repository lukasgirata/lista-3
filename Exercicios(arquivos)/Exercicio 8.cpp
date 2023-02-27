#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <cstring>

int main(){
	
	char matue[90];
	int teto;
	
	printf("Insira seu nome: ");
	gets(matue);
	
	printf("Insira sua idade: ");
	scanf("%d",&teto);
	
	if(strcmp(matue,"Maria")==0){
		printf("\nSeu nome e Maria");
	}else if(strcmp(matue,"Joao")==0){
		printf("\nSeu nome e Joao");
	}else{
		printf("\nSeu nome nao e Joao nem Maria");
	}
	
	if(teto>17){
		printf("\n\nVoce e maior de idade");
	}else{
		printf("Voce e menor de idade");
	}
	
	return 0;
	
}