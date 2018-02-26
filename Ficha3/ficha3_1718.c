#include <stdio.h>
#include <stdlib.h>

void f1_a(); void f1_b(); void swapM(int *x, int *y); void swap(); int soma(int v[], int N);
int maximum(int v[], int N, int *m); void quadrados(int q[], int N);void pascal(int v[], int N);

int main()
{
    int i;
    f1_a();
    f1_b();
    int x=3; int y=5;
    swapM(&x, &y);
    printf("%d %d\n", x, y);
    int v[5] = {1,2,3,4,5};
    swap(v, 2, 4);
    printf("%d %d %d %d %d \n", v[0], v[1], v[2], v[3], v[4]);
    printf("%d\n", soma(v, 5));
    int max;
    if(maximum(v, 5, &max)==0) printf("%d\n", max);
    printf("-------------\n");
    int q[10];
    quadrados(q, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", q[i]);
    }
    printf("-----------------------\n");
    int qq[6];
    pascal(qq, 5);
    return 0;
}

void f1_a(){
    int x[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int *y, *z, i;
    y =x; z = x+3;
    for (i = 0; i < 5; i++) {
        printf("%d %d %d\n", x[i], *y, *z);
        y = y+1; z = z+2;
    }
}

void f1_b(){
    int i, j, *a, *b;

    i=3; j=5;
    a=&i; b=&j;
    i++;
    j = i + *b;
    b = a;
    j = j + *b;
    printf("%d\n", j);
}

void swapM(int *x, int *y){
    int a;
    a = *x;
    *x = *y;
    *y = a;
}

void swap(int v[], int i, int j){
    int a = *(v+i);
    v[i]=v[j];
    v[j]=a;
}

int soma(int v[], int N){
    int r = 0;
    for (int i = 0; i < N; i++) {
        r+=v[i];
    }
    return r;
}

int maximum(int v[], int N, int *m){
    int i, r=0;
    *m = v[0];
    for (i = 0; i < N; i++) {
        if (v[i]>*m) *m = v[i];
    }
    if (N<0) {r = 1;}
    return r;
}

void quadrados(int q[], int N){
    int a = 1;
    for (int i = 0; i < N; i++) {
        q[i] = a*a;
        a++;
    }
}

void pascal(int v[], int N){
    int i, j;
    int a = 1;
    int b = 1;
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i < N; i++) {
        for (int j = 0; j < i; j++) {
              v[i-(j+1)] = a + b;
              a = b;
              b = v[i-(j+1)];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d\n", v[i]);
    }/*
    if (N==0) v = {1};
    if (N==1) v = {1,1};
    */
}
