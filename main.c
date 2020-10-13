/*
	Alunos: Luis Eduardo R. Teixeira (20102361)
			Renato Augusto (20102357)
			Pedro Paulo F Cavalcante (20102471)
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <string.h>

#define esc 27

int opc;
char nick[25];
char alt, correta, correta2, esc2;
int acertos_f, pontos_f, acertos_m, pontos_m, acertos_d, pontos_d;
int primeira = 1, nivel = 0;
float porc_f, porc, porc2, porc3;


void Verifica(char alt, char correta, char correta2){
	if (alt == correta || alt == correta2){
		printf ("Resposta Correta! \n");
		Calculo();
	}
	else{
		printf ("Resposta errada! \n");
		printf ("A resposta certa é: %c", correta);
	}
}

double Calculo_Porc( int acertos_f){
	

	porc_f = acertos_f * 10;
	
	return (porc_f);
	
}

int Calculo(){
	switch (nivel){
		
		case 1:{
			if (primeira == 1){
				primeira = 0;
				pontos_f = 0;
				acertos_f = 0;
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
			if (primeira == 1){
				primeira = 0;
				pontos_m = 0;
				acertos_m = 0;
				pontos_m += 200;
				acertos_m += 1;
		
				return (pontos_m, acertos_m);
			}
			else{
				pontos_m += 200;
				acertos_m += 1;
		
				return (pontos_m, acertos_m);
				}
			
			break;
		}
		
		case 3:{
			if (primeira == 1){
				primeira = 0;
				pontos_d = 0;
				acertos_d = 0;
				pontos_d += 250;
				acertos_d += 1;
		
				return (pontos_d, acertos_d);
			}
			else{
				pontos_d += 250;
				acertos_d += 1;
		
				return (pontos_d, acertos_d);
				}
			
			break;
		}
	}
	
		
}

void Terceira(){
	
	primeira = 1;
	nivel = 3;
	
	system("cls");
	
	printf ("*-----------------------------------------------* \n");
	printf ("|| XXX    XX  XX  XX     XX  XXXXXXX  XX       || \n");
	printf ("|| XX X   XX  XX  XX     XX  XX       XX       || \n");
	printf ("|| XX  X  XX  XX   XX   XX   XXXXX    XX       || \n");
	printf ("|| XX   X XX  XX    XX XX    XX       XX       || \n");
	printf ("|| XX    XXX  XX     XXX     XXXXXXX  XXXXXX   || \n");
	printf ("*-----------------------------------------------* \n");
	printf ("|| XXXXXX    XX  XXXXX  XX   XXXXX  XX  XX     || \n");
	printf ("|| XX    XX  XX  XX     XX  XX      XX  XX     || \n");
	printf ("|| xX    XX  XX  XXXX   XX  XX      XX  XX     || \n");
	printf ("|| xX    XX  XX  XX     XX  XX      XX  XX     || \n");
	printf ("|| XXXXXX    XX  XX     XX   XXXXX  XX  XXXXXX || \n");
	printf ("*-----------------------------------------------* \n");
	Sleep (2000);
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 1   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quando foi lançado o primeiro microprocessador:");
	printf ("\n");
	printf ("A) Em 1971, havendo 3 concorrentes \n");
	printf ("B) Em 1985, pela ARM Foundation  \n");
	printf ("C) Em 1979, pela Motorola  \n");
	printf ("D) Em 1944, durante a Segunda Guerra Mundial \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 	
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 2   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quem foi o pai da computação: ");
	printf ("\n");
	printf ("A) Allan Moore  \n");
	printf ("B) Albert Einstein   \n");
	printf ("C) Thomas Ericsson  \n");
	printf ("D) Alan Turing  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 3   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O nome original do primeiro Xbox era: ");
	printf ("\n");
	printf ("A) DirectBox \n");
	printf ("B) BillBox \n");
	printf ("C) ZBox  \n");
	printf ("D) MicrosoftBox  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000);
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 4   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são as principais fabricantes de processadores ARM: ");
	printf ("\n");
	printf ("A) Samsung, PowerVR, AMD Tech e Intel  \n");
	printf ("B) Infineon Imaging, Texas Qualcomm e NVIDIA  \n");
	printf ("C) PowerVR, SGX, NVIDIA e Qualcomm Instruments   \n");
	printf ("D) Samsung, Texas Instruments, Qualcomm e NVIDIA   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 5   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Qual das pastas abaixo não pode ser criada no Windows:  ");
	printf ("\n");
	printf ("A) Trojan \n");
	printf ("B) Sys32  \n");
	printf ("C) Con    \n");
	printf ("D) Sys   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 6   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O que é firmware: ");
	printf ("\n");
	printf ("A) Interface básica do sistema operacional do Macintosh.   \n");
	printf ("B) Conjunto de instruções para o funcionamento de um dispositivo.  \n");
	printf ("C) Byte existente no inicio de uma trilha de disco.   \n");
	printf ("D) É um tipo de memória não volátil.   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 7   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A técnica em que parte do programa é armazenada em disco e levada para a memória para ser executada quando necessário é chamada de:  ");
	printf ("\n");
	printf ("A) armazenamento virtual \n");
	printf ("B) alocação de memória \n");
	printf ("C) priorização de memória \n");
	printf ("D) alocação de recursos \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 8   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("FSB (Front Size Bus), também conhecido como barramento frontal, realiza a ligação entre:  ");
	printf ("\n");
	printf ("A) o processador (CPU) e o chipset \n");
	printf ("B) o chipset e a memória RAM \n");
	printf ("C) o BIOS e a memória RAM \n");
	printf ("D) o chipset e a placa-mãe \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 9   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Em relação as topologias de redes, é correto afirmar que: ");
	printf ("\n");
	printf ("A) topologia em estrela todas as estações são interligadas duas a duas entre si.  \n");
	printf ("B) rede em anel consiste em estações conectadas atraves de um caminho fechado.  \n");
	printf ("C) redes por chaveamento de pacotes cada estação so pode realizar uma única tarefa.  \n");
	printf ("D) topologia em estrela a falha de qualquer das estações causa a parada total do sistema.  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 10   - Nível Díficil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("CGA, EGA, VGA e SVGA sao siglas que identificam adaptadores gráficos para: ");
	printf ("\n");
	printf ("A) Videos  \n");
	printf ("B) Impressoras  \n");
	printf ("C) Drivers \n");
	printf ("D) Teclados  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000);  
	
	system("cls");
	
	porc3 = Calculo_Porc(acertos_d);
	
	printf ("Pontuação do jogador:%s \n", nick);
	printf ("A sua pontuação foi de: %d \n", pontos_d);
	printf ("A porcentagem de acerto foi de:%% %4.2f \n", porc3);
	
	printf ("\n");
}

void Primeira(){
	
	primeira = 1;
	nivel = 1;
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 1   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O que significa CPU:");
	printf ("\n");
	printf ("A) Control Panel Unit - Unidade de Painel de Controle \n");
	printf ("B) Central Power Unit - Unidade de Força Central  \n");
	printf ("C) Control Power Unit - Unidade de Controle de Energia  \n");
	printf ("D) Central Processing Unit - Unidade Central de Processamento \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000); 	
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 2   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são as principais fabricantes de processadores para Desktops e notebooks: ");
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
	printf ("|  Pergunta 3   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais são os sintomas mais comuns de superaquecimento do processador: ");
	printf ("\n");
	printf ("A) Apitos agudos da placa-mãe \n");
	printf ("B) Reinicios e congelamentos inesperados da máquina \n");
	printf ("C) Cheiro de queimado que exala de dentro do gabinete   \n");
	printf ("D) Imagem corrompida, com cores trocadas e manchas  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Sleep(1000);
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 4   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O que quer dizer bug: ");
	printf ("\n");
	printf ("A) É a memória que facilita as tarefas e liberta o processador.  \n");
	printf ("B) É um tipo de periférico.  \n");
	printf ("C) É um erro de programação.   \n");
	printf ("D) É uma peça de hardware   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 5   - Nível Fácil  |");
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
	printf ("|  Pergunta 6   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A velocidade dos processadores atuais é normalmente medida em:  ");
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
	printf ("|  Pergunta 7   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O formato padrão dos arquivos gerados pelo Word é:  ");
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
	printf ("|  Pergunta 8   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A extensão padrão de arquivos de áudio no windows é:  ");
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
	printf ("|  Pergunta 9   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O número binário 10101010 equivale a qual número decimal apresentado: ");
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
	printf ("|  Pergunta 10   - Nível Fácil  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("É um tipo de computador que tem como função controlar as demais estacões de trabalho quando ligados em uma rede de computadores: ");
	printf ("\n");
	printf ("A) Estação de trabalho.  \n");
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
	
	printf ("Pontuação do jogador:%s \n", nick);
	printf ("A sua pontuação foi de: %d \n", pontos_f);
	printf ("A porcentagem de acerto foi de:%% %4.2f \n", porc);
	
	printf ("\n");
}

void Segunda(){
	
	primeira = 1;
	nivel = 2;
	
	system("cls");
	
	printf ("*-----------------------------------------------* \n");
	printf ("|| XXX    XX  XX  XX     XX  XXXXXXX  XX       || \n");
	printf ("|| XX X   XX  XX  XX     XX  XX       XX       || \n");
	printf ("|| XX  X  XX  XX   XX   XX   XXXXX    XX       || \n");
	printf ("|| XX   X XX  XX    XX XX    XX       XX       || \n");
	printf ("|| XX    XXX  XX     XXX     XXXXXXX  XXXXXX   || \n");
	printf ("*-----------------------------------------------* \n");
	printf ("|| XXXX   XXXX  XXXXXX  XXXXXXX    XX   XXXXX  || \n");
	printf ("|| XX XX XX XX  XX      XX    XX   XX  XX   XX || \n");
	printf ("|| XX  XXX  XX  XXXXX   XX     XX  XX  XX   XX || \n");
	printf ("|| XX   X   XX  XX      XX    XX   XX  XX   XX || \n");
	printf ("|| XX       XX  XXXXXX  XXXXXXX    XX   XXXXX  || \n");
	printf ("*-----------------------------------------------* \n");
	Sleep (2000);
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 1   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("O primeiro domínio registrado na internet foi:");
	printf ("\n");
	printf ("A) www.datacenter.com \n");
	printf ("B) www.symbolics.com  \n");
	printf ("C) www.social.com  \n");
	printf ("D) www.us.gov \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'B', correta2 = 'b');
	Sleep(1000); 	
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 2   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A maior parte das imagens da internet é composta por: ");
	printf ("\n");
	printf ("A) Papeis de parede  \n");
	printf ("B) GIFs animados   \n");
	printf ("C) Mulheres nuas  \n");
	printf ("D) Fotografia de Eletrônicos  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 3   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Quais destas não é uma linguagem de programação: ");
	printf ("\n");
	printf ("A) Cobol \n");
	printf ("B) Basic \n");
	printf ("C) Smalltalk   \n");
	printf ("D) Preview   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000);
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 4   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Qual a forma de memória mais rápida, presente nos nossos computadores: ");
	printf ("\n");
	printf ("A) A memória Flash  \n");
	printf ("B) A GDDR5  \n");
	printf ("C) A memória RAM DDR3   \n");
	printf ("D) A memória Cache   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 5   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Qual a vida útil estimada para um DVD de boa qualidade:  ");
	printf ("\n");
	printf ("A) Aproximadamente 100 anos \n");
	printf ("B) É impossivel medir a durabilidade  \n");
	printf ("C) 9 mil horas de leitura    \n");
	printf ("D) 350 mil dias   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'A', correta2 = 'a');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 6   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A unidade central de processamento (UCP) é composta de:  ");
	printf ("\n");
	printf ("A) Unidade Central de Processamento e Memória de Massa.  \n");
	printf ("B) Dispositivos ou Unidades de Entrada.  \n");
	printf ("C) Unidade Central de Processamento e Memoria Principal.   \n");
	printf ("D) Unidade de Controle e Unidade de Lógica e Aritmética.   \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 7   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("A unidade de medida da resolução de uma impressora é dada em:  ");
	printf ("\n");
	printf ("A) CPS. \n");
	printf ("B) BPM. \n");
	printf ("C) PPM. \n");
	printf ("D) DPI. \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 8   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Entre os meios de transmissão abaixo, assinale aquele que não é guiado:  ");
	printf ("\n");
	printf ("A) par trançado. \n");
	printf ("B) cabo coaxial. \n");
	printf ("C) microondas. \n");
	printf ("D) fibra ótica.  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 9   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Em modo de espera, quais componentes ficam ligados: ");
	printf ("\n");
	printf ("A) Placa mãe, processador, monitor  \n");
	printf ("B) Placa mãe, hd, monitor  \n");
	printf ("C) Placa mãe,memoria ram  \n");
	printf ("D) Placa mãe, Placa de rede, modem, memoria ram  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	Verifica(alt, correta = 'D', correta2 = 'd');
	Sleep(1000); 
	
	system("cls");
	printf ("*--------------------------------*");
	printf ("|  Pergunta 10   - Nível Médio  |");
	printf ("*--------------------------------*");
	printf ("\n");
	printf ("Qual destes sistemas operacionais e usado em trens: ");
	printf ("\n");
	printf ("A) Windows  \n");
	printf ("B) Linux  \n");
	printf ("C) Unix  \n");
	printf ("D) Android  \n");
	printf ("\n");
	printf ("Qual a alternativa certa? \n");
	scanf (" %c", &alt);
	
	Verifica(alt, correta = 'C', correta2 = 'c');
	Sleep(1000);  
	
	system("cls");
	
	porc2 = Calculo_Porc(acertos_m);
	
	printf ("Pontuação do jogador:%s \n", nick);
	printf ("A sua pontuação foi de: %d \n", pontos_m);
	printf ("A porcentagem de acerto foi de:%% %4.2f \n", porc2);
	
	printf ("\n");
				
	return;
}

void Play(){
  	
	system("cls");
	printf ("---------------------------------- \n");
	printf ("Menu entrar com jogador \n");
	printf ("---------------------------------- \n");
	printf ("\n");
	printf ("Digite o Nome do Participante: ");
	scanf (" %s", &nick);
	system("cls");
	printf ("Seja Bem vindo %s \n", nick);
	printf ("Este é um jogo de perguntas e respostas. O jogador deverá escolher, ");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar enter. ");
	printf ("Para mais informacões, acesse a opcão intrucões do menu do jogo.");
	printf ("\n");
	esc2 = getchar();
	printf ("Pressione ENTER para começar...");
	esc2 = fgetc(stdin);
	if (esc2 == 0x0A ){
		system("cls");
		Sleep(1000);
		switch (opc){
			
			case 1:{
				
				Primeira();
				Sleep(3000);
				system("cls");
				Segunda();
				Sleep(3000);
				system("cls");
				Terceira();
				esc2 = getchar();
				printf ("Aperte ENTER para ir pro menu ou ESC para sair! \n");
				esc2 = fgetc(stdin);
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
				break;
			}
			
			case 2:{
				
				Primeira();
				esc2 = getchar();
				printf ("Aperte ENTER para ir pro menu ou ESC para sair! \n");
				esc2 = fgetc(stdin);
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
				break;
			}
			
			case 3:{
				
				Segunda();
				esc2 = getchar();
				printf ("Aperte ENTER para ir pro menu ou ESC para sair! \n");
				esc2 = fgetc(stdin);
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
				break;
			}
			
			case 4:{
				
				Terceira();
				esc2 = getchar();
				printf ("Aperte ENTER para ir pro menu ou ESC para sair! \n");
				esc2 = fgetc(stdin);
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
				break;
			}
			
		}
	}
	else{
	printf("Saindo do Jogo!");
	Sleep(2000);
	exit(0);
	}
	
	return;
	
} 

void Escolha(int opc){
	
	char resp;
	
	switch (opc){
		
		case 0 :{
			
			printf ("---------------------------------- \n");
			printf ("	Menu Principal\n");
			printf ("---------------------------------- \n");
			printf ("Deseja realmente sair do jogo? S - Sim / N - Não \n");
			scanf (" %c", &resp);
			
			if (resp == 'S' || resp == 'N' || resp == 's' || resp == 'n'){
				if (resp == 'S' || resp = 's')
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
			
			Play();
			
			break;
		}
		
		case 2 :{
			Play();
			
			break;
		}
		
		case 3 :{
			Play();
			
			break;
		}
		
		case 4 :{
			Play();
			
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
			system("cls");
			printf ("---------------------------------- \n");
			printf ("	Menu de Pontuação \n");
			printf ("---------------------------------- \n");
			printf ("\n");
			printf ("Pontuação do jogador: %s \n", nick);
			printf ("Pontuação no Nível Fácil: %d \n", pontos_f);
			printf ("Porcentagem de acerto no Nível Fácil: %f", porc);
 			printf ("Pontuação no Nível Médio: %d \n", pontos_m);
			printf ("Porcentagem de acerto no Nível Médio: %f", porc2);
			printf ("Pontuação no Nível Díficil: %d \n", pontos_d);
			printf ("Porcentagem de acerto no Nível Díficil: %f", porc3);
			printf ("\n");
			Sleep (5000);
			system("cls");
			Menu();
			
			break;
		}
		
		default:{
			printf("Opção Inválida! Digite de 0 a 7! \n");
			scanf ("%d", &opc);
			Escolha(opc);
			break;
		}
	}
	
	return;

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
