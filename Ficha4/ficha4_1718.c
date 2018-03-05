#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int minusculas(char s[]);int contapal(char s[]);int compara(char *p, char *ps);
int procura(char *p, char *ps[], int N);

int main()
{
    char str[] = "  ISTO E UMA STRING DE TESTE COM\nDUAS LINHAS  ";
    char *str2[] = {"asad", "asdsadad", "  ISTO E UMA STRING DE TESTE COM\nDUAS LINHAS  ", "asccdv"}; 
    /*int a = minusculas(str);
    printf("%d ==>  %s\n", a, str);
    printf("%d ==>  %s\n", contapal(str), str);*/
    printf(" ++>  %d\n", procura(str, str2, 4));
    return 0;
}

int minusculas(char s[]){
    int r = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i]>='A' && s[i]<='Z') {
            s[i] = s[i] + ('a' - 'A');
            r++;
        }
    }
    return r;
}

int contalinhas(char s[]){
    int r=0;
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i]=='\n') {
            r++;
        }
    }
    return r;
}

int contapal(char s[]){
    int p = 0;
    int c = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++) { 
        if (isspace(s[i])) p = 0;
            else if (p==0) {
                p=1;
                c++;
                }
    }
    return c;
}

int compara(char *p, char *ps){
    int i;
    int r = 1;
    for (i = 0; p[i] != '\0' && ps[i] != '\0' && r == 1; i++) {
        if (p[i] != ps[i]) r = 0;
    }
    return r;
}

int procura(char *p, char *ps[], int N){
    int i;
    int r = 0;
    for (i = 0; i < N && r != 1; i++) {
        r = compara(p, ps[i]);
    }
    return i;
}
