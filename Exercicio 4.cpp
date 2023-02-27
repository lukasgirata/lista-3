#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	char letra;
	
	printf("Insira uma letra: ");
	scanf("%s",&letra);
	
	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U'){
		printf("A letra inserida e uma vogal!");
	}else{
		printf("A letra inserida e uma consoante!");
	}
	
	return 0;
	
}


