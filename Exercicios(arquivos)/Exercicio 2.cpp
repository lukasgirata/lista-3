#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	int idade;
	
	printf("Insira sua idade: ");
	scanf("%d",&idade);
	
	if(idade>17){
		printf("Voce e maior de idade!");
	}else if(idade<18){
		printf("Voce e menor de idade!");
	}
	
	return 0;
	
}