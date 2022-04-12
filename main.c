#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa é ou não maior de idade. A maioridade se estabelece ao alcançar 18 anos.
/*
entrada     saida
17          Não. Voce não é maior de idade.
18          Sim. Você é maior de idade.
*/
int ex1()
{
    printf("VOCÊ É MAIOR DE IDADE?\n");
    int idade;
    printf("Sua idade: ");
    scanf("%d",&idade);
    if(idade >= 18)
    {
        printf("Sim. Você é maior de idade.\n\n");
    }
    else
    {
        printf("Não. Voce não é maior de idade.\n\n");
    }
    return 0;
}
//Escreve um programa que leia um número e diga se esse número é par ou ímpar.
/*
entrada     saida
0           O número é par.
5           O número é ímpar.
*/
int ex2()
{
    printf("PAR OU ÍMPAR?\n");
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    if((num % 2) == 0)
    {
        printf("O número é par.\n\n");
    }
    else
    {
        printf("O número é ímpar.\n\n");
    }
    return 0;
}
//O cardápio de uma lanchonete é dado abaixo. Prepare um programa que  o código correspondente ao item da lanchonete e mostre a descrição do item e seu valor.
/*
entrada     saida
0           Código inexitente.
5           Milk-shake: R$ 30,00
*/
int ex3()
{
    printf("ITENS DA LANCHONETE\n");
    int codigo;
    printf("Digite o código do produto: ");
    scanf("%d",&codigo);
    if(codigo == 1)
    {
        printf("Hambúrguer: R$ 30,00\n\n");
    }
    else if(codigo == 2)
    {
        printf("Cheeseburguer: R$ 35,50\n\n");
    }
    else if(codigo == 3)
    {
        printf("Fritas: R$ 20,50\n\n");
    }
    else if(codigo == 4)
    {
        printf("Refrigerante: R$ 10,00\n\n");
    }
    else if(codigo == 5)
    {
        printf("Milk-shake: R$ 30,00\n\n");
    }
    else
    {
        printf("Código inexitente.\n\n");
    }
    return 0;
}

int main()
{
//Menu
    setlocale(LC_ALL,"portuguese");
    char ex;
    do
    {
        printf("ÍNDICE\n");
        printf("Código: 1 - Ex. 01\n");
        printf("Código: 2 - Ex. 02\n");
        printf("Código: 3 - Ex. 03\n\n");
        printf("FLAG: 0\n\n");
        ex = getch();
        switch(ex)
        {
            case '0':
                printf("Até a próxima!\n\n");
                break;
            case '1':
                ex1();
                break;
            case '2':
                ex2();
                break;
            case '3':
                ex3();
                break;
            default:
                printf("Código inválido.\n\n");
                break;
        }
    }
    while(ex != '0');

    return 0;
}
