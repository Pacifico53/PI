#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void parte1(); void parte2();
void f1(); float mult(int n, float m); float mult2(int n, float m); int mdc(int a, int b); int fibrec(int n); int fib(int n);
void f2();
void f3();
void f2_1(int a, int b); void f2_2(int a, int b); void f2_4(); void f2_6(); void f2_7();

int main()
{
    int p=0;
    printf("ESCOLHE PARTE (1 OU 2):\n");
    while (p<1 || p>2) {
        scanf("%d", &p);
        if (p==1) {
            parte1();
        } else parte2();
    }
    return 0;
}

void parte1(){
    int q=0;
    while (q<1 || q>6) {
        printf("ESCOLHE QUESTAO:\n");
        scanf("%d", &q);
        switch (q) {
            case 1: f1();
                    break;
            case 2: f2();
                    break;
            case 3: f3();
                    break;
            default: printf("De 1 a 5 amigo ;)\n");
        }
    }
}

void parte2(){
    int q=0;
    srand(time(NULL));
    while (q<1 || q>7) {
        printf("ESCOLHE QUESTAO:\n");
        scanf("%d", &q);
        switch (q) {
            case 1: f2_1(rand()%15, rand()%15);
                    break;
            case 2: f2_2(rand()%15, rand()%15);
                    break;
            case 3: printf("1 iteraçao e 999 iteraçoes\n");
                    break;
            case 4: f2_4(rand()%50, rand()%50);
                    break;
            case 5: printf("999 iteraçoes e 1000 iteraçoes\n");
                    break;
            case 6: f2_6(rand()%50, rand()%50);
                    break;
            case 7: f2_7(rand()%20);
                    break;
            default: printf("De 1 a 5 amigo ;)\n");
        }
    }
}

//-------------------PARTE 1---------------

void f1(){
    int i, j, *a, *b;
    i=3; j=5;
    a = &i; b = &j;
    i++;
    j = i + *b;
    b = a;
    j = j + *b;
    printf("OUTPUT: %d\n", j);
}
//OUTPUT: 13

void initLIXO(int a){ //Esta funcao e lixo pq so muda o valor local do a, é preciso fazer magias com apontadores
    a = 0;
}

void initCOOL(int *a){ //Esta ja e cool pq funciona
   *a = 0;
}

void f2(){
    int x;
    x = 3;
    initCOOL(&x);
    printf("OUTPUT: %d\n", x);
}

void swap(int *a, int *b){
    int x;
    x = *a; *a = *b; *b = x;
}

void f3(){
    int x=3, y=5;
    swap(&x, &y);
    printf("OUTPUT: %d %d\n", x, y);
}



//---------------PARTE 2--------------

float mult(int n, float m){
    float r = 0;
    while (n>0) {
        r = r + m;
        n--;
    }
    return r;
}

void f2_1(int a, int b){
    int r = mult(a, b);
    printf("OUTPUT PARA A = %d, E B = %d = %d\n", a, b, r);   
}

float mult2(int n, float m){
    float r = 0;
    while (n>0) {
        if (n%2 != 0) {r += m;}
        n /= 2;
        m += m;
    }
    return r;
}

void f2_2(int a, int b){
    int r = mult2(a, b);
    printf("OUTPUT PARA A = %d, E B = %d = %d\n", a, b, r);   
}

int mdc(int a, int b){
    while (a!=b) {
        if (a>b) {
            a = a-b;
        } else b = b-a;
    }
    return a;
}

// Isto nao resulta, mas vou deixar assim pq é como eles querem na ficha
int mdc2(int a, int b){
    while (a!=b) {
        if (a>b) {
            a = a%b;
        } else b = b%a;
    }
    return a;
}

void f2_4(int a, int b){
    printf("OUTPUT PARA A = %d E B = %d : %d\n", a, b, mdc(a, b));
}

void f2_6(int a, int b){
    printf("OUTPUT PARA A = %d E B = %d : %d\n", a, b, mdc(a, b)); // a mdc2 da um loop infinito, por isso uso a mdc aqui
}

int fibrec(int n){
    int r;
    if (n<2) {
        r = 1;
    } else r = (fibrec(n-1)+fibrec(n-2));
    return r;
}

int fib(int n){
    int p=1, s=2, i, r=1;
    for (i = 1; i < n; i++) {
        if (i <= 1) {
            r = i;
        } 
        else{
            r = p + s;
            p = s;
            s = r;
        }
    }
    return r;
}

void f2_7(int n){
    printf("OUTPUT PARA n = %d\na) \"%d\"\nb) \"%d\"\n", n, fibrec(n), fib(n));
}
