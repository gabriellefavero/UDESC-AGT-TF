#include <stdio.h> 
#include <stdlib.h>
#include<string.h>
#include <conio.c>
#include <time.h>

int main (void)
{
	int opcao=1, guess=0, nguess[5], numerorand[5], i, cont,aux=0, voltar;
	
	srand(time(NULL));

	for (i=0;i<=4;i++)
	{
		numerorand[i]=0;
		nguess[i]=0;
	};
	
 	//** menu //** 
	while (opcao!=6)
	{ 
		textcolor(2);
		printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
		printf("          x                                                          x\n");
		printf("          x                       >>>>MENU<<<<                       x\n");
		printf("          x                                                          x\n");
		printf("          x              1 - NOVO JOGO                               x\n");
		printf("          x              2 - HISTORICO                               x\n");
		printf("          x              3 - LIMPAR HISTORICO                        x\n");
		printf("          x              4 - REGRAS DO JOGO                          x\n");
		printf("          x              5 - CREDITOS                                x\n");
		printf("          x              6 - SAIR                                    x\n");
		printf("          x                                                          x\n");
		printf("          x                                                          x\n");
		printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
		textcolor(11);
		printf("Opcao selecionada: ");
		scanf("%i", &opcao);
		textcolor(15);
		
		switch (opcao)
		{
			case 1:	
			{
				system ("cls");
				i=aux;
				nguess[i]=1;
				numerorand[i] = ( rand() % 100+1 );
				textcolor(11);
				printf("\n          >>> PARA VOLTAR AO MENU A QUALQUER MOMENTO DIGITE 999 <<< ");
				printf("\n  >> Numero aleatorio entre 1 e 100 gerado! De um palpite e tente acerta-lo: ");
				scanf("%d", &guess);
				printf("\n");

				while(guess!=numerorand[i] && guess!=999)
				{
					nguess[i]++;
					
					if (guess>numerorand[i] && guess!=999)
					{	
						textcolor(5);
						if (guess>numerorand[i]+50)
						{
							printf("  ** ESTA FRIO! **\n");  //** QUENTE e FRIO dizem o quao proximo o palpite esta //** 
						};
						if (guess>numerorand[i] && guess<numerorand[i]+10)
						{
							printf("  ** ESTA QUENTE **\n");
						};
						
						printf("  >>> Opa, esse nao e o numero, tente um menor: ");
						scanf("%d", &guess);	
						printf("\n");
					};
							
					if (guess<numerorand[i])
					{
						textcolor(3);
						if (guess<numerorand[i]-50)
						{
							printf("  ** ESTA FRIO **\n");
						};
						if (guess<numerorand[i] && guess>numerorand[i]-10)
						{
							printf("  ** ESTA QUENTE **\n");
						};
						
						printf("  >>> Opa, esse nao e o numero, tente um maior: ");
						scanf("%d", &guess);
						printf("\n");
			      		      	};
				};
				
     			if (guess==999)   //** Opcao de saida com o jogo em andamento //** 
				{
					textcolor(3);
					printf("             >> Pressione qualquer tecla para voltar ao menu <<");
					getch(); 
			    };
      	
				if (guess==numerorand[i])
				{
					system ("cls");	 
					textcolor(11);
					printf("\n");
					printf("          ____________________________________________________________  \n");
					printf("         |                                                            | \n ");
 					printf("        |              YOU ARE THE CHAMPION, MY FRIEND!              | \n ");
 					printf("        |____________________________________________________________| \n");
 					printf("\n");
					textcolor(12);
					printf("                           o¶¶                             \n                          ¶¶                             \n                           o¢$ø                            \n                            ¶¶¶                            \n                             ¶¶¶                           \n                            oo¶¶o                          \n                            11¶¶ø                          \n                              ¶¶¶¶                         \n                              1¶1¶¶7 ø¶¶¶¶¶¶               \n                               ¶ø¶ø  ¶¶¶¶¶¶¶               \n                               ¶o   1¶     ¶               \n                                 ø   1 ¶$¢o¢               \n                              ¶¶¶¶¶¶¶¶¶¶¶¶ o1              \n                           17¶¶¶¶¶1  ¶¶¶¶ $¢ø¶¶7           \n                            7¶¶¶¶7   ¶¶71 77  1oo          \n                           ¢  ¶¶$    ¶ 77$1$ø ø¶ø          \n                            7¶¶¶       ¶11¶ $7  ¶          \n                          7¢¶o ø      o¶1 o ¶¶¶7ø          \n                          ¢7   o    o  ¶¢1  ¶øoø¶¢         \n                               ¶   o¶¶o ¶  ¶17¶  1o        \n                               ¶    1øo1¶¶ $  ¶¶ 1o1       \n                               o 7ø¶¶    ¶oø  ¶¶1 1o       \n                               7o¢1¶      ¶o   ø7  ¶¶      \n                               ø   o¶oø   o¶o   ¶17$7      \n                              ¶      ¶ ¶1¶¶o¶    ¶¶¶$¢     \n                              ø 1      ¶¶¶¶¶¶7     $ø¢     \n                             7ø7o7$o71¶¶¶¶¶ ¢¶     ¶$      \n                             7 7¶¶¶¶¶¶¶¶7    ¶$            \n                            ¶  o¶¶$¶¶  ¶¶¶   $¶1   ø       \n                           1  ¶¶   ¶1   ¶¶¶¶  ¶¶  17       \n                           ¶¢  ¶ 7 7     o¶1$ 7¶¶  1       \n                          o  ¶ ¶ ø7      1$$¶  ø¶ 11       \n                         1¶¶¶¶ø¶¶7         ø ¶1 ¶ ¢        \n                        ¶¶ 1   ¶            ¶¶¶¶¢7¶        \n                        ¶     o              ¶¶¶¶¢         \n                       ¶7    ø                ø¶¶¶ø¶       \n                      ¶ø    ø                  ¶¶¢o $      \n                     ø  7 7$                    ¶¶  ¶ø     \n                    $$¶¢ 1¶                      ¶¶1¶¶     \n                  17o   1ø                       ¢¶¶ o¶    \n                       11                        71¶¶ o¶1  \n                 o1o¢  1                           o¶o     \n                 ¶¶¶ ¶                              ¢7¶7¶o \n");
			
					textcolor(15);
					printf("\n\n              Parabens! Seus poderes de vidente funcionaram!");
					printf("\n              Voce acertou o numero em %d tentativas!", nguess[i]);
					printf("\n              >> Pressione qualquer tecla para voltar ao menu <<\n\n");
					getch(); 
				};
				
				if (i==5) //** Para o historico funcionar com mais de 5 jogos feitos //**
				{
					for (i=0; i<=4; i++)
					{
						numerorand[i]= numerorand[i+1];
						nguess[i] = nguess[i+1];	
					};
					i=4;
				};
	                  
				i=i+1;	
				aux=i;	
				system ("cls");	
				break;
			};
			
			case 2:	
			{
				system ("cls");
				printf("\n");
				textcolor(11);
				printf("         ____________________________________________________________  \n");
				printf("        |                                                            | \n ");
 				printf("       |               HISTORICO DOS ULTIMOS 5 JOGOS                | \n ");
 				printf("       |____________________________________________________________| \n");
 				textcolor(15);	
				printf ("\n                         Numero\t      |      Tentativas\n\n");
				for (i=4; i>=0; i--)
				{
					if ((numerorand[i]!=0)&&(nguess[i]!=0))
					{
						printf ("                            %03d       |       %03d \n", numerorand[i], nguess[i]);
					};
				}; 
				printf("\n\n             >> Pressione qualquer tecla para voltar ao menu <<\n\n");
				getch(); 
				system ("cls");
				break;
			};
			
			case 3:
			{
				system ("cls");
				
				for (i=0;i<=4;i++)
				{
					numerorand[i]=0;
					nguess[i]=0;
				};
				printf("\n");
				textcolor(11);
				printf("         ____________________________________________________________  \n");
				printf("        |                                                            | \n ");
 				printf("       |                  O HISTORICO FOI LIMPO!!!                  | \n ");
 				printf("       |____________________________________________________________| \n");		
				printf("\n             >> Pressione qualquer tecla para voltar ao menu <<\n\n");
				getch(); 
				system ("cls");
				break;
			};
			
			case 4:
			{
				system ("cls");
				textcolor(10);
				printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
				printf("          x                                                           x\n");
				printf("          x                   >>>>REGRAS DO JOGO<<<<                  x\n");
				printf("          x                                                           x\n");
				printf("          x      >>> SERA SORTEADO UM NUMERO SECRETO DE 1 A 100       x\n");
				printf("          x  >>> O JOGADOR TEM A MISSAO DE ADIVINHA-LO DANDO PALPITES x\n");
				printf("          x       >>> UTILIZE SEUS MELHORES PODERES DE VIDENTE        x\n");
				printf("          x        >>> PARA SAIR DURANTE O JOGO, DIGITE '999'         x\n");
				printf("          x                    >>> BOA SORTE!!!                       x\n");
				printf("          x                                                           x\n");
				printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
				printf("\n               >> Pressione qualquer tecla para voltar ao menu <<\n\n");
				getch(); 
				system ("cls");
				break;
			};
	
			case 5:
			{
				system ("cls");
				textcolor(10);
				printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
				printf("          x                                                           x\n");
				printf("          x                      >>>>CREDITOS<<<<                     x\n");
				printf("          x                                                           x\n");
				printf("          x      >>> ALUNOS:                                          x\n");
				printf("          x        > GABRIELLE SOUZA FAVERO                           x\n");
				printf("          x        > RICCARDO LEONARDO HILLE                          x\n");
				printf("          x                                                           x\n");
				printf("          x      >>> PROFESSORA:                                      x\n");
				printf("          x        > KARINA GIRARDI ROGGIA                            x\n");
				printf("          x                                                           x\n");
				printf("          x    TECNOLOGIA EM ANALISE E DESENVOLVIMENTO DE SISTEMAS    x\n");
				printf("          x     UNIVERSIDADE DO ESTADO DE SANTA CATARINA - UDESC      x\n");
				printf("          x                                                           x\n");
				printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
				printf("\n               >> Pressione qualquer tecla para voltar ao menu <<\n\n");
				getch(); 
				system ("cls");
				break;
			};
			
			default:  //** Opcoes do menu que nao sao de 1 a 4 //**
			{
				if(opcao==6)
				{
				continue;    
				};	
				system ("cls");
				textcolor(11);
				printf("         ____________________________________________________________  \n");
				printf("        |                                                            | \n ");
 				printf("       |                  EI! ESSA OPCAO NAO EXISTE                 | \n ");
 				printf("       |____________________________________________________________| \n");
				printf("\n          >> Pressione qualquer tecla para voltar ao menu <<\n\n");
				getch(); 
				system ("cls");
				break;
			};
		}; //** Fim do switch case //**
		};
		
		if(opcao==6)   //** Opcao sair //**
		{
			system ("cls");
			textcolor(11);
			printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
			printf("          x                                                           x\n");
			printf("          x            >>>   AH, VOCE JA VAI EMBORA?   <<<            x\n");
			printf("          x                                                           x\n");
			printf("          x                    >> ATE A PROXIMA <<                    x\n");
			printf("          x                                                           x\n");
			printf("          x           > PARA SAIR PRESSIONE QUALQUER TECLA <          x\n");
			printf("          x                                                           x\n");
			printf("          xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
		textcolor(15);
		};
		return 0;
}
