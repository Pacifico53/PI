#include <stdio.h>
#include <stdlib.h>

void f1_a(); void f1_b(); void swapM(int *x, int *y); void swap();

int main()
{
    f1_a();
    f1_b();
    int x=3; int y=5;
    swapM(&x, &y);
    printf("%d %d\n", x, y);
    int v[5] = {1,2,3,4,5};
    swap(v, 2, 4);
    printf("%d %d %d %d %d \n", v[0], v[1], v[2], v[3], v[4]);
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

