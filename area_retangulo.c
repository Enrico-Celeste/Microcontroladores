#include <stdio.h>

main(){
	int alt, larg;
	printf("Digite um valor para a altura do retangulo: ");
	scanf("%d",&alt);
	printf("Digite um valor para a largura do retangulo: ");
	scanf("%d",&larg);
	printf("perimetro do retangulo: %d\n",larg*2+alt*2);
	printf("area do retangulo: %d",larg*alt);
	return 0;
}