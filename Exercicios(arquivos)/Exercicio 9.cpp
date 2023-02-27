#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main(){
	int num,num2,num3,ordem;
	
	printf("Insira um numero: ");
	scanf("%d",&num);
	
	printf("Insira outro numero: ");
	scanf("%d",&num2);
	
	printf("Insira mais um numero: ");
	scanf("%d",&num3);
	
	if(num>num2){
		ordem=num2;
		num2=num;
		num=ordem;
	}if(num2>num3){
		ordem=num3;
		num3=num2;
		num2=ordem;
	}if(num>num2){
		ordem=num2;
		num2=num;
		num=ordem;
	}printf("O maior numero e %d e o menor e %d",num,num3);
	
	return 0;
	
}