#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/
//1. Faça um programa que imprima o seu nome.
void q1()
{
    printf("Jeniffer!");
}
//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2()
{
int produto;
produto = 30 * 27;
   printf("produto: %d\n",produto);
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3()
{
 int mda;

 mda = (5+8+12)/3.0;
 printf("A média Aritimética será: %d", mda); 
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4 ()
{
 int num;
 printf("Me informe um número inteiro:");
 scanf("%d",&num);
 printf("O Número inteiro será: %d\n", num); 
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5 ()
{
 int num1,num2;
 printf("Me Informe dois números:");
 scanf("%d %d", &num1,&num2);
 printf("OS dois números será: %d\n %d\n", num1,num2);   
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6()
{
 int num,ant,suc;
 printf("Me informe um número inteiro:");
 scanf("%d",&num);
 ant=num-1;
 suc=num+1;
 printf("Antecessor: %d\nSucessor: %d\n",ant,suc);
 }

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7()
{

}
//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8()
{
    int n1,n2,sub;
    printf("Me informe dois números:");
    scanf("%d %d", &n1,&n2);
    sub=n1-n2;
    printf("a subtração será: %d", sub);
}
//9. Faça um programa que leia um número real e imprima ¼ deste número.
void q9 ()
{
    float n, resultado;
    printf("Digite o número:");
    scanf("%f",&n);
    resultado=n/4;
    printf("Resultado: %f", resultado);

}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10 ()
{
    float n1,n2,n3, media;
    printf("Digite o número 1:");
    scanf("%f, &n1");
    printf("Digite o número 2");
    scanf("%f", &n2);
    printf("Digite o número 3");
    scanf("%f", &n3);
    media = (n1+n2+n3)/3;
    printf("Média:%f", media);
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11 ()
{
    float n1,n2, resultado;
    printf("Digite o número 1:");
    scanf("%f", &n1);
    printf("Digite o numero 2:");
    scanf("%f", &n2);
    resultado = n1+n2;
    printf("\nSoma: %f, resultado");
    resultado = n1-n2;
    printf("\nSubtração: %f, resultado");
    resultado = n1*n2;
    printf("\nMultiplicação: %f, resultado");
    resultado = n1/n2;
    printf("\nDuvisão: %f, resultado");
    }
//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12 ()
{
    float num, resultado;
    printf("Digite o número:");
    scanf("%f",&num);
    resultado=num*num;
    printf("Quadrado do número: %f", resultado);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void 13 ()
{
    float saldo, novoSaldo;
    printf("Digite o saldo:");
    scanf("%f",&saldo);
    novoSaldo = (saldo + saldo)* 0,02;
    printf("Saldo com reajuste: %f", novoSaldo);
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void 14 ()

{
    float base, altura, perimetro, area;
    printf("Digite a base:");
    scanf("%f",&base);
    printf("Digite a altura:");
    scanf("%f",&altura);
    perimetro = base+altura;
    area=base*altura;
    printf("perimetro: %f", perimetro);
    printf("area: %f", area);
    }
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void 15 ()
{
    float vlrProd,percDesc,vlrDesc;
    Printf("")
}
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
int main() 
{
    q8();
    return EXIT_SUCCESS;
}