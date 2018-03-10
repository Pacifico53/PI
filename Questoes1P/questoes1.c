#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(); void q1();void q2();void q3();void q4();

int main()
{
    menu();
    return 0;
}

void menu(){
    int i, q = 0;
    printf("Escolhe questao (1-50):\n");
    while (q<1 || q>50) {
        scanf("%d", &q);
        switch (q) {
            case 1: q1();
                    break;
            case 2: q2();
                    break;
            case 3: q3();
                    break;
            case 4: q4();
                    break;
            default: if (q<1 || q>50) {printf("Entre 1 e 50 amigo ;)\n");}
                         else {printf("INVALID (Ainda nao fiz essa)\n");}
        }
    }
}

// Maior elemento
void q1(){
    int i, m = -1, b = -1;
    printf("Insere varios numeros para que seja calculado o maior, insere 0 para acabar:\n");
    for(i=0; b!=0; i++){
        printf("=> ");
        scanf("%d", &b);
        if (b>m) {m = b;}
    }
    printf("Maior elemento da lista: %d.\n", m);
}

// Media dos elementos
void q2(){
    int i, b = -1;
    int m = 0;
    printf("Insere varios numeros para que seja calculado a media deles, insere 0 para acabar:\n");
    for(i=0; b!=0; i++){
        printf("=> ");
        scanf("%d", &b);
        m += b;
    }
    m /= i-1;
    printf("Media dos elemento da lista: %d.\n", m);
}

// Segundo maior elemento
void q3(){
    int i, m = -1, n = -1, b = -1;
    printf("Insere varios numeros para que seja calculado o segundo maior, insere 0 para acabar:\n");
    for(i=0; b!=0; i++){
        printf("=> ");
        scanf("%d", &b);
        if (b>m) {n = m; m = b;}
            else{if(b>n) n=b;}
    }
    printf("Segundo maior elemento da lista: %d.\n", n);
}

// Numero de 1's no numero em binario
int bitsUm(unsigned int n){
    int r = 0;
    while(n != 0){
        r += n%2;
        n /= 2;
    }
    return r;
}

void q4(){
    int n;
    printf("Insere um numero para que seja calculado o numero de 1's do numero em binario\n=> ");
    scanf("%d", &n);
    printf("Resultado: %d.\n", bitsUm(n));
}
