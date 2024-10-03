/* 1. implemente um algoritimo que calcule as raizes de um polinomio
de segundo grau usando bhaskara.
	a. a funcao bhaskara devera ser void;
	b. a funcao bhaskara nao podera ter printf;
	c. a exibicao do resultado devera ocorrer na funcao main;
	d. nao utilize variaveis globais; */
	
#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c){
	if(a == 0){
		printf("\no coeficiente 'a' nao pode ser igual a 0 em uma equacao de segundo grau. \n");
    	return 1;
	}else{
		return b * b - 4 * a * c;
	}
}
void bhaskara(float a, float b, float c, float *x1, float *x2, float *d) {
	*d = delta(a, b, c);
	if (d > 0) {
		*x1 = (-b + sqrt(*d))/(2*a);
		*x2 = (-b - sqrt(*d))/(2*a);
		
	} else if (d == 0) {
		*x1 = (-b)/(2*a);
	
		
	} else {
		
	}
}

int main (){
	 float a, b, c, d;
	 float x1, x2;
    
    printf("digite um valor para a: ");
    scanf("%f", &a);
    printf("digite um valor para b: ");
    scanf("%f", &b);
    printf("digite um valor para c: ");
    scanf("%f", &c );
	
	d = delta(a, b, c);
	printf("delta: %.2f", d);
	
	bhaskara(a, b, c, &x1, &x2, &d);
	
	if (d > 0){
		printf("\nx = {%.2f, %.2f}\n", x1,x2);
	}else if(d == 0){
		printf("\nx = {%.2f}\n", (-b)/(2*a));
	}else {
		
	}
	

	
	
	
	
}
	
