#include <stdio.h>
#include <locale.h>
#define PI 3.14

float areadocirculo(float raio);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float r, a;
	
	printf("Informe o valor do raio: ");
	scanf("%d", &r);
	
	a = areadocirculo(r);
	printf("A área do circulo é %2f cm\n", a);
	
	return 0;
}

float areadocirculo(float raio){
	
	return PI * raio * raio;
}
