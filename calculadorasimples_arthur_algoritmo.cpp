#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float x, y;
	char operador;

	printf("                      \n");
	printf("|=======================|\n");
	printf("|      CALCULADORA      |\n");
	printf("|=======================|\n");
	printf(" Qual o primeiro n�mero? ");
	printf("                      \n");
	scanf("%f",&x);
	printf(" Qual opera��o desejada? ");
	printf("                      \n");
	scanf(" %c",&operador);
	printf(" Agora o segundo n�mero? ");
	printf("                      \n");

	scanf("%f",&y);
	switch(operador){
      case '+': printf("%.2f\n", x+y); 
	  break;
      case '-': printf("%.2f\n", x-y); 
	  break;
      case '*': printf("%.2f\n", x*y); 
	  break;
      case '/': printf("%.2f\n", x/y);
	  if ( y != 0 ) { }
	  else{
	  	system("color 0c"); // muda a cor para vermelho 
		                 
		    	         printf("\n\n      -------ERRO-------");
                         printf("\n      --OP��O INV�LIDA--\n");
						 printf("\n =========================\n");
						 printf("  |ESCOLHA UMA OP��O V�LIDA|\n");  
						 printf("  ==========================\n");
	  }
	  break;
	  default: printf("Operador Inv�lido!\n");
      
	  
		                 
		system("cls"); // limpa a tela
		                 system("color 0c"); // muda a cor para vermelho 
		                 
		    	         printf("\n\n      -------ERRO-------");
                         printf("\n      --OPERADOR INV�LIDO--\n");
						 printf("\n =========================\n");
						 printf("  |ESCOLHA UMA OP��O V�LIDA|\n");  
						 printf("  ==========================\n");
						 ;    


						 	
 
			            printf("                     \n");
                         printf("     ===================\n");
                         printf("     |      DIGITE     |\n");
                         printf("     |=================|\n");
                         printf("     |[0] SAIR         |\n");
                         printf("     |[1] DEV C++      |\n");
                         printf("     ===================\n");  
                         
                         
                         

}

}




