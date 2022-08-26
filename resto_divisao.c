#include <stdio.h>

main(){
	int resto, n1, n2;
	printf("Digite o numerador: ");
	scanf("%d",&n1);
	printf("Digite o denumerador: ");
	scanf("%d",&n2);
	resto = n1%n2;
	printf("Resto da divisao %d/%d e: %d",n1,n2,resto);
	return 0;
}