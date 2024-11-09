#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>
#include <time.h>

int main (){
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3],maiorv,menorv,num, enc=0;
	
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			matriz[i][j] = rand()%100;
			printf("Valor da posição [%d][%d]: %d \n", i, j, matriz[i][j]);
		}
	}
	printf("\nDigite um valor a buscar: ");
	scanf("%d", &num);
	
	maiorv = matriz[0][0];
	menorv = matriz[0][0];
	
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if(matriz[i][j] > maiorv)
			{
				maiorv = matriz [i][j];
			} 
				
				else if(matriz[i][j] < menorv) 
			{
				menorv = matriz [i][j];
			}
			
			if(num==matriz[i][j]){
				printf("\nValor %d encontrado na posição: [%d][%d] \n", num, i, j);
				enc++;
			}
		}
	}
	
	if(enc==0)
	{
		printf("\nValor não encontrado! \n");
	}
		printf("Maior valor da matriz: %d \n", maiorv);
		printf("Menor valor da matriz: %d \n", menorv);
		
}
