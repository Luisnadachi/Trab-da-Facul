#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <string.h>

#define esc 27

int opc;
char nick[25];
char alt, correta, correta2, esc2;
int acertos_f, pontos_f;
int primeira = 1, nivel = 0;
float porc;


void Verifica(char alt, char correta, char correta2){
	if (alt == correta || alt == correta2){
		printf ("Resposta Correta! \n");
		Calculo();
	}
	else{
		printf ("Resposta errada! \n");
		printf ("A resposta certa �: %c", correta);
	}
}

double Calculo_Porc( int acertos_f){
	
	float porc_f;

	porc_f = acertos_f * 10;
	
	return (porc_f);
	
}

int Calculo(){
	switch (nivel){
		
		case 1:{
			if (primeira == 1){
				primeira = 0;
				pontos_f = 0;
				pontos_f += 150;
				acertos_f += 1;
		
				return (pontos_f, acertos_f);
			}
			else{
				pontos_f += 150;
				acertos_f += 1;
		
				return (pontos_f, acertos_f);
				}
			break;
		}
		
		case 2:{
			
			break;
		}
	}
	
		
}

void Terceira(){
	
}

void Segunda(){
	
}

void Primeira(){
	
	primeira = 1;
	nivel = 1;
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 1   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O que significa CPU:");
	printf ("\n");
	printf ("A) Control Panel Unit - Unidade de Painel de Controle \n");
	printf ("B) Central Power Unit - Unidade de For�a Central  \n");
	printf ("C) Control Power Unit - Unidade de Controle de Energia  \n");
	printf ("D) Central Processing Unit - Unidade Central de Processamento \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 2   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais s�o as principais fabricantes de processadores para Desktops e notebooks: ");
	printf ("\n");
	printf ("A) Intel e Dell  \n");
	printf ("B) Dell e AMD   \n");
	printf ("C) Intel e AMD  \n");
	printf ("D) AMD e IBM  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 3   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais s�o os sintomas mais comuns de superaquecimento do processador: ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-m�e \n");
	printf ("B) Reinicios e congelamentos inesperados da m�quina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Sleep(1000);
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 4   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O que quer dizer bug: ");
	printf ("\n");
	printf ("A) � a mem�ria que facilita as tarefas e liberta o processador.  \n");
	printf ("B) � um tipo de perif�rico.  \n");
	printf ("C) � um erro de programa��o.   \n");
	printf ("D) � uma pe�a de hardware   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 5   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O SPAM atualmente em 2012 corresponde a aproximadamente:  ");
	printf ("\n");
	printf ("A) 50%% de todos os emails \n");
	printf ("B) 40%% de todos os bancos de dados mundiais  \n");
	printf ("C) 80%% de todos os provedores de internet    \n");
	printf ("D) 32%% da internet   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 6   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A velocidade dos processadores atuais � normalmente medida em:  ");
	printf ("\n");
	printf ("A) Hertz ou Hz   \n");
	printf ("B) Gigahertz ou GHz  \n");
	printf ("C) Quilo byte ou Kb   \n");
	printf ("D) Megabyte ou MB   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 7   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O formato padr�o dos arquivos gerados pelo Word �:  ");
	printf ("\n");
	printf ("A) txt. \n");
	printf ("B) doc. \n");
	printf ("C) xls. \n");
	printf ("D) html. \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 8   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A extens�o padr�o de arquivos de �udio no windows �:  ");
	printf ("\n");
	printf ("A) WAV. \n");
	printf ("B) BIN. \n");
	printf ("C) ARC. \n");
	printf ("D) WMF.  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 9   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O n�mero bin�rio 10101010 equivale a qual n�mero decimal apresentado: ");
	printf ("\n");
	printf ("A) 140  \n");
	printf ("B )150  \n");
	printf ("C) 160  \n");
	printf ("D) 170  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 10   - N�vel F�cil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("� um tipo de computador que tem como fun��o controlar as demais estac�es de trabalho quando ligados em uma rede de computadores: ");
	printf ("\n");
	printf ("A) Esta��o de trabalho.  \n");
	printf ("B) UMPC  \n");
	printf ("C) Servidor \n");
	printf ("D) Desktop  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000);  
	
	system("cls");
	
	porc = Calculo_Porc(acertos_f);
	
	printf ("Pontua��o do jogador:%s \n", nick);
	printf ("A sua pontua��o foi de: %d \n", pontos_f);
	printf ("A porcentagem de acerto foi de:%% %4.2f \n", porc);
	
	printf ("\n");
		
	if (esc2 == 0x0A || esc2 != 27){
		system("cls");
		Sleep(1000);
		Menu();
	}
	else{
		printf("Saindo do Jogo!");
		Sleep(2000);
		exit(0);
	}
	
	
	return;
}

void Nome(){
  	
	system("cls");
	printf ("---------------------------------- \n");
	printf ("Menu entrar com jogador \n");
	printf ("---------------------------------- \n");
	printf ("\n");
	printf ("Digite o Nome do Participante: \n");
	scanf (" %s", &nick);
	system("cls");
	printf ("Seja Bem vindo %s \n", nick);
	printf ("Este � um jogo de perguntas e respostas. O jogador dever� escolher, ");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar enter. ");
	printf ("Para mais informac�es, acesse a opc�o intruc�es do menu do jogo.");
	
	return;
	
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
			Primeira();
			Segunda();
			Terceira();
			break;
		}
		
		case 2 :{
			Nome();
			Primeira();
			printf ("Aperte ENTER para ir pro menu ou ESC para sair! \n");
			esc2 = _getch();
			break;
		}
		
		case 3 :{
			Nome();
			
			break;
		}
		
		case 4 :{
			Nome();
			
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
			printf ("N�vel f�cil - Cada resposta certa valer� 150 pontos \n");
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
			main();
	
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
	
	return;

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
	
	return;
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
