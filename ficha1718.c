#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void parte1(); void parte2();
void f1(); void f2(); void f3(); void f4(); void f5(); void fa(); void fb(); void fc(); void fd(); void fe(); 
void ff(); void f2_2(); void f2_3(); void f2_4(); 

int main()
{
    int a = 0;
    printf("Ficha 1 2017 2018\nParte 1 ou 2?\n");
    while ( a != 1 && a != 2){
        scanf("%d", &a);
        switch (a) {
            case 1 : parte1();
                     break;
            case 2 : parte2();
                     break;
            default: printf("1 ou 2 amigo ;)\n");
        }    
    }
    return 0;
}

void parte1(){
    int q = -1;
    printf("Escolhe pergunta(1-5): ");
    while (q < 0 || q > 5) {
        scanf("%d", &q);
        switch (q) {
            case 1: f1();
                    break;
            case 2: f2();
                    break; 
            case 3: f3();
                    break;         
            case 4: f4();
                    break;   
            case 5: f5();
                    break;
            default : printf("De 1 a 5 amigo ;)\n");
        }
    }
}

void parte2(){
    char q = 'g';
    srand( time(NULL) );  //seed para ter numeros random
    printf("Escolhe pergunta(a-f ou 2-4): ");
    while ((q < 'a' || q > 'f') && (q < '1' || q > '4')) {
        scanf("%s", &q);
        switch (q) {
            case 'a': fa();
                      break;
            case 'b': fb();
                      break; 
            case 'c': fc();
                      break;         
            case 'd': fd();
                      break;   
            case 'e': fe();
                      break;
            case 'f': ff(rand()%40);
                      break;
            case '2': f2_2(rand()%20);
                      break;
            case '3': f2_3(rand()%20);
                      break;
            default : printf("De 'a' a 'f' ou 2 a 4 amigo ;)\n");
        }
    }
}

void f1(){
    int x, y;
    x = 3;
    y = x+1;
    x = x*y;
    y = x+y;
    printf("OUTPUT : \"%d %d\"\n", x, y);
}
// OUTPUT1 : 12 16 

void f2(){
    int x, y;
    x = 0;
    printf("OUTPUT : \"%d %d\"\n", x, y);
}

// OUTPUT2 : 0 ?

void f3(){
    char a, b, c;
    a = 'A'; b = ' '; c = '0';
    printf("OUTPUT : \n\"%c %d\n", a, a); 
    a = a+1; c = c+2;
    printf("%c %d %c %d\n", a, a, c, c);
    c = a+b;
    printf("%c %d\"\n", c, c);
}

// OUTPUT3 : A 65
//           B 66 2 50
//           b 98

void f4(){
    int x, y;
    x = 200; y = 100;
    x = x+y; y = x-y; x = x-y;
    printf("OUTPUT: \"%d %d\"\n", x, y);
}

// OUTPUT4 : 100 200

void f5(){
    int x, y;
    x = 100; y = 28;
    x += y; y -= x;
    printf("OUTPUT : \n\"%d %d\n", x++, ++y);
    printf("%d %d\"\n", x, y);
}

// OUTPUT5 : 128 -99
//           129 -99

//-----------PARTE 2----------------

void fa(){
    int x, y;
    x = 3; y = 5;
    if (x > y)
        y = 6;
    printf("OUTPUT : \"%d %d\"\n", x, y);
}

//OUTPUT1 : 3 5

void fb(){
    int x, y;
    x = y = 0;
    while (x != 11) {
        x = x+1; y += x;
    }
    printf("OUTPUT : \"%d %d\"\n", x, y);
}

//OUTPUT2 : 10 66

void fc(){
    int x, y;
    x = y = 0;
    //while (x != 11) {
    //   x = x+2; y += x; COMENTED OUT PQ LOOP INFINITO DUH
    //}
    printf("LOOP INFINITO\n", x, y);
}

//OUTPUT3 : LOOP INFINITO

void fd(){
    int i;
    printf("OUTPUT : \"");
    for (i = 0; i < 20; i++) {
        if (i%2 == 0) putchar('_');
        else putchar('#');
    }
    printf("\"\n");
}

//OUTPUT4 : _#_#_#_#_#_#...

void fe(){
    char i, j;
    printf("OUTPUT :\n\"");
    for (i = 'a'; i != 'h'; i++) {
        for (j = i; j < 'h'; j++) {
            putchar(j);
        }
        putchar('\n');
    }
    printf("\"\n");
}

//OUTPUT5 : abcdefg
//          bcdefg
//          cdefg
//          defg
//          efg
//          fg
//          g

void ff(int n){
    printf("OUTPUT para n = %d (random):\"", n);
    while (n>0) {
        if (n%2 == 0) putchar('0');
        else putchar('1');
        n = n/2;
    }
    printf("\"\n");
}

//OUTPUT6 : numero n em binario mas ao contrario idk

void f2_2(int n){
    int i, j;
    printf("OUTPUT para n = %d (random):\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            putchar('#');
        }
        putchar('\n');
    }
}

void f2_3(int n){
    int i, j;
    printf("OUTPUT para n = %d (random):\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i%2==0){
                if (j%2==0) putchar('#');
                else putchar('_');
            } else {
                if (j%2==0) putchar('_');
                else putchar('#');
            }
        }
        putchar('\n');
    }
}


