#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10
#include <string.h>


char nome[MAX][10000];
float nota1[MAX];
float nota2[MAX];
float nota3[MAX];
float media[MAX];
float maiorv;
int i=0;
char proc[MAX][10000];


void AdAluno(){
		
	    if(i<10){
	    printf("\nDados dos alunos: \n");
		printf("\nNome do %dº aluno: ", i+1);
		scanf(" %[^\n]", nome[i]);
		printf("1ª Nota do aluno: ");
		scanf("%f", &nota1[i]);
		printf("2ª Nota do aluno: ");
		scanf("%f", &nota2[i]);
		printf("3ª Nota do aluno: ");
		scanf("%f", &nota3[i]);
		printf("Aluno cadastrado!\n\n");
        i++;
        } else
        {
            printf("\nLimite máximo de alunos atingido! (10 alunos)\n");
        }
}
void medias(){

	
	for(int j = 0; j < i; j++)
    
    {
       media[j] = (nota1[j]+nota2[j]+nota3[j])/3;
    
	}
}	
void maiormedia(){
    
 	medias();

maiorv = media[0];

for (int j = 0; j < i ; j++){
    if(media[j]>=maiorv){
        maiorv=media[j];
    }
    
}
printf("\nMaior média: \n");
for(int j = 0; j < i; j++){
    if(maiorv==media[j]){
        printf("Nome: %s\n", nome[j]);
        printf("Média: %.2f\n\n", media[j]);
        
}
}

}
void exibir(){
    	medias();
    
	for (int j = 0; j < i; j++){
		printf("Nome do %dº aluno : %s\n",j+1, nome[j]);
		printf("Média: %.2f\n\n", media[j] );
		
	}
}
void mediaaluno(){
	int check=0;
	medias();
	printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", proc);
   


		
    for (int j = 0; j < i; j++) {
    	
        if (strcmp(proc[0], nome[j]) == 0) 
		{ 
            printf("Nome: %s\n", nome[j]);
            printf("Média: %.2f\n\n", media[j]);
            check++;
        }
    }

    if (check == 0) {
        printf("Aluno não encontrado!\n\n");
    }
}


int main(){
	int op;
	setlocale(LC_ALL, "Portuguese");
	
do{
	
	printf("\nEscolha uma das opções a seguir: \n1 - Adicionar alunos e notas\n2 - Calcular e exibir a média de um aluno\n3 - Exibir informações sobre todos os alunos\n4 - Exibir maior média\n5 - Limpar tela\n0 - Sair\nOpção escolhida: ");
	scanf("%d",&op);
	switch(op) { 
	
	case 1:
	AdAluno();
	break;
	
	case 2:
	if(i!=0)
	{
	mediaaluno();
	} else {
	printf("Nenhum dado foi inserido!");
	}
	break;
	
	case 3:
	if(i!=0)
	{
	exibir();
	} else {
	printf("Nenhum dado foi inserido!");
	}
	break;
	
	case 4:
	if(i!=0)
	{
	maiormedia();
	} else {
	printf("Nenhum dado foi inserido!");
	}
	break; 
	
	case 5:
	system("cls");
	break;
	
	case 0:
	printf("Acesso finalizado!");
	break;
	
	default: 
	printf("Opção inválida!\nTente Novamente\n");	}
	
} while(op!=0);
}
