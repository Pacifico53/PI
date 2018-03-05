#include <stdio.h>
#include <stdlib.h>

void f1_a(); void f1_b(); void swapM(int *x, int *y); void swap(); int soma(int v[], int N);
int maximum(int v[], int N, int *m); void quadrados(int q[], int N);void pascal(int v[], int N);
void menu(); void f2(); void f3(); void f4(); void f5(); void f6();

int main()
{
    /*
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
    pascal(qq, 6);
    */
    menu();
    return 0;
}

void menu(){
    int a = 0;
    printf("Escolhe questao (1 a 7):\n");
    while (a < 1 || a > 7) {
        scanf("%d", &a);
        switch (a) {
            case 1: printf("OUTPUTS:\na)\n");
                    f1_a();
                    printf("b)\n");
                    f1_b();
                    break;
            case 2: f2();
                    break;
            case 3: f3();
                    break;
            case 4: f4();
                    break;
            case 5: f5();
                    break;
            case 6: f6();
                    break;
            default: printf("De 1 a 7 amigo ;)\n");
        }
    }
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

void f2(){
    int a, b;
    printf("Escolhe dois valores para aplicar swap:\nValor A: ");
    scanf("%d", &a);
    printf("Valor B: ");
    scanf("%d", &b);
    swapM(&a, &b);
    printf("Apos swap, valor A = %d, valor B = %d\n", a, b);
}

void swapM(int *x, int *y){
    int a;
    a = *x;
    *x = *y;
    *y = a;
}

void f3(){
    int i, a, b;
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Tens este array de numeros: [1,2,3,4,5,6,7,8,9,10]\nEscolhe dois indices para fazer swap:\n");
    printf("Indice 1: ");
    scanf("%d", &a);
    printf("Indice 2: ");
    scanf("%d", &b);
    swap(array, a, b);
    printf("Apos swap, valores do array:\n[");
    for (i = 0; i < 9; i++) {
        printf("%d,", array[i]);
    }
    printf("%d]\n", array[9]);
}

void swap(int v[], int i, int j){
    int a = *(v+i);
    v[i]=v[j];
    v[j]=a;
}

void f4(){
    int n, i;
    printf("Indica o tamanho de um array de ints\n");
    scanf("%d", &n);
    int a[n];
    printf("Insere os elementos do array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Soma dos valores: %d\n", soma(a, n));
}

int soma(int v[], int N){
    int r = 0;
    for (int i = 0; i < N; i++) {
        r+=v[i];
    }
    return r;
}

void f5(){
    int n, i, m, max;
    printf("Indica o tamanho de um array de ints\n");
    scanf("%d", &n);
    int a[n];
    printf("Insere os elementos do array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    m = maximum(a, n, &max);
    printf("A funcao maximum retornou \"%d\", maximo dos elementos: %d\n",m, max);
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

void f6(){
    int n, i;
    printf("Indica um tamanho de array para preencher com quadrados de inteiros naturais:\n");
    scanf("%d", &n);
    int array[n];
    quadrados(array, n);
    printf("Array resultante: [");
    for (i = 0; i < n-1; i++) {
        printf("%d,", array[i]);
    }
    printf("%d]\n", array[n-1]);
}

void quadrados(int q[], int N){
    int a = 1;
    for (int i = 0; i < N; i++) {
        q[i] = a*a;
        a++;
    }
}

//TODO
void pascal(int v[], int N){
    int i, j, t=1;
    v[0]=1; v[1]=1;
    for (i = 2; i < N; i++) {
        for (j = 1; j < i; j++) {
            v[j] = v[j-1] + t;
            t = v[j];
        }
    }
    for (i = 0; i < N; i++) {
        printf("%d\n", v[i]);
    }
}
