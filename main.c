#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<conio.h>
#include <locale.h>

int opc;
char nick[20];

  void Nome(){
  	
	system("cls");
	printf ("---------------------------------- \n");
	printf ("Menu entrar com jogador \n");
	printf ("---------------------------------- \n");
	printf ("\n");
	printf ("Digite o Nome do Participante: \n");
	scanf (" %c", &nick);
	system("cls");
	printf ("Seja Bem vindo %c \n", nick);
	printf ("Este � um jogo de perguntas e respostas. O jogador dever� escolher, ");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar enter. ");
	printf ("Para mais informac�es, acesse a opc�o intruc�es do menu do jogo.");
	
} 

void Escolha(int opc2){
	
	char resp;
	
	switch (opc2){
		
		case 0 :{
			
			printf ("---------------------------------- \n");
			printf ("	Menu Principal\n");
			printf ("---------------------------------- \n");
			printf ("Deseja realmente sair do jogo? S - Sim / N - N�o \n");
			scanf (" %c", &resp);
			
			if (resp == 'S' || resp == 'N'){
				if (resp == 'S')
					exit(0);
				else{
					system("cls");
					Menu();
				}
			}
			else{
				printf("Op��o Inv�lida! Voltando para o menu! \n");
				Sleep(2000);
				system("cls");
				Menu();
			}
		break;
		}
		
		case 1 :{
			Nome();
			break;
		}
		
		case 2 :{
			
			break;
		}
		
		case 3 :{
			
			break;
		}
		
		case 4 :{
			
			break;
		}
		
		case 5 :{
			printf ("---------------------------------- \n");
			printf ("	Menu de Instru��es\n");
			printf ("---------------------------------- \n");
			printf ("\n");
			printf ("\n");
			printf ("Este � um divertido jogo de perguntas e respostas. O jogador dever� escolher,");
			printf (" dentre as 4 alternativas (A, B, C, D), apenas uma e em seguida pressionar enter. \n");
			printf ("O jogo lhe informa se voc� acertou ou errou a quest�o.\n");
			printf ("O jogo possui 3 niveis de dificuldade: \n");
			printf ("Todos N�veis - Neste modo vc jogara o game completo");
			printf (" ao final ver� seus resultados com figuras em caracteres ASCII,");
			printf (" estes s�o os famosos memes da internet, s�o varios que");
			printf (" s�o mostrados de acordo com sua pontua��o. \n");
			printf ("Os niveis podem ser jogados de forma individual sem precisar");
			printf (" jogar o game completo.");
			printf ("\n");
			printf ("Sistema de pontuacao do game. \n");
			printf ("N�vel f�cil - Cada resposta certa valer� 150 pontos");
			printf ("N�vel m�dio - Cada resposta certa valer� 200 pontos \n");
			printf ("N�vel dif�cil - Cada resposta certa valer� 250 pontos \n");
			printf ("\n");
			printf ("Basicamente eh isso, divirta-se. \n");
			printf ("\n");
			printf ("Voltar para o menu? S - Voltar ou N - Sair \n");
			scanf (" %c", &resp);
			if (resp == 'S' || resp == 'N'){
				if (resp == 'S'){
					system("cls");
					Menu();
				}
				else{
					exit(0);
				}
			}
			else{
				printf("Op��o Inv�lida! Voltando para o menu! \n");
				Sleep(2000);
				system("cls");
				Menu();
			}
					
			break;
		}
		
		case 6 :{
			printf ("---------------------------------- \n");
			printf ("	Menu dos Desenvolvedores\n");
			printf ("---------------------------------- \n");
			printf("\n");
			printf("Luis Eduardo Ribeiro Teixeira \n");
			printf("Pedro Paulo \n");
			printf("Renato Augusto \n");
			Sleep(5000);
			system("cls");
			Menu();
	
			break;
		}
		
		case 7 :{
			
			break;
		}
		
		default:{
			printf("Op��o Inv�lida! Digite de 0 a 7! \n");
			scanf ("%d", &opc);
			Escolha(opc);
			break;
		}
	}

}


void Menu() {
	
	printf ("*------------------------------------------------------* \n");
	printf ("|                    MENU DE OP��ES                    | \n");
	printf ("*------------------------------------------------------* \n");
	printf ("|  0 - Sair do Game                                    | \n");
	printf ("|  1 - Jogar todos os n�veis                           | \n");
	printf ("|  2 - Jogar N�vel F�cil                               | \n");
	printf ("|  3 - Jogar N�vel M�dio                               | \n");
	printf ("|  4 - Jogar N�vel D�ficil                             | \n");
	printf ("|  5 - Ver instru��es do jogo e informa��es            | \n");
	printf ("|  6 - Ver os Desenvolvedores                          | \n");
	printf ("|  7 - Ver Pontua��o                                   | \n");
	printf ("*------------------------------------------------------* \n");
	
	printf("O que deseja fazer? \n");
	scanf ("%d", &opc);
	system("cls");
	
	Escolha(opc);
}

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	printf ("---------------------------------- \n");
	printf ("	Menu Principal\n");
	printf ("---------------------------------- \n");
	
	Sleep(2000);
	
	system("cls");
	
	Menu();
	
	return 0;
}
