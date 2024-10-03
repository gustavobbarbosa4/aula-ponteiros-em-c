#include <stdio.h>

int mult(float a, float b){
	return a * b;
}
 int main (){
 	float n1, n2, resultado;
 	
 	printf("digite dois numeros a serem multiplicados: ");
 	scanf("%f %f", &n1, &n2);
 	
 	resultado = mult(n1, n2);
 	
 	printf("\no resultado da multiplicacao eh: %.2f", resultado);
 }
