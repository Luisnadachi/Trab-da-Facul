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
	printf ("Este é um jogo de perguntas e respostas. O jogador deverá escolher, ");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar enter. ");
	printf ("Para mais informacões, acesse a opcão intrucões do menu do jogo.");
	
} 

void Escolha(int opc2){
	
	char resp;
	
	switch (opc2){
		
		case 0 :{
			
			printf ("---------------------------------- \n");
			printf ("	Menu Principal\n");
			printf ("---------------------------------- \n");
			printf ("Deseja realmente sair do jogo? S - Sim / N - Não \n");
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
				printf("Opção Inválida! Voltando para o menu! \n");
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
			printf ("	Menu de Instruções\n");
			printf ("---------------------------------- \n");
			printf ("\n");
			printf ("\n");
			printf ("Este é um divertido jogo de perguntas e respostas. O jogador deverá escolher,");
			printf (" dentre as 4 alternativas (A, B, C, D), apenas uma e em seguida pressionar enter. \n");
			printf ("O jogo lhe informa se você acertou ou errou a questão.\n");
			printf ("O jogo possui 3 niveis de dificuldade: \n");
			printf ("Todos Níveis - Neste modo vc jogara o game completo");
			printf (" ao final verá seus resultados com figuras em caracteres ASCII,");
			printf (" estes são os famosos memes da internet, são varios que");
			printf (" são mostrados de acordo com sua pontuação. \n");
			printf ("Os niveis podem ser jogados de forma individual sem precisar");
			printf (" jogar o game completo.");
			printf ("\n");
			printf ("Sistema de pontuacao do game. \n");
			printf ("Nível fácil - Cada resposta certa valerá 150 pontos");
			printf ("Nível médio - Cada resposta certa valerá 200 pontos \n");
			printf ("Nível difícil - Cada resposta certa valerá 250 pontos \n");
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
				printf("Opção Inválida! Voltando para o menu! \n");
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
			printf("Opção Inválida! Digite de 0 a 7! \n");
			scanf ("%d", &opc);
			Escolha(opc);
			break;
		}
	}

}


void Menu() {
	
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
