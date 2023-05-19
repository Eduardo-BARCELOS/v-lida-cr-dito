#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cs50.h>
int main() {
    string minhaString = get_string("Digite o número do seu cartão: ");
    int tamanho = strlen(minhaString);
    int contadorNumeros = 0;
    int numeros[tamanho]; // Array para armazenar os números
    for (int i = 0; i < tamanho; i++) {
        if (minhaString[i] == '-' || minhaString[i] == '.' || minhaString[i] == ',') {
            printf("Não coloque espaços nem traços nem pontos, na hora de digitar o número de cartão de crédito");
            return 1;
        }
        if (minhaString[i] >= '0' && minhaString[i] <= '9') {
            numeros[contadorNumeros] = minhaString[i] - '0'; // Converte char para int
            contadorNumeros++;
        }
    }
    bool boleano = false;
    // ver se contadorNumeros = numeros digitados é maior que 3 (obrigatoriamente tem que ser maior que tres)
    if (contadorNumeros <= 3) {
        printf("Por favor digite mais de 3 números, inicie o programa novamente ;) ");
        printf("\n");
        return 1;
    }
    // verificar se é (American Express) > 15 digitos começam com 34 ou 37
    int VA = (numeros[0] * 10) + numeros[1];
    if ((contadorNumeros == 15 && VA == 34) || VA == 37) {
        printf("Seu cartão é da American Express");
        boleano = true;
        printf("\n");
    }
    // verificar se é (MasterCard) 16 dígitos começam > 51,52,53,54 e 55
    if ((contadorNumeros==16 && VA == 51) || VA == 52 || VA == 53 || VA == 54 || VA == 55) {
        printf("Seu cartão é MasterCard");
        boleano = true;
        printf("\n");
    }
    // verificar Visa > entre 13 e 16 digitos e começa com 4
    if ( (contadorNumeros>=13 && contadorNumeros <=16) && numeros[0] == 4 ) {
        printf("Seu cartão é Visa");
        boleano = true;
        printf("\n");
    }
    if (boleano == false) {printf("O tipo do seu cartão não foi reconhecido");}
    int tamanhoDeCartaoDeCredito = contadorNumeros;

    // Imprimir os números de dois em dois em ordem reversa

    int aux [tamanhoDeCartaoDeCredito];
    int auxI = 0;
    for (int x = tamanhoDeCartaoDeCredito - 2; x >= 0; x -= 2) {
        aux[auxI] = numeros[x];
        auxI ++;
    }
    int tamanhoSoma = auxI;
    int multiplicacao = 0;
    int multiplicados[tamanhoSoma]; // Array para armazenar os resultados multiplicados

    for (int f = 0; f < tamanhoSoma; f++) {
        multiplicados[f] = aux[f] * 2;

        if (multiplicados[f] > 9) {
            int digito1 = multiplicados[f] / 10; // Primeiro dígito
            int digito2 = multiplicados[f] % 10; // Segundo dígito
            multiplicados[f] = digito1 + digito2;
        }
    }
    // pegar os numeros que faltaram para somar com multiplicacao
    int aux1 [tamanhoDeCartaoDeCredito];
    int auxI1 = 0;
    for (int x = tamanhoDeCartaoDeCredito - 1; x >= 0; x -= 2) {
        aux1[auxI1] = numeros[x];
       auxI1 ++;
    }
    // somar a multiplicação com o resto que sobrou
    // ver se auxI1 é par ou impar
    bool par = false;
    if (auxI1 % 2 == 0) {
        par = true;
    }
    int somar = auxI + auxI1;
    int somacao [somar];
    int somaFinal = 0;
    for (int h=0;h<somar;h++ ) {
        if (h>=0 && h<auxI) {
            somaFinal += multiplicados[h] +  aux1[h];
        }
        else {// se for impar então faz apenas mais um loop se não braak;
            if (par == true) {
                break;
            }
            else {
                somaFinal += aux1[h];
                break;
            }
        }
    }
    // pegar ultimo digito de somaFinal e verificar se é 0, se == 0 então é válido, se não, não é válido
    if ( somaFinal % 10 == 0 ) {
        printf("Seu cartão de crédito é válido, de acordo com algoritmo de Luhn ");
    }
    else {
        printf("De acordo com o algoritmo de Luhn seu cartão de crédito não é válido ;(");
    }
    printf("\n");
return 0;
}
