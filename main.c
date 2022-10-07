#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct cadastro{
	char nome[30], cpf[30], vacina[30], data[30], numlote[30];
		
};

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	int op, i, qnt, codigo;
	char consul[30];
	struct cadastro c1[qnt];
	
	op = 0;
	
	while(op != 4){
		printf("Para começar digite:\n\n\t 1- Para cadastrar vacinas.\n\t 2- Para listar aplicações.\n\t 3- Para consultar pro CPF.\n\t 4- para sair.\n");
		scanf("%d", &op);
		
		switch(op){
		case 1:
			system("cls");
			printf("Quantos cadastros deseja realizar?\n");
			scanf("%d", &qnt);
			fflush(stdin);
			system("cls");
			
			for(i = 1; i <= qnt; i++){
				
				codigo = i;
											
				printf("\nDigite e o nome do vacinado:");
				fflush(stdin);
				gets(c1[i].nome);
				
				printf("\nDigite e o CPF do vacinado:");
				fflush(stdin);
				gets(c1[i].cpf);
				
				printf("\nDigite a vacina que será aplicada no vacinado:");
				fflush(stdin);
				gets(c1[i].vacina);
				
				printf("\nDigite e a data da aplicação da vacina:");
				fflush(stdin);
				gets(c1[i].data);
				
				printf("\nDigite e o número do lote da vacina:");
				fflush(stdin);
				gets(c1[i].numlote);
				
				system("cls");
			}
		break;
		case 2:
			system("cls");
			for(i =1; i <= qnt; i++){
				printf("\nCodigo do vacinado:%d", i);
				printf("\nO nome do vacinado é:%s", c1[i].nome);
				printf("\nO CPF do vacinado é:%s", c1[i].cpf);
				printf("\nA vacina aplicada foi:%s", c1[i].vacina);
				printf("\nA data aplicada foi:%s", c1[i].data);
				printf("\nO número do lote aplicado foi:%s", c1[i].numlote);
				printf("\n\n\n");
				system("pause");
					
				}
		break;
		case 3:
			system("cls");
			for(i =1; i <= qnt; i++){
				printf("\ndigite o CPF q deseja consultar:");
				fflush(stdin);
				gets(consul);
				
				if(strcmp(consul, c1[i].cpf)== 0){
					printf("%s\n", c1[i].nome);
					printf("%s\n", c1[i].cpf);
					printf("%s\n", c1[i].data);
					printf("%s\n", c1[i].vacina);
					printf("%s\n", c1[i].numlote);										
				}
				else 
				printf("\nNao consta no sistema");
				
			}
			break;																																		 
	}
					
		
	}
	

	
	return 0;
}
