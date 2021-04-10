#include <stdio.h>


int main (){
	float preco, perc,nVpreco;
	printf ("Programa para calcular novo preco \n");
	printf ("Informe o preco : ");
	scanf ("%f",&preco);
	printf ("Informe o percentual :");
	scanf ("%f",&perc);
	nVpreco = preco+(preco*perc/100);
	printf ("Novo preco %.2f",nVpreco);
	printf("O perc acrescentado %.2f",perc);	
	
	
	return 0;
}


