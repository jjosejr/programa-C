#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.80;
    char opcao = 'S';
    char nome[20] = "Jack";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.+-2f\n", altura);
    printf("A opção é : %c\n" , opcao);
    

    /*
    \n serve para pular linha 
    
    printf( "%formatol %format02 %format03", variavell ,variave12 , variave13)
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime- um -número• de • ponto • flutuante na • notação científica .
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */
}