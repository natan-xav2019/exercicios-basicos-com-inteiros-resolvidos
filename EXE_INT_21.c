#include <stdio.h>

main() {
	int quant,n,nvec,cres=0;
	
	printf("A quantidade de valores que deseja ler\n");
	scanf("%i",&quant);
	
	printf("digite um numero saiba a quantidade de vezes que ele repete em sequencia.\n");
	while(quant>0) {
		
		scanf("%i",&n);
		
		if(n == nvec)
			cres++;
		else
			cres=1;
			
		nvec=n;
		quant--;
	}
	
	printf("A seguinte  � formada por %i segmentos de n�meros iguais\n",cres);
	
	system("Pause");
}
