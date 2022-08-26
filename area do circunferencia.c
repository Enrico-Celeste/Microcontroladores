#include <stdio.h>
#include <math.h>

main(){
	float raio;
	float pi = 3.14159265358979323846;
	printf("Digite um valor para o raio da circunferencia: ");
	scanf("%f",&raio);
	printf("area do circunferencia: %f\n",pi*raio*raio);
	printf("comprimento da circunferencia: %f",2*pi*raio);
	return 0;
}