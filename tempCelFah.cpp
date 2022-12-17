#include <stdio.h>
#include <locale.h>

//Assinatura das funções:
float celfah(float c);
float fahcel(float f);

//bloco principal:
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int op;
	float tf, tc;
	
	printf("Conversor de temperatura\n");
	
	printf("\nEscolha uma opção: \n");
	
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 - Fahrenheit para Celsius\n\n"); 
	printf("Qual você escolhe?: ");
	scanf("%d", &op);
	
	printf("\nDigite o valor da temperatura ");
	
	if(op == 1){
		printf("em Celsius: ");
		scanf("%f", &tc);
		tf = celfah(tc);
	} else {
		printf("em Fahrenheit: ");
		scanf("%f", &tf);
		tc = fahcel(tf);
	}
	printf("\nTemperatura em Celsius: %.2f °C\n", tc);
	printf("Temperatura em Fahrenheit: %.2f °F\n", tf);
}

//funções:
float celfah(float c){
	
	return c*1.8 + 32;
}

float fahcel(float f){

	return (f-32)/1.8;
}


