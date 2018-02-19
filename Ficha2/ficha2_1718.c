#include <stdio.h>
#include <stdlib.h>

void f1(); float mult(int n, float m); float mult2(int n, float m); int mdc(int a, int b); int fibrec(int n); int fib(int n);
void f2();

int main()
{
    f1();
    printf("%f\n", mult(10, 4));
    printf("%f\n", mult2(5, 6));
    printf("%d\n", mdc(12, 24));
    printf("%d\n", fibrec(10));
    printf("%d\n", fib(10));
    f2();
    return 0;
}

//------------PARTE 1--------------

void f1(){
    int i, j, *a, *b;
    i=3; j=5;
    a = &i; b = &j;
    i++;
    j = i + *b;
    b = a;
    j = j + *b;
    printf("%d\n", j);
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
    printf("%d\n", x);
}
//TODO
/*
void swap(int a, int b){
    int x;
    x = a; a = b; b = a;
}
*/

//---------------PARTE 2--------------

float mult(int n, float m){
    float r = 0;
    while (n>0) {
        r = r + m;
        n--;
    }
    return r;
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

int mdc(int a, int b){
    while (a!=b) {
        if (a>b) {
            a = a-b;
        } else b = b-a;
    }
    return a;
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
