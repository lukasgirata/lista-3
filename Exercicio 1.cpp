#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	int num;
	
	printf("Insira um numero: ");
	scanf("%d",&num);
	
	if(num>0){
		printf("O numero e maior que 0");
	}else if(num<0){
		printf("o numero e menor que 0");
	}else if(num==0){
		printf("O numero e igual a 0");
	}
	
	return 0;
	
}