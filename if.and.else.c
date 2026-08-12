#include <stdio.h>

int main(){
	float m;
	
	printf("Qual foi a sua media: ");
	scanf("%f", &m);
	
	if (m >= 7){
		printf("APROVADO!");
	}
	if (m >=4 && m < 7){
		printf("DESTINADO A AVALIACAO FINAL!");
	}
	if (m < 4){
		printf("REPROVADO!");
	}
	system("pause");
	
}
