#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa � ou n�o maior de idade. A maioridade se estabelece ao alcan�ar 18 anos.
/*
entrada     saida
17          N�o. Voce n�o � maior de idade.
18          Sim. Voc� � maior de idade.
*/
int ex1()
{
    printf("VOC� � MAIOR DE IDADE?\n");
    int idade;
    printf("Sua idade: ");
    scanf("%d",&idade);
    if(idade >= 18)
    {
        printf("Sim. Voc� � maior de idade.\n\n");
    }
    else
    {
        printf("N�o. Voce n�o � maior de idade.\n\n");
    }
    return 0;
}
//Escreve um programa que leia um n�mero e diga se esse n�mero � par ou �mpar.
/*
entrada     saida
0           O n�mero � par.
5           O n�mero � �mpar.
*/
int ex2()
{
    printf("PAR OU �MPAR?\n");
    int num;
    printf("Digite um n�mero: ");
    scanf("%d",&num);
    if((num % 2) == 0)
    {
        printf("O n�mero � par.\n\n");
    }
    else
    {
        printf("O n�mero � �mpar.\n\n");
    }
    return 0;
}
//O card�pio de uma lanchonete � dado abaixo. Prepare um programa que  o c�digo correspondente ao item da lanchonete e mostre a descri��o do item e seu valor.
/*
entrada     saida
0           C�digo inexitente.
5           Milk-shake: R$ 30,00
*/
int ex3()
{
    printf("ITENS DA LANCHONETE\n");
    int codigo;
    printf("Digite o c�digo do produto: ");
    scanf("%d",&codigo);
    if(codigo == 1)
    {
        printf("Hamb�rguer: R$ 30,00\n\n");
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
        printf("C�digo inexitente.\n\n");
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
        printf("�NDICE\n");
        printf("C�digo: 1 - Ex. 01\n");
        printf("C�digo: 2 - Ex. 02\n");
        printf("C�digo: 3 - Ex. 03\n\n");
        printf("FLAG: 0\n\n");
        ex = getch();
        switch(ex)
        {
            case '0':
                printf("At� a pr�xima!\n\n");
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
                printf("C�digo inv�lido.\n\n");
                break;
        }
    }
    while(ex != '0');

    return 0;
}
