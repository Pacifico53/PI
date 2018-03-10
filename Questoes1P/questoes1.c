#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();

int main()
{
    menu();
    return 0;
}

void menu(){
    int i, q = 0;
    printf("Escolhe questao (1-50):\n");
    while (q<1 || q>50) {
        scanf("%d", q);
    }
}
