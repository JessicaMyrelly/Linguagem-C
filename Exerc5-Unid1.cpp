//Elabore um programa que calcule a area de um trap�zio.//

#include<stdio.h>

int main()
{
	float base1, base2, altura, area;
	
	printf("\n Informe o valor da base maior: ");
	scanf("%f", &base1);
	printf("\n Informe o valor da base menor: ");
	scanf("%f", &base2);
	printf("\n Informe o valor da altura: ");
	scanf("%f", &altura)/2;
	area = ((base1 + base2) * altura)/2;
	printf("\n A area do trapezio e: %.2f", area);
	return(0);
}
