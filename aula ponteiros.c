#include <stdio.h>
	
	int total(int *end1, int *end2){
	printf("digite o primeiro valor: ");
	scanf("%d", end1);
	printf("digite o segundo valor: ");
	scanf("%d", end2);
	return *end1 + *end2;
}

int main () {
	//enderecos da vizinhaca, exmplo da vizinhaca com nomes dos alunos no quadro//
	int felipe = 0, gustavo = 1, erika = 2;
	int arthur = 3, carlos = 4, ana = 5;
	int everton = 6;
	
	/* '*' representa que é uma variavel que vai receber um valor e levar a um endereço//
	int *n_felipe, *n_gustavo, *n_erika;
	int *n_arthur, *n_carlos, *n_ana;
	int *n_everton; */
	
	printf("total: %d\n", total(&arthur, &everton)); //exemplo de variaveis a terem os valores alterados
	
	printf("felipe: %d - %d\n", &felipe, felipe);
	printf("gustavo: %d - %d\n", &gustavo, gustavo);
	printf("arthur: %d - %d\n", &arthur, arthur);
	printf("erika: %d - %d\n", &erika, erika);
	printf("carlos: %d - %d\n", &carlos, carlos);
	printf("ana: %d - %d\n", &ana, ana);
	printf("everton: %d - %d\n", &everton, everton);
	
	return 0;
}
