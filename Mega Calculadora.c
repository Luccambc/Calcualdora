#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int opcao, contador;
	float n1, n2, soma, subtracao, multiplicacao, divisao, resto, potenciacao, raiz_quadrada, modulo;
	
	printf("##### MEGA CALCULADORA #####\n\n");
	printf("Temos 9 opera��es poss�veis: ");
	printf("\n(1) - Soma\n(2) - Subtra��o\n(3) - Multiplica��o\n(4) - Divis�o\n(5) - Resto da Divis�o\n(6) - Potencia��o\n(7) - Ra�z Quadrada\n(8) - M�dulo\n(9) - Tabuada at� 10\n");
	printf("Escolha uma das op��es acima: ");
	scanf("%d", &opcao);
	printf("\nMuito Bem! Voc� escolheu a op��o (%d)\n\n", opcao);
	
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
			printf("        SUBTRA��O        \n");
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
			printf("      MULTIPLICA��O        \n");
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
			printf("         DIVIS�O        \n");
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
			printf("    RESTO DA DIVIS�O        \n");
			printf("#########################\n");
			printf("OBS: lembre-se que, na Linguagem C, o c�lculo do resto da divis�o s� � feito com n�meros inteiros!!!\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			
			resto = (int)n1 % (int)n2;
			
			printf("\n%.2lf // %.2lf = %.2lf", n1, n2, resto);
			break;
		case 6:
			printf("#########################\n");
			printf("       POTENCIA��O        \n");
			printf("#########################\n");
			printf("OBS: O expoente deve ser sempre um n�mero inteiro!!!\n");
			printf("Digite o valor da base: ");
			scanf("%f", &n1);
			printf("Digite o valor do expoente: ");
			scanf("%f", &n2);
			
			potenciacao = pow(n1, n2);
			
			printf("\n%.2lf ^ %.2lf = %.2lf", n1, n2, potenciacao);
			break;
		case 7:
			printf("#########################\n");
			printf("     RA�Z QUADRADA        \n");
			printf("#########################\n");
			printf("OBS: N�o existe ra�z quadrada de n�mero negativo! Portanto, digite apenas n�meros positivos!!!\n");
			printf("Digite um valor positivo: ");
			scanf("%f", &n1);
			
			raiz_quadrada = sqrt(n1);
			printf("\nRa�z quadrada de %.2lf = %.2lf", n1, raiz_quadrada);	
			break;	
		case 8:
			printf("#########################\n");
			printf("         M�DULO        \n");
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
			printf("Digite um valor para calcular sua tabuada at� 10: ");
			scanf("%f", &n1);
			
			for(contador = 1; contador <= 10; contador++) {
				printf("%.2lf * %d = %.2lf\n", n1, contador, (n1 * contador));
			}
			break;
	}
	
	return 0;
}
