#include <stdio.h>

main(){
	float fah, cel;
	printf("Digite um valor em Fahrenheit: ");
	scanf("%f",&fah);
	cel = (fah-32)*5/9;
	printf("Em Fahrenheit: %f\nEm Celsius: %f",fah, cel);
	return 0;
}