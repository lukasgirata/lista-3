#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	int num;
	
	printf("Insira um numero inteiro: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("O numero e par");
	}else{
		printf("O numero e impar");
	}
	
	return 0;
	
}