/*
 * Versão 4
 * Yuri Serrano
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
            printf("Inteiro Reconhecido\n");
        else if(status == 2)
            printf("Operador Reconhecido\n");
        else if(status == 3)
            printf("Numero Real Reconhecido\n");
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
        return 0;

    if(c ==  '-' && c == 45) {
        pos++;
        tam--;
        goto q3;
    }
    if(c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47) {
        pos++;
        tam--;
        goto q4;
    }

    if(c == '.' && c == 46) {
        pos++;
        tam--;
        goto q1;
    }

    if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
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

    if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
        
        pos++;
        tam--;
        goto q5;
    }
   
    if(c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47 || c == '-' && c == 45 || c == '.' && c == 46) {
        pos++;
        tam--;
        goto q8;
    } else
        return 0;

q2:
    c = str[pos];
    if(tam == 0)
        return 1;

    if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
        
        pos++;
        tam--;
        goto q2;
    }
    if(c == '/' && c == 47 || c == '.' && c== 46) {
        pos++;
        tam--;
        goto q6;
    }
    if(c == '+' && c== 43|| c=='*' && c== 42||c== '-' && c== 45) {
        pos++;
        tam--;
        goto q8;
    }

    else
        return 0;

q3:
    c = str[pos];
    if(tam == 0)
        return 2;
    if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
        
        pos++;
        tam--;
        goto q2;
    }
    if(c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47 || c == '-' && c == 45 || c == '.' && c == 46) {
        pos++;
        tam--;
        goto q8;
    } else
        return 0;

q4:
    c = str[pos];
    if(tam == 0)
        return 2;
    if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57 || c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47 || c == '-' && c == 45 || c == '.' && c == 46) {
        pos++;
        tam--;
        goto q8;
    } else
        return 0;

q5:
    c = str[pos];
    if(tam == 0)
        return 3;

    if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
        
        pos++;
        tam--;
        goto q5;
    }
    if(c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47 || c == '-' && c == 45 || c == '.' && c == 46) {
        pos++;
        tam--;
        goto q8;
    }

    else
        return 0;

q6:
    c = str[pos];
    if(tam == 0)
        return 0;

   if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
        
        pos++;
        tam--;
        goto q7;
    }
    if(c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47 || c == '-' && c == 45 || c == '.' && c == 46) {
        pos++;
        tam--;
        goto q8;
    }

    else
        return 0;

q7:
    c = str[pos];
    if(tam == 0)
        return 3;
        
if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
        
        pos++;
        tam--;
        goto q7;
    }
    if(c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47 || c == '-' && c == 45 || c == '.' && c == 46) {
        pos++;
        tam--;
        goto q8;
    }

    else
        return 0;

q8:
    c = str[pos];
    if(tam == 0)
        return 0;

    if(c == '0' && c == 48 || c == '1' && c == 49 || c == '2' && c == 50 || c == '3' && c== 51 || c == '4' && c == 52 || c == '5' && c == 53 || c == '6'  && c == 54|| c == '7' && c == 55 || c == '8' && c == 56 || c == '9' && c == 57) {
        
        pos++;
        tam--;
        goto q8;
    }
   if(c == '+' && c == 43 || c == '*' && c == 42 || c == '/' && c == 47 || c == '-' && c == 45 || c == '.' && c == 46) {
        pos++;
        tam--;
        goto q8;
    }

    else
        return 0;
}

