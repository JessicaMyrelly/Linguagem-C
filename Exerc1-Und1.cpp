//Escreva um programa que leia um n�mero inteiro e apresente o seu antecessor e o seu sucessor.//

#include<stdio.h> 

int main()
{
    int num, ant, suc;
    
    printf("Digite o numero:");
    scanf ("%d", &num);
    
    ant = num - 1;
    suc = num + 1;
    
    printf ("\n O antecessor e: %d", ant);
    printf("\n O sucessor e: %d", suc);
    
    return(0);
}
