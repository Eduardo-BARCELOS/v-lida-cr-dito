#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (void) {

    char value[20];
    char *eptr;
    long int num;

//4003600000000014
    /* Copy a value into the variable */
    /* It's okay to have whitespace before the number */
//2654375986724351
    string pegar = get_string("fale um numero de cartão de crédito: ");
    printf("\n");
    string fudido = pegar;
    strcpy(value, fudido);

    /* Convert the provided value to a decimal long */
    num = strtol(value, &eptr, 10);
    printf("%li decimal\n", num);



    // ler o tamanho
    int i =0;
    int tam = 0;
    while(fudido[i] != '\0' ) {
        if (fudido[i] == '\n') {
            fudido[i] = '\0';
        }
        i++;
    }

    i = 0;
    while(fudido[i] != '\0') {
        tam++;
        i++;

    }

// verificar aqui master dois primerios numeros 51 52 53 54 55

// for que percorre a string
i=0;
char veri[200];
for (i = 0; i <2; i++) {
    veri[i] = fudido[i];

}

// trasformar char para int
    char ver [2];
    char *ept;
    int verificar;

//4003600000000014
    /* Copy a value into the variable */
    /* It's okay to have whitespace before the number */
//2654375986724351


    strcpy(ver, veri);

    /* Convert the provided value to a decimal long */
    verificar = strtol(ver, &ept, 10);
    printf("%i decimal\n", verificar);

// verificar esta com os 2 primeiros numeros
// ver se cmç 51 52 53 54 55

bool veriMaster = true;


if (verificar == 51 || verificar == 52 || verificar == 53 || verificar == 54 || verificar == 55 ) {
veriMaster = true;
}

//virificar visa pegar o indice 1 da char ver
char v[1];
v[0]=ver[0];
printf("\n");
printf("primeiro numero para visa: %s",v);

// trasformar o v em inteiro

  char armazem[20];
    char *etr;
    long int v1;

//4003600000000014
    /* Copy a value into the variable */
    /* It's okay to have whitespace before the number */
//2654375986724351

    printf("\n");
    string pega = v;
    strcpy(armazem, pega);

    /* Convert the provided value to a decimal long */
    v1 = strtol(armazem, &etr, 10);
    //printf("%li decimal\n", num);


printf("\n");
//if () {}


printf("%s",fudido);
if (tam==16 && veriMaster == true) {

printf("mastercard: ");
printf("\n");
printf("\n");


printf("%i",tam);
    printf("\n");

    //4003600000000014
    //long int num = 4003600000000014;
    //long int num = 4003600000000014;

    printf("\n");
    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    printf("\n");
    long int n1 =   num%10;
    long int n2 =  (num%100)-n1;
    long int n3 =  (num%1000)-n1-n2;
    long int n4 =  (num%10000)-n1-n2-n3;
    long int n5 =  (num%100000)-n1-n2-n3-n4;
    long int n6 =  (num%1000000)-n1-n2-n3-n4-n5;
    long int n7 =  (num%10000000)-n1-n2-n3-n4-n5-n6;
    long int n8 =  (num%100000000)-n1-n2-n3-n4-n5-n6-n7;
    long int n9 =  (num%1000000000)-n1-n2-n3-n4-n5-n6-n7-n8;
    long int n10 = (num%10000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9;
    long int n11 = (num%100000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10;
    long int n12 = (num%1000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11;
    long int n13 = (num%10000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12;
    long int n14 = (num%100000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13;
    long int n15 = (num%1000000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13-n14;
    long int n16 = (num%10000000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13-n14-n15;
    // fazer a verificação usar indices da string

    //2° numero dividido por 10 3° por 100 4° por mil
    n2 =   n2/10;
    n3 =   n3/100;
    n4 =   n4/1000;
    n5 =   n5/10000;
    n6 =   n6/100000;
    n7 =   n7/1000000;
    n8 =   n8/10000000;
    n9 =   n9/100000000;
    n10 = n10/1000000000;
    n11 = n11/10000000000;
    n12 = n12/100000000000;
    n13 = n13/1000000000000;
    n14 = n14/10000000000000;
    n15 = n15/100000000000000;
    n16 = n16/1000000000000000;
    // criar as variaveis auxiliares pra verificação final:
    int an2 = n2;
    int an4 = n4;
    int an6 = n6;
    int an8 = n8;
    int an10 = n10;
    int an12 = n12;
    int an14 = n14;
    int an16 = n16;


    // as outras auxiliares
    int an1 = n1;
int an3 = n3;
int an5 = n5;
int an7 = n7;
int an9 = n9;
int an11 = n11;
int an13 = n13;
int an15 = n15;


    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    // soma cada digito individualmente:
    // verificar os digitos ex (n1*2) > 10 então
    // numero 12 > 9 condição


    // criar as auxs de todos os numeros nesse caso 16 numero (16 auxes)
    int auxn1 = 0;
    int auxn2 = 0;
    int auxn3 = 0;
    int auxn4 = 0;
    int auxn5 = 0;
    int auxn6 = 0;
    int auxn7 = 0;
    int auxn8 = 0;
    int auxn9 = 0;
    int auxn10 = 0;
    int auxn11 = 0;
   int auxn12 = 0;
    int auxn13 = 0;
    int auxn14 = 0;
    int auxn15 = 0;
    int auxn16 = 0;

// criar as condicões e se forem verdade entrar dentro dos if se nao os valores nao serao alterados
//if ((n1*2)>9) {
//        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
//        auxn1 = (n1*2)%10;
//        n1 = n1 *2;
//        n1 = n1 - auxn1;
//        n1 = n1/10;
 //       // adicionar todas as auxes no final
//
//printf("\n");
//
//printf("\n");
//printf("\n");
//    }


// auxiliares que nao alteram o valor do

// verificar os dois primerios digitos para o master card


if ((n2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (n2*2)%10;
        n2 = n2 *2;
        n2 = n2 - auxn2;
        n2 = n2/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
    if ((n4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (n4*2)%10;
        n4 = n4 *2;
        n4 = n4 - auxn4;
        n4 = n4/10;
        // adicionar todas as auxes no final
printf("\n");
printf("\n");
printf("\n");
    }


    if ((n6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (n6*2)%10;
        n6 = n6 *2;
        n6 = n6 - auxn6;
        n6 = n6/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (n8*2)%10;
        n8 = n8 *2;
        n8 = n8 - auxn8;
        n8 = n8/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (n10*2)%10;
        n10 = n10 *2;
        n10 = n10 - auxn10;
        n10 = n10/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

 if ((n12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (n12*2)%10;
        n12 = n12 *2;
        n12 = n12 - auxn12;
        n12 = n12/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (n14*2)%10;
        n14 = n14 *2;
        n14 = n14 - auxn14;
        n14 = n14/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
 if ((n16*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn16 = (n16*2)%10;
        n16 = n16 *2;
        n16 = n16 - auxn16;
        n16 = n16/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
//multiplicar todos os auxs correspondentes e somar eles depois
long int somap = (n2*2) + (auxn2) + (auxn4) + (n4*2) + (auxn6) + (n6*2 ) + (auxn8) + (n8*2 ) + (auxn10) + (n10*2) + (auxn12) + (n12*2) + (auxn14) + (n14*2) + (auxn16) + (n16*2);
// voltar um numero multiplicar por 2 e dividir ele prrrrrr verificar cada aux pra ver se vale maais q 0 e verificar os numeros pra ver se tem alguem que vale um
// if (n2==1||n4==1||n6==1||n8==1||n9==1||n4==1||  ) {}

if ((an2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (an2*2)%10;
        an2 = an2 *2;
        an2 = an2 - auxn2;
        an2 = an2/10;
        // adicionar todas as auxes no final
    if (an2 == 1) {
        somap = somap-1;
    }

    if (an2>1) {
        an2 = an2/2;
        somap = somap - an2;
    }

printf("\n");

printf("\n");
printf("\n");
    }

    if ((an4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (an4*2)%10;
        an4 = an4 *2;
        an4 = an4 - auxn4;
        an4 = an4/10;
        // adicionar todas as auxes no final
        if (an4 == 1) {
        somap = somap-1;
    }
if (an4>1) {
        an4 = an4/2;
        somap = somap - an4;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (an6*2)%10;
        an6 = an6 *2;
        an6 = an6 - auxn6;
        an6 = an6/10;
        // adicionar todas as auxes no final

        if (an6 == 1) {
        somap = somap-1;
    }
if (an6>1) {
        an6 = an6/2;
        somap = somap - an6;
    }
printf("\n");

printf("\n");
printf("\n");
    }
    if ((an8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (an8*2)%10;
        an8 = an8 *2;
        an8 = an8 - auxn8;
        an8 = an8/10;
        // adicionar todas as auxes no final

        if (an8 == 1) {
        somap = somap-1;
    }
if (an8>1) {
        an8 = an8/2;
        somap = somap - an8;
    }

printf("\n");

printf("\n");
printf("\n");
    }
    if ((an10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (an10*2)%10;
        an10 = an10 *2;
        an10 = an10 - auxn10;
        an10 = an10/10;
        // adicionar todas as auxes no final
        if (an10 == 1) {
        somap = somap-1;
    }
if (an10>1) {
        an10 = an10/2;
        somap = somap - an10;
    }

printf("\n");

printf("\n");
printf("\n");
    }

 if ((an12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (an12*2)%10;
        an12 = an12 *2;
        an12 = an12 - auxn12;
        an12 = an12/10;
        // adicionar todas as auxes no final

        if (an12 == 1) {
        somap = somap-1;
    }
if (an12>1) {
        an12 = an12/2;
        somap = somap - an12;
    }

printf("\n");

printf("\n");
printf("\n");
    }


    if ((an14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (an14*2)%10;
        an14 = an14 *2;
        an14 = an14 - auxn14;
        an14 = an14/10;
        // adicionar todas as auxes no final

        if (an14 == 1) {
        somap = somap-1;
    }
if (an14>1) {
        an14 = an14/2;
        somap = somap - an14;
    }

printf("\n");

printf("\n");
printf("\n");
    }

    if ((an16*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn16 = (an16*2)%10;
        an16 = an16 *2;
        an16 = an16 - auxn16;
        an16 = an16/10;
        // adicionar todas as auxes no final
        if (an16 == 1) {
        somap = somap-1;
    }
if (an16>1) {
        an16 = an16/2;
        somap = somap - an16;
    }

printf("\n");

printf("\n");
printf("\n");
    }

// somar <somap> com oq nao foi usado ainda pode usaar tanto variaveis quanto auxialiares:

 printf("\n");

 printf("\n");
 printf("soma p: %li",somap);
printf("\n");
printf("%li",somap);
printf("\n");

         printf("n1 %li",n1);
         printf("\n");
         printf("n2 %li",n2);
printf("\n");
         printf("n3 %li",n3);
printf("\n");
         printf("n4 %li",n4);
printf("\n");
         printf("n5 %li",n5);
printf("\n");
         printf("n6 %li",n6);
printf("\n");
         printf("n7 %li",n7);
printf("\n");
         printf("n8 %li",n8);
printf("\n");
         printf("n9 %li",n9);
printf("\n");
         printf("n10 %li",n10);
printf("\n");
         printf("n11 %li",n11);
printf("\n");
         printf("n12 %li e auxn12 %i ",n12,auxn12);
printf("\n");
         printf("n13 %li",n13);
printf("\n");
         printf("n14 %li",n14);
printf("\n");
         printf("n15 %li",n15);
         printf("\n");
         printf("n16 %li",n16);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
    // saber os intervalos de somageral
int somaGeral = somap + n1 + n3 + n5 + n7 + n9 + n11 + n13 + n15;
printf("soma geral: %i",somaGeral);
// an impares
printf("\n");
if (somaGeral>0 && somaGeral <=99) {
    // ultimo numero (20) 0
    somaGeral = somaGeral%10;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoo");

            }
}
if (somaGeral >99 && somaGeral < 999) {
    somaGeral = somaGeral%100;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoooooo");

        }
}
if (somaGeral>999.0 && somaGeral <1000) {
 somaGeral = somaGeral%1000;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
             printf("cartão invalido");
        }
}
if (somaGeral>1000 || somaGeral<0) {
    printf("cartão invalido mane");
printf("\n");
}
}
//fazer o visa kkk variavel v man len esta no TAM
// usando bool pra verificar na expressão
// v1 tem o 1° digito
if ( (tam==13 || tam==14 || tam==15 || tam==16) && v1==4 ) {
printf("\n");
if (tam==16) {
printf("visa: ");
printf("\n");
printf("\n");

printf("%i",tam);
    printf("\n");

    //4003600000000014
    //long int num = 4003600000000014;
    //long int num = 4003600000000014;

    printf("\n");
    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    printf("\n");
    long int n1 =   num%10;
    long int n2 =  (num%100)-n1;
    long int n3 =  (num%1000)-n1-n2;
    long int n4 =  (num%10000)-n1-n2-n3;
    long int n5 =  (num%100000)-n1-n2-n3-n4;
    long int n6 =  (num%1000000)-n1-n2-n3-n4-n5;
    long int n7 =  (num%10000000)-n1-n2-n3-n4-n5-n6;
    long int n8 =  (num%100000000)-n1-n2-n3-n4-n5-n6-n7;
    long int n9 =  (num%1000000000)-n1-n2-n3-n4-n5-n6-n7-n8;
    long int n10 = (num%10000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9;
    long int n11 = (num%100000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10;
    long int n12 = (num%1000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11;
    long int n13 = (num%10000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12;
    long int n14 = (num%100000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13;
    long int n15 = (num%1000000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13-n14;
    long int n16 = (num%10000000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13-n14-n15;
    // fazer a verificação usar indices da string

    //2° numero dividido por 10 3° por 100 4° por mil
    n2 =   n2/10;
    n3 =   n3/100;
    n4 =   n4/1000;
    n5 =   n5/10000;
    n6 =   n6/100000;
    n7 =   n7/1000000;
    n8 =   n8/10000000;
    n9 =   n9/100000000;
    n10 = n10/1000000000;
    n11 = n11/10000000000;
    n12 = n12/100000000000;
    n13 = n13/1000000000000;
    n14 = n14/10000000000000;
    n15 = n15/100000000000000;
    n16 = n16/1000000000000000;
    // criar as variaveis auxiliares pra verificação final:
    int an2 = n2;
    int an4 = n4;
    int an6 = n6;
    int an8 = n8;
    int an10 = n10;
    int an12 = n12;
    int an14 = n14;
    int an16 = n16;

    // as outras auxiliares
    int an1 = n1;
int an3 = n3;
int an5 = n5;
int an7 = n7;
int an9 = n9;
int an11 = n11;
int an13 = n13;
int an15 = n15;

    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    // soma cada digito individualmente:
    // verificar os digitos ex (n1*2) > 10 então
    // numero 12 > 9 condição

    // criar as auxs de todos os numeros nesse caso 16 numero (16 auxes)
    int auxn1 = 0;
    int auxn2 = 0;
    int auxn3 = 0;
    int auxn4 = 0;
    int auxn5 = 0;
    int auxn6 = 0;
    int auxn7 = 0;
    int auxn8 = 0;
    int auxn9 = 0;
    int auxn10 = 0;
    int auxn11 = 0;
   int auxn12 = 0;
    int auxn13 = 0;
    int auxn14 = 0;
    int auxn15 = 0;
    int auxn16 = 0;

// criar as condicões e se forem verdade entrar dentro dos if se nao os valores nao serao alterados

if ((n2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (n2*2)%10;
        n2 = n2 *2;
        n2 = n2 - auxn2;
        n2 = n2/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (n4*2)%10;
        n4 = n4 *2;
        n4 = n4 - auxn4;
        n4 = n4/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (n6*2)%10;
        n6 = n6 *2;
        n6 = n6 - auxn6;
        n6 = n6/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (n8*2)%10;
        n8 = n8 *2;
        n8 = n8 - auxn8;
        n8 = n8/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (n10*2)%10;
        n10 = n10 *2;
        n10 = n10 - auxn10;
        n10 = n10/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
   if ((n12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (n12*2)%10;
        n12 = n12 *2;
        n12 = n12 - auxn12;
        n12 = n12/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
    if ((n14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (n14*2)%10;
        n14 = n14 *2;
        n14 = n14 - auxn14;
        n14 = n14/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
    if ((n16*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn16 = (n16*2)%10;
        n16 = n16 *2;
        n16 = n16 - auxn16;
        n16 = n16/10;
        // adicionar todas as auxes no final
printf("\n");
printf("\n");
printf("\n");
    }
//multiplicar todos os auxs correspondentes e somar eles depois
long int somap = (n2*2) + (auxn2) + (auxn4) + (n4*2) + (auxn6) + (n6*2 ) + (auxn8) + (n8*2 ) + (auxn10) + (n10*2) + (auxn12) + (n12*2) + (auxn14) + (n14*2) + (auxn16) + (n16*2);
// voltar um numero multiplicar por 2 e dividir ele prrrrrr verificar cada aux pra ver se vale maais q 0 e verificar os numeros pra ver se tem alguem que vale um
// if (n2==1||n4==1||n6==1||n8==1||n9==1||n4==1||  ) {}

if ((an2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (an2*2)%10;
        an2 = an2 *2;
        an2 = an2 - auxn2;
        an2 = an2/10;
        // adicionar todas as auxes no final
    if (an2 == 1) {
        somap = somap-1;
    }

    if (an2>1) {
        an2 = an2/2;
        somap = somap - an2;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (an4*2)%10;
        an4 = an4 *2;
        an4 = an4 - auxn4;
        an4 = an4/10;
        // adicionar todas as auxes no final
        if (an4 == 1) {
        somap = somap-1;
    }
if (an4>1) {
        an4 = an4/2;
        somap = somap - an4;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (an6*2)%10;
        an6 = an6 *2;
        an6 = an6 - auxn6;
        an6 = an6/10;
        // adicionar todas as auxes no final

        if (an6 == 1) {
        somap = somap-1;
    }
if (an6>1) {
        an6 = an6/2;
        somap = somap - an6;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (an8*2)%10;
        an8 = an8 *2;
        an8 = an8 - auxn8;
        an8 = an8/10;
        // adicionar todas as auxes no final

        if (an8 == 1) {
        somap = somap-1;
    }
if (an8>1) {
        an8 = an8/2;
        somap = somap - an8;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (an10*2)%10;
        an10 = an10 *2;
        an10 = an10 - auxn10;
        an10 = an10/10;
        // adicionar todas as auxes no final
        if (an10 == 1) {
        somap = somap-1;
    }
if (an10>1) {
        an10 = an10/2;
        somap = somap - an10;
    }
printf("\n");
printf("\n");
printf("\n");
    }
 if ((an12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (an12*2)%10;
        an12 = an12 *2;
        an12 = an12 - auxn12;
        an12 = an12/10;
        // adicionar todas as auxes no final

        if (an12 == 1) {
        somap = somap-1;
    }
if (an12>1) {
        an12 = an12/2;
        somap = somap - an12;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (an14*2)%10;
        an14 = an14 *2;
        an14 = an14 - auxn14;
        an14 = an14/10;
        // adicionar todas as auxes no final

        if (an14 == 1) {
        somap = somap-1;
    }
if (an14>1) {
        an14 = an14/2;
        somap = somap - an14;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an16*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn16 = (an16*2)%10;
        an16 = an16 *2;
        an16 = an16 - auxn16;
        an16 = an16/10;
        // adicionar todas as auxes no final
        if (an16 == 1) {
        somap = somap-1;
    }
if (an16>1) {
        an16 = an16/2;
        somap = somap - an16;
    }
printf("\n");
printf("\n");
printf("\n");
    }

// somar <somap> com oq nao foi usado ainda pode usaar tanto variaveis quanto auxialiares:
 printf("\n");
 printf("\n");
 printf("soma p: %li",somap);
printf("\n");
printf("%li",somap);
printf("\n");
         printf("n1 %li",n1);
         printf("\n");
         printf("n2 %li",n2);
printf("\n");
         printf("n3 %li",n3);
printf("\n");
         printf("n4 %li",n4);
printf("\n");
         printf("n5 %li",n5);
printf("\n");
         printf("n6 %li",n6);
printf("\n");
         printf("n7 %li",n7);
printf("\n");
         printf("n8 %li",n8);
printf("\n");
         printf("n9 %li",n9);
printf("\n");
         printf("n10 %li",n10);
printf("\n");
         printf("n11 %li",n11);
printf("\n");
         printf("n12 %li e auxn12 %i ",n12,auxn12);
printf("\n");
         printf("n13 %li",n13);
printf("\n");
         printf("n14 %li",n14);
printf("\n");
         printf("n15 %li",n15);
         printf("\n");
         printf("n16 %li",n16);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
    // saber os intervalos de somageral
int somaGeral = somap + n1 + n3 + n5 + n7 + n9 + n11 + n13 + n15;
printf("soma geral: %i",somaGeral);
// an impares
printf("\n");
if (somaGeral>0 && somaGeral <=99) {
    // ultimo numero (20) 0
    somaGeral = somaGeral%10;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoo");

            }

}
if (somaGeral >99 && somaGeral < 999) {
    somaGeral = somaGeral%100;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoooooo");

        }
}

if (somaGeral>999.0 && somaGeral <1000) {
 somaGeral = somaGeral%1000;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
             printf("cartão invalido");
        }
}
if (somaGeral>1000 || somaGeral<0) {
    printf("cartão invalido mane");
printf("\n");
}
}

// if tam == 15

if (tam == 15) {

printf("visa: ");
printf("\n");
printf("\n");

printf("%i",tam);
    printf("\n");

    //4003600000000014
    //long int num = 4003600000000014;
    //long int num = 4003600000000014;

    printf("\n");
    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    printf("\n");
    long int n1 =   num%10;
    long int n2 =  (num%100)-n1;
    long int n3 =  (num%1000)-n1-n2;
    long int n4 =  (num%10000)-n1-n2-n3;
    long int n5 =  (num%100000)-n1-n2-n3-n4;
    long int n6 =  (num%1000000)-n1-n2-n3-n4-n5;
    long int n7 =  (num%10000000)-n1-n2-n3-n4-n5-n6;
    long int n8 =  (num%100000000)-n1-n2-n3-n4-n5-n6-n7;
    long int n9 =  (num%1000000000)-n1-n2-n3-n4-n5-n6-n7-n8;
    long int n10 = (num%10000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9;
    long int n11 = (num%100000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10;
    long int n12 = (num%1000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11;
    long int n13 = (num%10000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12;
    long int n14 = (num%100000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13;
    long int n15 = (num%1000000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13-n14;

    // fazer a verificação usar indices da string

    //2° numero dividido por 10 3° por 100 4° por mil
    n2 =   n2/10;
    n3 =   n3/100;
    n4 =   n4/1000;
    n5 =   n5/10000;
    n6 =   n6/100000;
    n7 =   n7/1000000;
    n8 =   n8/10000000;
    n9 =   n9/100000000;
    n10 = n10/1000000000;
    n11 = n11/10000000000;
    n12 = n12/100000000000;
    n13 = n13/1000000000000;
    n14 = n14/10000000000000;
    n15 = n15/100000000000000;

    // criar as variaveis auxiliares pra verificação final:
    int an2 = n2;
    int an4 = n4;
    int an6 = n6;
    int an8 = n8;
    int an10 = n10;
    int an12 = n12;
    int an14 = n14;



    // as outras auxiliares
    int an1 = n1;
int an3 = n3;
int an5 = n5;
int an7 = n7;
int an9 = n9;
int an11 = n11;
int an13 = n13;
int an15 = n15;
    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    // soma cada digito individualmente:
    // verificar os digitos ex (n1*2) > 10 então
    // numero 12 > 9 condição


    // criar as auxs de todos os numeros nesse caso 16 numero (16 auxes)
    int auxn1 = 0;
    int auxn2 = 0;
    int auxn3 = 0;
    int auxn4 = 0;
    int auxn5 = 0;
    int auxn6 = 0;
    int auxn7 = 0;
    int auxn8 = 0;
    int auxn9 = 0;
    int auxn10 = 0;
    int auxn11 = 0;
   int auxn12 = 0;
    int auxn13 = 0;
    int auxn14 = 0;
    int auxn15 = 0;

// criar as condicões e se forem verdade entrar dentro dos if se nao os valores nao serao alterados


if ((n2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (n2*2)%10;
        n2 = n2 *2;
        n2 = n2 - auxn2;
        n2 = n2/10;
        // adicionar todas as auxes no final
printf("\n");
printf("\n");
printf("\n");
    }
    if ((n4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (n4*2)%10;
        n4 = n4 *2;
        n4 = n4 - auxn4;
        n4 = n4/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
    if ((n6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (n6*2)%10;
        n6 = n6 *2;
        n6 = n6 - auxn6;
        n6 = n6/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }
    if ((n8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (n8*2)%10;
        n8 = n8 *2;
        n8 = n8 - auxn8;
        n8 = n8/10;
        // adicionar todas as auxes no final
printf("\n");
printf("\n");
printf("\n");
    }
    if ((n10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (n10*2)%10;
        n10 = n10 *2;
        n10 = n10 - auxn10;
        n10 = n10/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

 if ((n12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (n12*2)%10;
        n12 = n12 *2;
        n12 = n12 - auxn12;
        n12 = n12/10;
        // adicionar todas as auxes no final
printf("\n");
printf("\n");
printf("\n");
    }
    if ((n14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (n14*2)%10;
        n14 = n14 *2;
        n14 = n14 - auxn14;
        n14 = n14/10;
        // adicionar todas as auxes no final
printf("\n");
printf("\n");
printf("\n");
    }
//multiplicar todos os auxs correspondentes e somar eles depois
long int somap = (n2*2) + (auxn2) + (auxn4) + (n4*2) + (auxn6) + (n6*2 ) + (auxn8) + (n8*2 ) + (auxn10) + (n10*2) + (auxn12) + (n12*2) + (auxn14) + (n14*2);
// voltar um numero multiplicar por 2 e dividir ele prrrrrr verificar cada aux pra ver se vale maais q 0 e verificar os numeros pra ver se tem alguem que vale um
// if (n2==1||n4==1||n6==1||n8==1||n9==1||n4==1||  ) {}

if ((an2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (an2*2)%10;
        an2 = an2 *2;
        an2 = an2 - auxn2;
        an2 = an2/10;
        // adicionar todas as auxes no final
    if (an2 == 1) {
        somap = somap-1;
    }

    if (an2>1) {
        an2 = an2/2;
        somap = somap - an2;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (an4*2)%10;
        an4 = an4 *2;
        an4 = an4 - auxn4;
        an4 = an4/10;
        // adicionar todas as auxes no final
        if (an4 == 1) {
        somap = somap-1;
    }
if (an4>1) {
        an4 = an4/2;
        somap = somap - an4;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (an6*2)%10;
        an6 = an6 *2;
        an6 = an6 - auxn6;
        an6 = an6/10;
        // adicionar todas as auxes no final

        if (an6 == 1) {
        somap = somap-1;
    }
if (an6>1) {
        an6 = an6/2;
        somap = somap - an6;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (an8*2)%10;
        an8 = an8 *2;
        an8 = an8 - auxn8;
        an8 = an8/10;
        // adicionar todas as auxes no final

        if (an8 == 1) {
        somap = somap-1;
    }
if (an8>1) {
        an8 = an8/2;
        somap = somap - an8;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (an10*2)%10;
        an10 = an10 *2;
        an10 = an10 - auxn10;
        an10 = an10/10;
        // adicionar todas as auxes no final
        if (an10 == 1) {
        somap = somap-1;
    }
if (an10>1) {
        an10 = an10/2;
        somap = somap - an10;
    }
printf("\n");
printf("\n");
printf("\n");
    }

 if ((an12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (an12*2)%10;
        an12 = an12 *2;
        an12 = an12 - auxn12;
        an12 = an12/10;
        // adicionar todas as auxes no final
        if (an12 == 1) {
        somap = somap-1;
    }
if (an12>1) {
        an12 = an12/2;
        somap = somap - an12;
    }
printf("\n");
printf("\n");
printf("\n");
    }
    if ((an14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (an14*2)%10;
        an14 = an14 *2;
        an14 = an14 - auxn14;
        an14 = an14/10;
        // adicionar todas as auxes no final

        if (an14 == 1) {
        somap = somap-1;
    }
if (an14>1) {
        an14 = an14/2;
        somap = somap - an14;
    }
printf("\n");
printf("\n");
printf("\n");
    }

// somar <somap> com oq nao foi usado ainda pode usaar tanto variaveis quanto auxialiares:

 printf("\n");
 printf("\n");
 printf("soma p: %li",somap);
printf("\n");
printf("%li",somap);
printf("\n");

         printf("n1 %li",n1);
         printf("\n");
         printf("n2 %li",n2);
printf("\n");
         printf("n3 %li",n3);
printf("\n");
         printf("n4 %li",n4);
printf("\n");
         printf("n5 %li",n5);
printf("\n");
         printf("n6 %li",n6);
printf("\n");
         printf("n7 %li",n7);
printf("\n");
         printf("n8 %li",n8);
printf("\n");
         printf("n9 %li",n9);
printf("\n");
         printf("n10 %li",n10);
printf("\n");
         printf("n11 %li",n11);
printf("\n");
         printf("n12 %li e auxn12 %i ",n12,auxn12);
printf("\n");
         printf("n13 %li",n13);
printf("\n");
         printf("n14 %li",n14);
printf("\n");
         printf("n15 %li",n15);
         printf("\n");

printf("\n");
printf("\n");
printf("\n");
printf("\n");
    // saber os intervalos de somageral
int somaGeral = somap + n1 + n3 + n5 + n7 + n9 + n11 + n13 + n15;
printf("soma geral: %i",somaGeral);
// an impares
printf("\n");
if (somaGeral>0 && somaGeral <=99) {
    // ultimo numero (20) 0
    somaGeral = somaGeral%10;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoo");

            }

}
if (somaGeral >99 && somaGeral < 999) {
    somaGeral = somaGeral%100;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoooooo");

        }
}

if (somaGeral>999.0 && somaGeral <1000) {
 somaGeral = somaGeral%1000;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
             printf("cartão invalido");
        }
}
if (somaGeral>1000 || somaGeral<0) {
    printf("cartão invalido mane");
printf("\n");
}
}


// if == 14
if (tam == 14) {

printf("visa: ");
printf("\n");
printf("\n");


printf("%i",tam);
    printf("\n");

    //4003600000000014
    //long int num = 4003600000000014;
    //long int num = 4003600000000014;

    printf("\n");
    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    printf("\n");
    long int n1 =   num%10;
    long int n2 =  (num%100)-n1;
    long int n3 =  (num%1000)-n1-n2;
    long int n4 =  (num%10000)-n1-n2-n3;
    long int n5 =  (num%100000)-n1-n2-n3-n4;
    long int n6 =  (num%1000000)-n1-n2-n3-n4-n5;
    long int n7 =  (num%10000000)-n1-n2-n3-n4-n5-n6;
    long int n8 =  (num%100000000)-n1-n2-n3-n4-n5-n6-n7;
    long int n9 =  (num%1000000000)-n1-n2-n3-n4-n5-n6-n7-n8;
    long int n10 = (num%10000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9;
    long int n11 = (num%100000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10;
    long int n12 = (num%1000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11;
    long int n13 = (num%10000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12;
    long int n14 = (num%100000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13;


    // fazer a verificação usar indices da string

    //2° numero dividido por 10 3° por 100 4° por mil
    n2 =   n2/10;
    n3 =   n3/100;
    n4 =   n4/1000;
    n5 =   n5/10000;
    n6 =   n6/100000;
    n7 =   n7/1000000;
    n8 =   n8/10000000;
    n9 =   n9/100000000;
    n10 = n10/1000000000;
    n11 = n11/10000000000;
    n12 = n12/100000000000;
    n13 = n13/1000000000000;
    n14 = n14/10000000000000;


    // criar as variaveis auxiliares pra verificação final:
    int an2 = n2;
    int an4 = n4;
    int an6 = n6;
    int an8 = n8;
    int an10 = n10;
    int an12 = n12;
    int an14 = n14;



    // as outras auxiliares
    int an1 = n1;
int an3 = n3;
int an5 = n5;
int an7 = n7;
int an9 = n9;
int an11 = n11;
int an13 = n13;



    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    // soma cada digito individualmente:
    // verificar os digitos ex (n1*2) > 10 então
    // numero 12 > 9 condição


    // criar as auxs de todos os numeros nesse caso 16 numero (16 auxes)
    int auxn1 = 0;
    int auxn2 = 0;
    int auxn3 = 0;
    int auxn4 = 0;
    int auxn5 = 0;
    int auxn6 = 0;
    int auxn7 = 0;
    int auxn8 = 0;
    int auxn9 = 0;
    int auxn10 = 0;
    int auxn11 = 0;
   int auxn12 = 0;
    int auxn13 = 0;
    int auxn14 = 0;



// criar as condicões e se forem verdade entrar dentro dos if se nao os valores nao serao alterados


// auxiliares que nao alteram o valor do

// verificar os dois primerios digitos para o master card


if ((n2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (n2*2)%10;
        n2 = n2 *2;
        n2 = n2 - auxn2;
        n2 = n2/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



    if ((n4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (n4*2)%10;
        n4 = n4 *2;
        n4 = n4 - auxn4;
        n4 = n4/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (n6*2)%10;
        n6 = n6 *2;
        n6 = n6 - auxn6;
        n6 = n6/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (n8*2)%10;
        n8 = n8 *2;
        n8 = n8 - auxn8;
        n8 = n8/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (n10*2)%10;
        n10 = n10 *2;
        n10 = n10 - auxn10;
        n10 = n10/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



 if ((n12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (n12*2)%10;
        n12 = n12 *2;
        n12 = n12 - auxn12;
        n12 = n12/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



    if ((n14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (n14*2)%10;
        n14 = n14 *2;
        n14 = n14 - auxn14;
        n14 = n14/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



//multiplicar todos os auxs correspondentes e somar eles depois
long int somap = (n2*2) + (auxn2) + (auxn4) + (n4*2) + (auxn6) + (n6*2 ) + (auxn8) + (n8*2 ) + (auxn10) + (n10*2) + (auxn12) + (n12*2) + (auxn14) + (n14*2);
// voltar um numero multiplicar por 2 e dividir ele prrrrrr verificar cada aux pra ver se vale maais q 0 e verificar os numeros pra ver se tem alguem que vale um
// if (n2==1||n4==1||n6==1||n8==1||n9==1||n4==1||  ) {}

if ((an2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (an2*2)%10;
        an2 = an2 *2;
        an2 = an2 - auxn2;
        an2 = an2/10;
        // adicionar todas as auxes no final
    if (an2 == 1) {
        somap = somap-1;
    }

    if (an2>1) {
        an2 = an2/2;
        somap = somap - an2;
    }

printf("\n");

printf("\n");
printf("\n");
    }
    if ((an4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (an4*2)%10;
        an4 = an4 *2;
        an4 = an4 - auxn4;
        an4 = an4/10;
        // adicionar todas as auxes no final
        if (an4 == 1) {
        somap = somap-1;
    }
if (an4>1) {
        an4 = an4/2;
        somap = somap - an4;
    }
printf("\n");

printf("\n");
printf("\n");
    }
    if ((an6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (an6*2)%10;
        an6 = an6 *2;
        an6 = an6 - auxn6;
        an6 = an6/10;
        // adicionar todas as auxes no final

        if (an6 == 1) {
        somap = somap-1;
    }
if (an6>1) {
        an6 = an6/2;
        somap = somap - an6;
    }
printf("\n");

printf("\n");
printf("\n");
    }
    if ((an8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (an8*2)%10;
        an8 = an8 *2;
        an8 = an8 - auxn8;
        an8 = an8/10;
        // adicionar todas as auxes no final

        if (an8 == 1) {
        somap = somap-1;
    }
if (an8>1) {
        an8 = an8/2;
        somap = somap - an8;
    }

printf("\n");

printf("\n");
printf("\n");
    }
    if ((an10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (an10*2)%10;
        an10 = an10 *2;
        an10 = an10 - auxn10;
        an10 = an10/10;
        // adicionar todas as auxes no final
        if (an10 == 1) {
        somap = somap-1;
    }
if (an10>1) {
        an10 = an10/2;
        somap = somap - an10;
    }

printf("\n");

printf("\n");
printf("\n");
    }

 if ((an12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (an12*2)%10;
        an12 = an12 *2;
        an12 = an12 - auxn12;
        an12 = an12/10;
        // adicionar todas as auxes no final

        if (an12 == 1) {
        somap = somap-1;
    }
if (an12>1) {
        an12 = an12/2;
        somap = somap - an12;
    }

printf("\n");

printf("\n");
printf("\n");
    }


    if ((an14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (an14*2)%10;
        an14 = an14 *2;
        an14 = an14 - auxn14;
        an14 = an14/10;
        // adicionar todas as auxes no final

        if (an14 == 1) {
        somap = somap-1;
    }
if (an14>1) {
        an14 = an14/2;
        somap = somap - an14;
    }

printf("\n");

printf("\n");
printf("\n");
    }


// somar <somap> com oq nao foi usado ainda pode usaar tanto variaveis quanto auxialiares:

 printf("\n");
 printf("\n");
 printf("soma p: %li",somap);
printf("\n");
printf("%li",somap);
printf("\n");

         printf("n1 %li",n1);
         printf("\n");
         printf("n2 %li",n2);
printf("\n");
         printf("n3 %li",n3);
printf("\n");
         printf("n4 %li",n4);
printf("\n");
         printf("n5 %li",n5);
printf("\n");
         printf("n6 %li",n6);
printf("\n");
         printf("n7 %li",n7);
printf("\n");
         printf("n8 %li",n8);
printf("\n");
         printf("n9 %li",n9);
printf("\n");
         printf("n10 %li",n10);
printf("\n");
         printf("n11 %li",n11);
printf("\n");
         printf("n12 %li e auxn12 %i ",n12,auxn12);
printf("\n");
         printf("n13 %li",n13);
printf("\n");
         printf("n14 %li",n14);
printf("\n");

         printf("\n");

printf("\n");
printf("\n");
printf("\n");
printf("\n");
    // saber os intervalos de somageral
int somaGeral = somap + n1 + n3 + n5 + n7 + n9 + n11 + n13 ;
printf("soma geral: %i",somaGeral);

// an impares
printf("\n");
if (somaGeral>0 && somaGeral <=99) {
    // ultimo numero (20) 0
    somaGeral = somaGeral%10;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoo");

            }

}
if (somaGeral >99 && somaGeral < 999) {
    somaGeral = somaGeral%100;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoooooo");

        }
}

if (somaGeral>999.0 && somaGeral <1000) {
 somaGeral = somaGeral%1000;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
             printf("cartão invalido");
        }
}
if (somaGeral>1000 || somaGeral<0) {
    printf("cartão invalido mane");
printf("\n");
}
}



// if == 13
if (tam == 13) {

printf("visa: ");
printf("\n");
printf("\n");


printf("%i",tam);
    printf("\n");

    //4003600000000014
    //long int num = 4003600000000014;
    //long int num = 4003600000000014;

    printf("\n");
    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    printf("\n");
    long int n1 =   num%10;
    long int n2 =  (num%100)-n1;
    long int n3 =  (num%1000)-n1-n2;
    long int n4 =  (num%10000)-n1-n2-n3;
    long int n5 =  (num%100000)-n1-n2-n3-n4;
    long int n6 =  (num%1000000)-n1-n2-n3-n4-n5;
    long int n7 =  (num%10000000)-n1-n2-n3-n4-n5-n6;
    long int n8 =  (num%100000000)-n1-n2-n3-n4-n5-n6-n7;
    long int n9 =  (num%1000000000)-n1-n2-n3-n4-n5-n6-n7-n8;
    long int n10 = (num%10000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9;
    long int n11 = (num%100000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10;
    long int n12 = (num%1000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11;
    long int n13 = (num%10000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12;



    // fazer a verificação usar indices da string

    //2° numero dividido por 10 3° por 100 4° por mil
    n2 =   n2/10;
    n3 =   n3/100;
    n4 =   n4/1000;
    n5 =   n5/10000;
    n6 =   n6/100000;
    n7 =   n7/1000000;
    n8 =   n8/10000000;
    n9 =   n9/100000000;
    n10 = n10/1000000000;
    n11 = n11/10000000000;
    n12 = n12/100000000000;
    n13 = n13/1000000000000;



    // criar as variaveis auxiliares pra verificação final:
    int an2 = n2;
    int an4 = n4;
    int an6 = n6;
    int an8 = n8;
    int an10 = n10;
    int an12 = n12;




    // as outras auxiliares
    int an1 = n1;
int an3 = n3;
int an5 = n5;
int an7 = n7;
int an9 = n9;
int an11 = n11;
int an13 = n13;



    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    // soma cada digito individualmente:
    // verificar os digitos ex (n1*2) > 10 então
    // numero 12 > 9 condição


    // criar as auxs de todos os numeros nesse caso 16 numero (16 auxes)
    int auxn1 = 0;
    int auxn2 = 0;
    int auxn3 = 0;
    int auxn4 = 0;
    int auxn5 = 0;
    int auxn6 = 0;
    int auxn7 = 0;
    int auxn8 = 0;
    int auxn9 = 0;
    int auxn10 = 0;
    int auxn11 = 0;
   int auxn12 = 0;
    int auxn13 = 0;




// criar as condicões e se forem verdade entrar dentro dos if se nao os valores nao serao alterados

// verificar os dois primerios digitos para o master card


if ((n2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (n2*2)%10;
        n2 = n2 *2;
        n2 = n2 - auxn2;
        n2 = n2/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (n4*2)%10;
        n4 = n4 *2;
        n4 = n4 - auxn4;
        n4 = n4/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (n6*2)%10;
        n6 = n6 *2;
        n6 = n6 - auxn6;
        n6 = n6/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (n8*2)%10;
        n8 = n8 *2;
        n8 = n8 - auxn8;
        n8 = n8/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (n10*2)%10;
        n10 = n10 *2;
        n10 = n10 - auxn10;
        n10 = n10/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



 if ((n12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (n12*2)%10;
        n12 = n12 *2;
        n12 = n12 - auxn12;
        n12 = n12/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }




//multiplicar todos os auxs correspondentes e somar eles depois
long int somap = (n2*2) + (auxn2) + (auxn4) + (n4*2) + (auxn6) + (n6*2 ) + (auxn8) + (n8*2 ) + (auxn10) + (n10*2) + (auxn12) + (n12*2);
// voltar um numero multiplicar por 2 e dividir ele prrrrrr verificar cada aux pra ver se vale maais q 0 e verificar os numeros pra ver se tem alguem que vale um
// if (n2==1||n4==1||n6==1||n8==1||n9==1||n4==1||  ) {}

if ((an2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (an2*2)%10;
        an2 = an2 *2;
        an2 = an2 - auxn2;
        an2 = an2/10;
        // adicionar todas as auxes no final
    if (an2 == 1) {
        somap = somap-1;
    }

    if (an2>1) {
        an2 = an2/2;
        somap = somap - an2;
    }

printf("\n");

printf("\n");
printf("\n");
    }
    if ((an4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (an4*2)%10;
        an4 = an4 *2;
        an4 = an4 - auxn4;
        an4 = an4/10;
        // adicionar todas as auxes no final
        if (an4 == 1) {
        somap = somap-1;
    }
if (an4>1) {
        an4 = an4/2;
        somap = somap - an4;
    }
printf("\n");

printf("\n");
printf("\n");
    }
    if ((an6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (an6*2)%10;
        an6 = an6 *2;
        an6 = an6 - auxn6;
        an6 = an6/10;
        // adicionar todas as auxes no final

        if (an6 == 1) {
        somap = somap-1;
    }
if (an6>1) {
        an6 = an6/2;
        somap = somap - an6;
    }
printf("\n");

printf("\n");
printf("\n");
    }
    if ((an8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (an8*2)%10;
        an8 = an8 *2;
        an8 = an8 - auxn8;
        an8 = an8/10;
        // adicionar todas as auxes no final

        if (an8 == 1) {
        somap = somap-1;
    }
if (an8>1) {
        an8 = an8/2;
        somap = somap - an8;
    }

printf("\n");

printf("\n");
printf("\n");
    }
    if ((an10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (an10*2)%10;
        an10 = an10 *2;
        an10 = an10 - auxn10;
        an10 = an10/10;
        // adicionar todas as auxes no final
        if (an10 == 1) {
        somap = somap-1;
    }
if (an10>1) {
        an10 = an10/2;
        somap = somap - an10;
    }

printf("\n");

printf("\n");
printf("\n");
    }

 if ((an12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (an12*2)%10;
        an12 = an12 *2;
        an12 = an12 - auxn12;
        an12 = an12/10;
        // adicionar todas as auxes no final

        if (an12 == 1) {
        somap = somap-1;
    }
if (an12>1) {
        an12 = an12/2;
        somap = somap - an12;
    }

printf("\n");

printf("\n");
printf("\n");
    }

// somar <somap> com oq nao foi usado ainda pode usaar tanto variaveis quanto auxialiares:

 printf("\n");

 printf("\n");
 printf("soma p: %li",somap);
printf("\n");
printf("%li",somap);
printf("\n");

         printf("n1 %li",n1);
         printf("\n");
         printf("n2 %li",n2);
printf("\n");
         printf("n3 %li",n3);
printf("\n");
         printf("n4 %li",n4);
printf("\n");
         printf("n5 %li",n5);
printf("\n");
         printf("n6 %li",n6);
printf("\n");
         printf("n7 %li",n7);
printf("\n");
         printf("n8 %li",n8);
printf("\n");
         printf("n9 %li",n9);
printf("\n");
         printf("n10 %li",n10);
printf("\n");
         printf("n11 %li",n11);
printf("\n");
         printf("n12 %li e auxn12 %i ",n12,auxn12);
printf("\n");
         printf("n13 %li",n13);
printf("\n");

printf("\n");

         printf("\n");

printf("\n");
printf("\n");
printf("\n");
printf("\n");
    // saber os intervalos de somageral
int somaGeral = somap + n1 + n3 + n5 + n7 + n9 + n11 + n13;
printf("soma geral: %i",somaGeral);

// an impares
printf("\n");
if (somaGeral>0 && somaGeral <=99) {
    // ultimo numero (20) 0
    somaGeral = somaGeral%10;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoo");

            }

}
if (somaGeral >99 && somaGeral < 999) {
    somaGeral = somaGeral%100;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoooooo");

        }
}

if (somaGeral>999.0 && somaGeral <1000) {
 somaGeral = somaGeral%1000;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
             printf("cartão invalido");
        }
}
if (somaGeral>1000 || somaGeral<0) {
    printf("cartão invalido mane");
printf("\n");
}
}
// deixar ele no final e depois ir pro proximo cartão
}

// Americam express 15 digitos e starts 34 37 verificar esta com os dois primeiros numeros


if (tam==15 && (verificar ==34 || verificar ==37 )) {




printf("americam express: ");
printf("\n");
printf("\n");


printf("%i",tam);
    printf("\n");

    //4003600000000014
    //long int num = 4003600000000014;
    //long int num = 4003600000000014;

    printf("\n");
    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    printf("\n");
    long int n1 =   num%10;
    long int n2 =  (num%100)-n1;
    long int n3 =  (num%1000)-n1-n2;
    long int n4 =  (num%10000)-n1-n2-n3;
    long int n5 =  (num%100000)-n1-n2-n3-n4;
    long int n6 =  (num%1000000)-n1-n2-n3-n4-n5;
    long int n7 =  (num%10000000)-n1-n2-n3-n4-n5-n6;
    long int n8 =  (num%100000000)-n1-n2-n3-n4-n5-n6-n7;
    long int n9 =  (num%1000000000)-n1-n2-n3-n4-n5-n6-n7-n8;
    long int n10 = (num%10000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9;
    long int n11 = (num%100000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10;
    long int n12 = (num%1000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11;
    long int n13 = (num%10000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12;
    long int n14 = (num%100000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13;
    long int n15 = (num%1000000000000000)-n1-n2-n3-n4-n5-n6-n7-n8-n9-n10-n11-n12-n13-n14;

    // fazer a verificação usar indices da string

    //2° numero dividido por 10 3° por 100 4° por mil
    n2 =   n2/10;
    n3 =   n3/100;
    n4 =   n4/1000;
    n5 =   n5/10000;
    n6 =   n6/100000;
    n7 =   n7/1000000;
    n8 =   n8/10000000;
    n9 =   n9/100000000;
    n10 = n10/1000000000;
    n11 = n11/10000000000;
    n12 = n12/100000000000;
    n13 = n13/1000000000000;
    n14 = n14/10000000000000;
    n15 = n15/100000000000000;

    // criar as variaveis auxiliares pra verificação final:
    int an2 = n2;
    int an4 = n4;
    int an6 = n6;
    int an8 = n8;
    int an10 = n10;
    int an12 = n12;
    int an14 = n14;



    // as outras auxiliares
    int an1 = n1;
int an3 = n3;
int an5 = n5;
int an7 = n7;
int an9 = n9;
int an11 = n11;
int an13 = n13;
int an15 = n15;


    // uma string ou um array
    // snprintf(qual variavel salvar o numero(string), um numero que representa o tamanho maximo que a string pode ter,
    // de onde vem o numero (num))

    // soma cada digito individualmente:
    // verificar os digitos ex (n1*2) > 10 então
    // numero 12 > 9 condição


    // criar as auxs de todos os numeros nesse caso 16 numero (16 auxes)
    int auxn1 = 0;
    int auxn2 = 0;
    int auxn3 = 0;
    int auxn4 = 0;
    int auxn5 = 0;
    int auxn6 = 0;
    int auxn7 = 0;
    int auxn8 = 0;
    int auxn9 = 0;
    int auxn10 = 0;
    int auxn11 = 0;
   int auxn12 = 0;
    int auxn13 = 0;
    int auxn14 = 0;
    int auxn15 = 0;


// criar as condicões e se forem verdade entrar dentro dos if se nao os valores nao serao alterados


// auxiliares que nao alteram o valor do

// verificar os dois primerios digitos para o master card


if ((n2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (n2*2)%10;
        n2 = n2 *2;
        n2 = n2 - auxn2;
        n2 = n2/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (n4*2)%10;
        n4 = n4 *2;
        n4 = n4 - auxn4;
        n4 = n4/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (n6*2)%10;
        n6 = n6 *2;
        n6 = n6 - auxn6;
        n6 = n6/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }

    if ((n8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (n8*2)%10;
        n8 = n8 *2;
        n8 = n8 - auxn8;
        n8 = n8/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }


    if ((n10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (n10*2)%10;
        n10 = n10 *2;
        n10 = n10 - auxn10;
        n10 = n10/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



 if ((n12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (n12*2)%10;
        n12 = n12 *2;
        n12 = n12 - auxn12;
        n12 = n12/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



    if ((n14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (n14*2)%10;
        n14 = n14 *2;
        n14 = n14 - auxn14;
        n14 = n14/10;
        // adicionar todas as auxes no final

printf("\n");

printf("\n");
printf("\n");
    }



//multiplicar todos os auxs correspondentes e somar eles depois
long int somap = (n2*2) + (auxn2) + (auxn4) + (n4*2) + (auxn6) + (n6*2 ) + (auxn8) + (n8*2 ) + (auxn10) + (n10*2) + (auxn12) + (n12*2) + (auxn14) + (n14*2);
// voltar um numero multiplicar por 2 e dividir ele prrrrrr verificar cada aux pra ver se vale maais q 0 e verificar os numeros pra ver se tem alguem que vale um
// if (n2==1||n4==1||n6==1||n8==1||n9==1||n4==1||  ) {}

if ((an2*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn2 = (an2*2)%10;
        an2 = an2 *2;
        an2 = an2 - auxn2;
        an2 = an2/10;
        // adicionar todas as auxes no final
    if (an2 == 1) {
        somap = somap-1;
    }

    if (an2>1) {
        an2 = an2/2;
        somap = somap - an2;
    }

printf("\n");

printf("\n");
printf("\n");
    }


    if ((an4*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn4 = (an4*2)%10;
        an4 = an4 *2;
        an4 = an4 - auxn4;
        an4 = an4/10;
        // adicionar todas as auxes no final
        if (an4 == 1) {
        somap = somap-1;
    }
if (an4>1) {
        an4 = an4/2;
        somap = somap - an4;
    }
printf("\n");

printf("\n");
printf("\n");
    }
    if ((an6*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn6 = (an6*2)%10;
        an6 = an6 *2;
        an6 = an6 - auxn6;
        an6 = an6/10;
        // adicionar todas as auxes no final

        if (an6 == 1) {
        somap = somap-1;
    }
if (an6>1) {
        an6 = an6/2;
        somap = somap - an6;
    }
printf("\n");

printf("\n");
printf("\n");
    }
    if ((an8*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn8 = (an8*2)%10;
        an8 = an8 *2;
        an8 = an8 - auxn8;
        an8 = an8/10;
        // adicionar todas as auxes no final

        if (an8 == 1) {
        somap = somap-1;
    }
if (an8>1) {
        an8 = an8/2;
        somap = somap - an8;
    }

printf("\n");

printf("\n");
printf("\n");
    }
    if ((an10*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn10 = (an10*2)%10;
        an10 = an10 *2;
        an10 = an10 - auxn10;
        an10 = an10/10;
        // adicionar todas as auxes no final
        if (an10 == 1) {
        somap = somap-1;
    }
if (an10>1) {
        an10 = an10/2;
        somap = somap - an10;
    }

printf("\n");

printf("\n");
printf("\n");
    }

 if ((an12*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn12 = (an12*2)%10;
        an12 = an12 *2;
        an12 = an12 - auxn12;
        an12 = an12/10;
        // adicionar todas as auxes no final

        if (an12 == 1) {
        somap = somap-1;
    }
if (an12>1) {
        an12 = an12/2;
        somap = somap - an12;
    }

printf("\n");

printf("\n");
printf("\n");
    }


    if ((an14*2)>9) {
        // armazenar o ultimo numero %10 2 e o outro seria 1 valor dele atual = 12 - aux dele (2) = 10 ele mesmo divido por 10 = 1
        auxn14 = (an14*2)%10;
        an14 = an14 *2;
        an14 = an14 - auxn14;
        an14 = an14/10;
        // adicionar todas as auxes no final

        if (an14 == 1) {
        somap = somap-1;
    }
if (an14>1) {
        an14 = an14/2;
        somap = somap - an14;
    }

printf("\n");

printf("\n");
printf("\n");
    }



// somar <somap> com oq nao foi usado ainda pode usaar tanto variaveis quanto auxialiares:





 printf("\n");

 printf("\n");
 printf("soma p: %li",somap);
printf("\n");
printf("%li",somap);
printf("\n");





         printf("n1 %li",n1);
         printf("\n");
         printf("n2 %li",n2);
printf("\n");
         printf("n3 %li",n3);
printf("\n");
         printf("n4 %li",n4);
printf("\n");
         printf("n5 %li",n5);
printf("\n");
         printf("n6 %li",n6);
printf("\n");
         printf("n7 %li",n7);
printf("\n");
         printf("n8 %li",n8);
printf("\n");
         printf("n9 %li",n9);
printf("\n");
         printf("n10 %li",n10);
printf("\n");
         printf("n11 %li",n11);
printf("\n");
         printf("n12 %li e auxn12 %i ",n12,auxn12);
printf("\n");
         printf("n13 %li",n13);
printf("\n");
         printf("n14 %li",n14);
printf("\n");
         printf("n15 %li",n15);
         printf("\n");

printf("\n");
printf("\n");
printf("\n");
printf("\n");
    // saber os intervalos de somageral
int somaGeral = somap + n1 + n3 + n5 + n7 + n9 + n11 + n13 + n15;
printf("soma geral: %i",somaGeral);

// an impares
printf("\n");
if (somaGeral>0 && somaGeral <=99) {
    // ultimo numero (20) 0
    somaGeral = somaGeral%10;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoo");

            }

}
if (somaGeral >99 && somaGeral < 999) {
    somaGeral = somaGeral%100;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
            printf("cartão invalidoooooo");

        }
}

if (somaGeral>999.0 && somaGeral <1000) {
 somaGeral = somaGeral%1000;
    if (somaGeral ==0 ) {
        printf("cartão valido mane");

        }
        else {
             printf("cartão invalido");
        }
}
if (somaGeral>1000 || somaGeral<0) {
    printf("cartão invalido mane");
printf("\n");
}

}



else {
    printf("cartão invalido");
}

// if final
printf("\n");
}