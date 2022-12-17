#include <stdio.h>
#include <locale.h>

//Assinatura das funções:
float celfah(float cf);
float fahcel(float fc);
float celkel(float ck);

//bloco principal:
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int op;
	float tf, tc, tk;
	
	printf("Conversor de temperatura\n");
	
	printf("\nEscolha uma opção: \n");
	
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 - Fahrenheit para Celsius\n"); 
	printf("3 - Celsius para Kelvin\n\n"); 
	printf("Qual você escolhe?: ");
	scanf("\n%d", &op);
	
	printf("\nDigite o valor da temperatura ");
	
	if(op == 1){
		printf("em Celsius: ");
		scanf("%f", &tc);
		tf = celfah(tc);
	} else if(op == 2){
		printf("em Fahrenheit: ");
		scanf("%f", &tf);
		tc = fahcel(tf);
	} else if(op == 3){
		printf("em Celsius: ");
		scanf("%f", &tc);
		tk = celkel(tc);
	}
	printf("\nTemperatura em Celsius: %.2f °C\n",tc);
	printf("Temperatura em Fahrenheit: %.2f °F\n", tf);
	printf("Temperatura em Kelvin: %.2f K\n",tk);
}

//funções:
float celfah(float cf){
	
	return (cf*1.8 )+32;
}

float fahcel(float fc){

	return (fc-32)/1.8;
}

float celkel(float ck){
	
	return (ck+273.15);
}


