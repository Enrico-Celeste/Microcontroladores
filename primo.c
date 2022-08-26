#include <stdio.h>

main(){
	int n1, c = 0;
	printf("Digite um numero inteiro maior que 0: ");
	scanf("%d",&n1);
	for(int x = 2; x<=n1/2; x++){
		if(n1%x == 0)
			c++;
	}
	if(c>1)
		printf("O numero %d nao e primo",n1);
	else
		printf("O numero %d e primo",n1);
	return 0;
}