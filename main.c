#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <string.h>


int opc;
char nick[25];
char alt;
char correta;
char correta2;
int acertos_f;
int pontos_f;
float porc_f;
//int final = 0;
//int primeira = 1;


void Verifica(char alt, char correta, char correta2){
	if (alt == correta || alt == correta2){
		printf ("Resposta Correta! \n");
		Calculo_Facil();
	}
	else{
		printf ("Resposta errada! \n");
		printf ("A resposta certa é %c:", correta);
	}
}

void Calculo_Facil(){
	//if (primeira == 1){
	//	pontos_f = 0;
	//	porc_f = 0;
	//	final = 0;
//	}
	//else{
		pontos_f += 150;
		acertos_f += 1;
		//if (final == 1){
		//	porc_f = (porc_f * 10) / (100 * acertos_f);
	//	}
	//}
		
	
}

void Calculo_Medio(){
	
}

void Calculo_Dificil(){
	
}

void Calculo_Total(){
	
}

void Terceira(){
	
}

void Segunda(){
	
}

void Primeira(){
	
	//primeira = 1;
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 1   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O que significa CPU?");
	printf ("\n");
	printf ("A) Control Panel Unit - Unidade de Painel de Controle \n");
	printf ("B) Central Power Unit - Unidade de Força Central  \n");
	printf ("C) Control Power Unit - Unidade de Controle de Energia  \n");
	printf ("D) Central Processing Unit - Unidade Central de Processamento \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 2   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são as principais fabricantes de processadores para Desktops e notebooks? ");
	printf ("\n");
	printf ("A) Intel e Dell  \n");
	printf ("B) Dell e AMD   \n");
	printf ("C) Intel e AMD  \n");
	printf ("D) AMD e IBM  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 3   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Calculo_Facil();
	Sleep(1000);
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 4   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 5   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 6   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 7   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 8   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 9   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Calculo_Facil();
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 10   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador ? ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	//final = 1;
	Calculo_Facil();
	Sleep(1000);  
	

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
			Primeira();
			Segunda();
			Terceira();
			break;
		}
		
		case 2 :{
			Nome();
			Primeira();
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
			printf ("Nível fácil - Cada resposta certa valerá 150 pontos \n");
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
			main();
	
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
