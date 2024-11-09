#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10], num, op, cont=0;
	do{
	printf("Escolha uma opção:\n1:Preencher vetor\n2:Listar vetor\n3:Alterar valor\n4:procurar valor\n5:Inverter vetor\n6:Limpar tela\n7:Sair \n");
	scanf("%d",&op);
	
	switch(op){
	case 1: 
	for(int i = 0; i < 10; i++)
	{
		printf("Digite o valor da posição [%d]: ",i+1);
		scanf("%d", &vetor[i]);
		cont++;
	}break;
	
	case 2: 
	if(cont!=0){
		for(int i = 0; i < 10; i++)
	{
		printf("Valor da posição [%d]: %d \n",i+1,vetor[i]);
	}
	} else{
		printf("Vetor não preenchido! \n");
		}break;
	break;
	
	case 3:
	int posicao;
	if(cont!=0){
	printf("Qual posição você quer alterar?");
	scanf("%d",&posicao);
	if(posicao > 0 && posicao <= 10){
		printf("Digite o valor: ");
		scanf("%d",&vetor[posicao-1]);
	} else {
		printf("Posição não existe!");
	} 
	}else {
		printf("Vetor não preenchido! \n");
	} break;
	
	case 4: 
	int valor; 
	
	if(cont!=0){
	printf("Escolha um valor a procurar: ");
	scanf("%d", &valor);
	for(int i=0; i < 10; i++){
		if(valor==vetor[i]){
			printf("Valor encontrado na posição: %d \n", i+1);
			cont++;
		}
		}
		 if(cont==0){
			printf("Valor não encontrado! \n");}
			
		}else{
		printf("Vetor não preenchido! \n");
		}break;
		
		case 5:
		int temp;
		if(cont!=0){
		for(int i = 0; i < 5; i++){
			temp=vetor[i];
			vetor[i]=vetor[9-i];
			vetor[9-i]=temp;
		}}else{
		printf("Vetor não preenchido! \n");
		}break; 
		
		case 6: 
		system("cls");
		break;
		
		case 7:
		printf("Tchauzinho");
		break;
	}
	
	
	} while(op!=7);
}
