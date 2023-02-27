#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <cstring>

int main(){
	
	char davidluiz[90];
	
	printf("Insira seu nome: ");
	gets(davidluiz);
	
	if(strcmp(davidluiz,"Maria")==0){
		printf("Seu nome e Maria");
	}else if(strcmp(davidluiz,"Joao")==0){
		printf("Seu nome e Joao");
	}else{
		printf("Seu nome nao e Maria nem Joao");
	}
	
	return 0;
	
}
