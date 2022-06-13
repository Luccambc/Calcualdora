#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int opcao, contador;
	float n1, n2, soma, subtracao, multiplicacao, divisao, resto, potenciacao, raiz_quadrada, modulo;
	
	printf("##### MEGA CALCULADORA #####\n\n");
	printf("Temos 9 operações possíveis: ");
	printf("\n(1) - Soma\n(2) - Subtração\n(3) - Multiplicação\n(4) - Divisão\n(5) - Resto da Divisão\n(6) - Potenciação\n(7) - Raíz Quadrada\n(8) - Módulo\n(9) - Tabuada até 10\n");
	printf("Escolha uma das opções acima: ");
	scanf("%d", &opcao);
	printf("\nMuito Bem! Você escolheu a opção (%d)\n\n", opcao);
	
	switch(opcao) {
		case 1:
			printf("#########################\n");
			printf("          SOMA        \n");
			printf("#########################\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			
			soma = n1 + n2;
			
			printf("\n%.2lf + %.2lf = %.2lf", n1, n2, soma);
			break;
		case 2:
			printf("#########################\n");
			printf("        SUBTRAÇÃO        \n");
			printf("#########################\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			
			subtracao = n1 - n2;
			
			printf("\n%.2lf - %.2lf = %.2lf", n1, n2, subtracao);
			break;
		case 3:
			printf("#########################\n");
			printf("      MULTIPLICAÇÃO        \n");
			printf("#########################\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			
			multiplicacao = n1 * n2;
			
			printf("\n%.2lf * %.2lf = %.2lf", n1, n2, multiplicacao);
			break;
		case 4:
			printf("#########################\n");
			printf("         DIVISÃO        \n");
			printf("#########################\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			
			divisao = n1 / n2;
			
			printf("\n%.2lf / %.2lf = %.2lf", n1, n2, divisao);
			break;
		case 5:
			printf("#########################\n");
			printf("    RESTO DA DIVISÃO        \n");
			printf("#########################\n");
			printf("OBS: lembre-se que, na Linguagem C, o cálculo do resto da divisão só é feito com números inteiros!!!\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			
			resto = (int)n1 % (int)n2;
			
			printf("\n%.2lf // %.2lf = %.2lf", n1, n2, resto);
			break;
		case 6:
			printf("#########################\n");
			printf("       POTENCIAÇÃO        \n");
			printf("#########################\n");
			printf("OBS: O expoente deve ser sempre um número inteiro!!!\n");
			printf("Digite o valor da base: ");
			scanf("%f", &n1);
			printf("Digite o valor do expoente: ");
			scanf("%f", &n2);
			
			potenciacao = pow(n1, n2);
			
			printf("\n%.2lf ^ %.2lf = %.2lf", n1, n2, potenciacao);
			break;
		case 7:
			printf("#########################\n");
			printf("     RAÍZ QUADRADA        \n");
			printf("#########################\n");
			printf("OBS: Não existe raíz quadrada de número negativo! Portanto, digite apenas números positivos!!!\n");
			printf("Digite um valor positivo: ");
			scanf("%f", &n1);
			
			raiz_quadrada = sqrt(n1);
			printf("\nRaíz quadrada de %.2lf = %.2lf", n1, raiz_quadrada);	
			break;	
		case 8:
			printf("#########################\n");
			printf("         MÓDULO        \n");
			printf("#########################\n");
			printf("Digite um valor: ");
			scanf("%f", &n1);
			
			modulo = abs(n1);
			printf("\n|%.2lf| = %.2lf", n1, modulo);	
			break;
		default:
			printf("#########################\n");
			printf("        TABUADA        \n");
			printf("#########################\n");
			printf("Digite um valor para calcular sua tabuada até 10: ");
			scanf("%f", &n1);
			
			for(contador = 1; contador <= 10; contador++) {
				printf("%.2lf * %d = %.2lf\n", n1, contador, (n1 * contador));
			}
			break;
	}
	
	return 0;
}
