#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<conio.h>
#include <locale.h>

int opc; 

void escolha(int opc2){
	
	char resp;
	
	switch (opc2){
		
		case 0 :{
			
			system("cls");
			printf ("---------------------------------- \n");
			printf ("	Menu Principal\n");
			printf ("---------------------------------- \n");
			printf ("Deseja realmente sair do jogo? S - Sim / N - Não \n");
			scanf (" %c", &resp);
			if (resp == 'S')
				exit(0);
			else
				system("cls");
				menu();
			break;
		}
		
		case 1 :{
			
			break;
		}
	}

}


void menu() {
	
	printf ("*------------------------------------------------------* \n");
	printf ("|                    MENU DE OPÇÕES                    | \n");
	printf ("*------------------------------------------------------* \n");
	printf ("|  0 - Sair do Game                                    | \n");
	printf ("|  1 - Jogar todos os níveis                           | \n");
	printf ("|  2 - Jogar Nível Fácil                               | \n");
	printf ("|  3 - Jogar Nível Médio                               | \n");
	printf ("|  4 - Jogar Nível Díficil                             | \n");
	printf ("|  5 - Ver instruções do jogo e informações            | \n");
	printf ("|  6 - Ver os Desenvolvedores                          | \n");
	printf ("|  7 - Ver Pontuação                                   | \n");
	printf ("*------------------------------------------------------* \n");
	
	printf("O que deseja fazer? \n");
	scanf ("%d", &opc);
	
	escolha(opc);
}

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	printf ("---------------------------------- \n");
	printf ("	Menu Principal\n");
	printf ("---------------------------------- \n");
	
	Sleep(2000);
	
	system("cls");
	
	menu();
	
	return 0;
}
