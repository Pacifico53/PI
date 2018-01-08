#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//DECLARAR FUNCOES
void q1();void q2();void q3();void q4();
void q5();void q6();void q7();void q8();
void q9();void q10();void q11();void q12();
void q13();void q14();void q15();void q16();
void q17();void q18();void q19();void q20();
void q21();void q22();void q23();void q24();

void strREV(char s[]); void strNOV(char s[]); void iguaisConsecutivos(char s[]); void diffConsecutivos(char s[]);
void contaPal(char s[]); char *strCat(char *s1, char *s2); int bitsUm(unsigned int n);
int trailingZ(unsigned int n); int qDig(unsigned int n); int strLength(char str[]); int strcmp1(char s1[], char s2[]); int contaVogais(char s[]);

int main()
{
	int a;
	printf("PROBLEMA A RESOLVER:\nQuestão nº:");
	scanf("%d",&a);
	fflush(stdin);
	switch (a){//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!TODO: COMPLETAR OS QUE ESTAO EM COMENTARIO
		case 1: q1(); main();
	    case 2: q2(); main();
		case 3: q3(); main();
		case 4: q4(); main();
		case 5: q5(); main();
		case 6: q6(); main();
		case 7: q7(); main();
		case 8: q8(); main();
		case 9: q9(); main();
		//case 10: q10(); main();
		case 11: q11(); main();
		//case 12: q12(); main();
		case 13: q13(); main();
		case 14: q14(); main();
		//case 15: q15(); main();
		//case 16: q16(); main();
		case 17: q17(); main();
		case 18: q18(); main();
		//case 19: q19(); main();
		//case 20: q20(); main();
		//case 21: q21(); main();
		case 22: q22(); main();
		case 23: q23(); main();
		//case 24: q24(); main();
	    default:
	    	printf("ERRO FATAL, DELETE SYSTEM32\n");
	}
	return 0;
}

void q1()
{
	printf("Insere numeros que queres somar (0 para terminar)\n");
	int a,n = 0;
	scanf("%d", &a);
    while(a!=0){
    	n+=a;
    	scanf("%d", &a);
    }
    printf("Soma: %d\n", n);
}

void q2()
{
	printf("Insere numeros (0 para mostrar o maior deles)\n");
	int a,n = 0;
	scanf("%d", &a);
	n = a;
	 while(a!=0){
    	if (n < a){n = a;}
    	scanf("%d", &a);
    }
    printf("Maior número: %d\n", n);
}

void q3()
{
	printf("Insere numeros (0 para mostrar a media)\n");
	int a,b = 0 ,i = 0,m;
	scanf("%d", &a);
	while(a!=0){
		b += a;
		scanf("%d", &a);
		++i;
	}
	m = b/i;
	printf("Media: %d\n", m);
}

void q4()
{
	printf("Insere numeros (0 para mostrar o segundo maior numero)\n");
	int a, b, c;
	scanf("%d", &a);
	b = a;
	c = a;
	while(a!=0){
		if (a>b) {c = b; b = a;} else if (a>c){c=a;}
		scanf("%d", &a);
	}
	printf("Segundo maior numero: %d\n", c);
}

void q5()
{
	int n;
	printf("Insere um numero positivo para contar a quantidade de 1's na representaçao binaria.\n");
	scanf("%d",&n);
	printf("Numero de 1's na representaçao binaria: %d.\n", bitsUm(n));
}

int bitsUm(unsigned int n)
{
	int r=0;
	while(n!=0){
		r+=(n%2);
		n=(n/2);
	}
	return r;
}

void q6()
{
	int n;
	printf("Insere um numero positivo para contar a quantidade de 0's na representaçao binaria.\n");
	scanf("%d",&n);
	printf("Numero de 0's na representaçao binaria: %d\n", trailingZ(n)); 
}

int trailingZ(unsigned int n)
{
	int r=0;
	while(n!=0){
		if (n%2==0){r++;}
		n=n/2;
	}
	return r;
}

void q7()
{
	int n;
	printf("Insere um numero para contar os digitos.\n");
	scanf("%d",&n);
	printf("Numero de digitos: %d\n", qDig(n));
}

int qDig(unsigned int n)
{
	int r=0;
	while(n!=0){
		n/=10;
		r++;
	}
	return r;
}

void q8()
{
	char n[256];
	printf("Escreve uma string, recebe o comprimento dela.\n");
	scanf("%s",&n);
	printf("Comprimento da string: %d\n", strLength(n));
}

int strLength(char str[])
{
	int r=0;
	while(str[r]!='\0'){
		r++;
	}
	return r;
}

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!TODO : PERCEBER ESTE!!
void q9()
{
	char s1[256], s2[256];
	printf("Escreve duas strings para as juntar.\nString 1:");
	scanf("%s",&s1);
	printf("String 2:");
	scanf("%s",&s2);
	strCat(s1, s2);
	printf("Resultado: %s\n %d\n", s1, strlen(s1));
}

char *strCat(char s1[], char s2[])
{
	//char *res = (char *) malloc(strlen(s1)+strlen(s2)+1);
	int i;
	s1[(strlen(s1))] = malloc(sizeof(s1)+sizeof(s2));
	for (i = 0; s2[i]!='\0'; i++)
		s1[(strlen(s1)+i)] = s2[i];
	return s1;
}

void q11()
{
	char s1[256], s2[256];
	printf("Insere duas strings para comparar:\nString 1:");
	scanf("%s",&s1);
	printf("String 2:");
	scanf("%s",&s2);
	printf("Resultado: ");
	if(strcmp1(s1, s2)>0) printf("String 1 > String 2\n");
	if(strcmp1(s1, s2)==0) printf("String 1 = String 2\n");
	if(strcmp1(s1, s2)<0) printf("String 1 < String 2\n");
}

int strcmp1(char s1[], char s2[])
{
	int r=0,i;
	for (i = 0;r==0 && s1[i]!='\0' && s2[i]!='\0'; i++)
	{
		r += s1[i]-s2[i];
	}
	return r;
}
/*
char *strstr(char s1[], char s2[])
{
	int i, j=0;
	for (i = 0;s1[i]!='\0' && s2[j]!='\0'; i++)
	{
		if(s1[i]==s2[j]) j++;
		else j=0;
	}
	if(j==0) return NULL;
	return s1 + i;
}
*/
void q13()
{
	char s1[256];
	printf("Insere string para dares reverse:\n");
	scanf("%s",&s1);
	strREV(s1);
}

void strREV(char s[])
{
	int	i;
	char s2[strlen(s)];
	strcpy(s2,s);
	for (i = 0; s[i]!='\0'; i++)
	{
		s[i]= s2[(strlen(s)-i-1)];
	}
	printf("Toma: %s\n", s);
}

void q14()
{
	char s1[256];
	printf("Insere string para tirares vogais:\n");
	scanf("%s",&s1);
	strNOV(s1);
}

void strNOV(char s[])
{
	int i,j=0;
	for (i = 0; s[i]!='\0'; i++)
	{
		if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U');
		else {s[j] = s[i]; j++;}
	}
	s[j]='\0';
	printf("Toma: %s\n", s);
}

void q17()
{
	char s1[256];
	printf("Escreve string para contar maximo de iguais consecutivos:\n");
	scanf("%s",&s1);
	iguaisConsecutivos(s1);
}

void iguaisConsecutivos(char s[])
{
	int i, j, r=0, rr=0;
	for (i=0;s[i]!='\0';i++)
	{
		for (j=i;s[j]!='\0';j++)
		{
			if (s[j+1]==s[j] && s[j+1]!='\0') rr++;
			else break;
		}
		rr++;
		if (rr>r) r=rr; rr=0;
	}
	printf("Toma: %d\n", r);
}

void q18()
{
	char s1[256];
	printf("Escreve string para contar maximo de diferentes consecutivos:\n");
	scanf("%s",&s1);
	diffConsecutivos(s1);
}

void diffConsecutivos(char s[])
{
	int i, j, r=0, rr=0;
	for (i=0;s[i]!='\0';i++)
	{
		for (j=i;s[j]!='\0';j++)
		{
			if (s[j+1]!=s[j] && s[j+1]!='\0') rr++;
			else break;
		}
		rr++;
		if (rr>r) r=rr; rr=0;
	}
	printf("Toma: %d\n", r);
}

void q22()
{
	char s1[100];
	printf("Escreve uma string para contar as palavras:\n");
	scanf(" %[^\n]s",&s1);
	contaPal(s1);
}

void contaPal(char s[])
{
	int i, conta=0;
	for (i=0; s[i]!='\0'; i++)
	{
		if (s[i]!=' ' && s[i+1]==' ' || s[i+1]=='\0') conta++;
	}
	printf("Numero de palavras: %d\n", conta);
}

void q23()
{
	char s1[256];
	printf("Escreve uma string para contar as vogais:\n");
	scanf("%s",&s1);
	printf("Numero de vogais: %d\n", contaVogais(s1));
}

int contaVogais(char s[])
{
	int i, res=0;
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
			res++;
	}
	return res;
}
	
