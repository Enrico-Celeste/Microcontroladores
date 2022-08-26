#include <stdio.h>

main(){
	char num [16], invNum [16];
	int tam, i;
	printf("Digite o numero: ");
	scanf("%s",num);
	tam = strlen(num);
	for(int x = tam-1; x!=-1; x--){
		invNum[i] = num[x];
		i++;
	}
	printf("Ivertido: %s",invNum);
	return 0;
}