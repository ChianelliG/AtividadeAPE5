#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, tserv;
	
	printf("\nDigite qual a idade do trabalhador: ");
	scanf("%d", &idade);
	printf("\nDigite qual o tempo de trabalho: ");
	scanf("%d",&tserv);
	
	if(idade >= 65){
		printf("\nO trabalhador pode se aposentar.");
	}else if(tserv >= 30){
		printf("\nO trabalhador pode se aposentar.");
	}else if(idade >= 60 && tserv >= 25){
		printf("\nO trabalhador pode se aposentar.");
	}else{
		printf("\nO trabalhador nao pode se aposentar.");
	}
	printf("\n");
	system("pause");
}
