#include <stdio.h>

main(){
	int n1, n2, n3;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&n3);
	if(n1 >= n2){
		if(n1 >= n3)
			printf("maior numero: %d",n1);
		else
			printf("maior numero: %d",n3);
	}
	else{
		if(n2 >= n3)
			printf("maior numero: %d",n2);
		else
			printf("maior numero: %d",n3);
	}
	return 0;
}