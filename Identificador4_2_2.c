/*
 * Versão 4
 * Idealizado por Gustavo Santarsieri
 * Detecção e Correção dos problemas do código Yuri Serrano
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int scanner(char[], int);

int main()
{
    int status;
    char str[11];

	setlocale(LC_ALL,"Portuguese");
    do {

        printf("Digite uma String:");
        scanf("%s", str);
        printf("\n\n");
        int tam = strlen(str);

        status = scanner(str, tam);

        if(status == 1)
            printf("Entrada Aceita\n");
        
        else
            printf("Entrada Rejeitada\n");

        printf("\nVocê quer sair ?   \n(y)\n\n ");
    } while(getch() != 'y');

    system("PAUSE");
    return 0;
}

int scanner(char str[], int tam)
{
    char c;
    int  ch;
    int pos = 0;

q0:
    c = str[pos];
    if(tam == 0)
        return 1;

    if(c ==  'a' && c == 97) {
        pos++;
        tam--;
        goto q1;
    }
    else if( c == 'b' && c == 98)
    {
    	pos++;
    	tam--;
    	goto q2;
	}
   
    else
        return 0;

q1:
    c = str[pos];
    if(tam == 0)
        return 0;

    if(c ==  'a' && c == 97) {
        pos++;
        tam--;
        goto q0;
    }
   
    else if( c == 'b' && c == 98 )
    {
    	pos++;
    	tam--;
    	goto q3;
	}
	else
        return 0;

q2:
    c = str[pos];
    if(tam == 0)
        return 1;

 	if(c ==  'a' && c == 97) {
        pos++;
        tam--;
        goto q3;
    }
   
    else if( c == 'b' && c == 98)
    {
    	pos++;
    	tam--;
    	goto q1;
	}

    else
        return 0;

q3:
    c = str[pos];
    if(tam == 0)
        return 0;
    
    if(c ==  'a' && c == 97) {
        pos++;
        tam--;
        goto q0;
    }
   
    else if( c == 'b'  && c == 98)
    {
    	pos++;
    	tam--;
    	goto q3;
	}
    
     else
        return 0;


}

