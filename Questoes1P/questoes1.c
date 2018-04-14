#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu(); void q1();void q2();void q3();void q4();void q5();void q6();void q7();void q8();

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
            case 5: q5();
                    break;
            case 6: q6();
                    break;
            case 7: q7();
                    break;
            case 8: q8();
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

int trailingZ(unsigned int n){
    int r = 0;
    while(n != 0) {
        if (n%2 == 0) {
            r++;
        }
        n /= 2;
    }
    return r;
}

void q5(){
    int n;
    printf("Insere um numero para que seja calculado o numero de 0's do numero em binario\n=> ");
    scanf("%d", &n);
    printf("Resultado: %d.\n", trailingZ(n));
}

int qDig(unsigned int n){
    int r = 0;
    while(n != 0){
        r++;
        n /= 10;
    }
    return r;
}

void q6(){
    int n;
    printf("Insere um numero para que seja calculado o numero de digitos\n=> ");
    scanf("%d", &n);
    printf("Resultado: %d.\n", qDig(n));
}

//------> TODO: FIX THIS SHIT <--------

char *myStrCat(char s1[], char s2[]){
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        i++;
    }
    for (int j = 0; s2[i] != '\0'; j++) {
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

void q7(){
    char *s1;
    char *s2;
    printf("Insere duas strings para concatenar:\nString 1 => ");
    scanf("%s", s1);
    printf("String 2 => ");
    scanf("%s", s2);
    printf("String resultante: \"%s\".\n", myStrCat(s1, s2));
}

//------> TODO: FIX THIS SHIT <--------

char *mystrcpy(char *dest, char source[]){
    int i, j;
    for (int i = 0; source[i] != '\n' ; i++) {
        dest[i] = source[i];
    }
    dest[i] = '\0';
    return dest;
}

void q8(){
    char *source;
    printf("Insere uma string, vai ser copiada para outra string:\n");
    scanf("%s", &source);
    char dest[strlen(source)];
    printf("String copiada:  %s\n", mystrcpy(dest, source));
}
