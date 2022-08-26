#include <stdio.h>

main(){
	int int1, int2, div = 0;
	printf("Digite o comeco do intervalo: ");
	scanf("%d",&int1);
	printf("Digite o final do intervalo: ");
	scanf("%d",&int2);
	if(int1 > int2)
		printf("este intevalo nao faz sentido!");
	else{
		for(int x = int1; x <= int2; x++){
			if(x%3 == 0)
				div++;
		}
		printf("Numeros divisiveis por 3 no intervalo: %d",div);
	}
	return 0;
}