#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

struct TPessoa
{
	
	int codigo,idade;
	char nome[50],sexo[50];
	float altura,peso;
	
};

int main()
{
	
	int i,op,tam,excluir_codigo,alterar_codigo,apenas_cadastro,j,cont;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("digite a quantidade de pessoas a serem cadastradas:\n");
	scanf("%d", &tam);
	
	struct TPessoa p[tam];
	
	for(i = 0; i < tam; i++){
		
		system("cls");
		
		printf("digite seu codigo:");
		scanf("%d", &p[i].codigo);
		
		fflush(stdin);
		printf("digite seu nome:");
		fgets( p[i].nome, 30,stdin);
		
		printf("digite sua idade:");
		scanf("%d", &p[i].idade);
		
		fflush(stdin);
		printf("digite seu sexo:");
		fgets(p[i].sexo,30,stdin);
		
		printf("digite seu peso:");
		scanf("%f", &p[i].peso);
		
		printf("digite sua altura:");
		scanf("%f", &p[i].altura);
		
		
	}
	op:
		
	system("cls");
	
	printf("1 - visualizar todos os cadastros\n2 - excluir cadastro\n3 - alterar informaçoes do cadastro\n4 - visualizar apenas um cadastro\n5 - sair do programa\n");
	scanf("%d",&op);
	
	switch(op)
	{
		
		case 1:
			
			system("cls");
			
			for(i = 0; i < tam; i++)
			{
				
				printf("\n");
				
				printf("codigo: %d\nnome: %sidade: %d\nsexo: %speso: %.2f\naltura: %.2f\n",p[i].codigo,p[i].nome,p[i].idade,p[i].sexo,p[i].peso,p[i].altura);
				
			}
			
			system("pause");
				
			goto op;
			
		break;
		
		case 2:
			
			inicio2:
				
			system("cls");
			
			printf("digite o codigo do cadastro:");
			scanf("%d",&excluir_codigo);
			
			for(i = 0; i < tam; i++)
			{
				
				if(p[i].codigo == excluir_codigo)
				{
					cont = i;
					
					for(j = cont; j < tam; j++)
					{
						
						p[cont].codigo = p[cont + 1].codigo;
						
						strcpy(p[cont].nome,p[cont + 1].nome);
						
						p[cont].idade = p[cont + 1].idade;
						
						strcpy(p[cont].sexo,p[cont + 1].sexo);
						
						p[cont].peso = p[cont + 1].peso;
						
						p[cont].altura = p[cont + 1].altura;
						
						cont++;
						
					}
					
					tam--;
			
					goto op;
					
				}
					
			}
			
			system("cls");
					
			printf("codigo digitado invalido... tente novamente");
					
			system("pause");
					
			goto inicio2;
			
		break;
		
		case 3:
			
			inicio3:
				
			system("cls");
			
			printf("alteraçao de dados do cadastro\n");
			
			printf("digite o codigo do cadastro:\n");
			scanf("%d",&alterar_codigo);
			
			for(i = 0; i < tam; i++)
			{
				
				if(p[i].codigo == alterar_codigo)
				{
				
					system("cls");
					
					printf("alteraçao de dados do cadastro\n");
					
					printf("digite seu novo codigo:");
					scanf("%d", &p[i].codigo);
					
					fflush(stdin);
					printf("digite seu novo nome:");
					fgets( p[i].nome, 30,stdin);
					
					printf("digite sua nova idade:");
					scanf("%d", &p[i].idade);
					
					fflush(stdin);
					printf("digite seu novo sexo:");
					fgets(p[i].sexo,30,stdin);
					
					printf("digite seu novo peso:");
					scanf("%f", &p[i].peso);
					
					printf("digite sua nova altura:");
					scanf("%f", &p[i].altura);
					
					goto op;
			
				}
				
			}
			system("cls");
			
			printf("codigo digitado invalido\n");
			
			system("pause");
			
			goto inicio3;
		break;
		
		case 4:
			
			inicio4:
			
			printf("digite o codigo do cadastro qe deseja ver\n");
			scanf("%d", &apenas_cadastro);
			
			for(i = 0; i < tam; i++)
			{
				
				if(p[i].codigo == apenas_cadastro)
				{
					
					system("cls");
					
					printf("codigo: %d\nnome: %sidade: %d\nsexo: %speso: %.2f\naltura: %.2f\n",p[i].codigo,p[i].nome,p[i].idade,p[i].sexo,p[i].peso,p[i].altura);
							
					system("pause");
							
					goto op;
							
				}
				
			}
			
			system("cls");
			
			printf("codigo digitado invalido\n");
					
			system("pause");
			
			goto inicio4;
			
		break;
		
		case 5:
			
		break;
		
		default:
			
			system("cls");
			
			printf("opçao digitado invalido\n");
			
			system("pause");
			
			goto op;
			
		break;
			
	}
	
}