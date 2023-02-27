#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	int num,num2;
	
	printf("Insira um numero: ");
	scanf("%d",&num);
	
	printf("Insira outro numero: ");
	scanf("%d",&num2);
	
	if(num>num2){
		printf("O numero maior e: %d",num);
	}else if(num2>num){
		printf("O numero maior e: %d",num2);
	}else if(num==num2){
		printf("Os dois numeros sao iguais");
	}
	
	return 0;
}