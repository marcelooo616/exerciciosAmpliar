#include <iostream>
/*
 * Desafio: Escreva um algoritmo em C que calcule e retorno o valor da a área e
 * do perímetro de um círculo.
 * Como entrada, ele deverá receber o valor do raio deste círculo.
 * No campo de resposta você deverá colar o link do github onde armazenará seu código.
 *
 * */

int maisn() {
    double r = 0;
    double c = 0;
    const double pi = 3.141592;

    //C = 2πr

    printf("Digite o raio: ");
    scanf("%lf", &r);

    c = (2 * pi) * r;

    printf("O perímetro do círculo é %.2f\n", c);

    return 0;
}