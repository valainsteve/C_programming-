/***************************************************
* Programm zur Demonstration des Bedingungsoperators ?
****************************************************/

#include <stdio.h>

int main()
{
    int a;
    int b;
    int max;

    printf("Geben Sie a ein\n");
    scanf("%i",&a);

    printf("Geben Sie b ein\n");
    scanf("%i",&b);

    /*Konditionaler Ausdruck*/
    max= (a>b)? a:b;

    printf("Der groessere Wert ist %i", max);

    getchar();
    getchar();

    /*Die folgende if Konstruktion ist bedutungsgleich
    mit dem konditionalen Ausdruck oben*/
    if(a>b){
        max=a;
    }else{
        max=b;
    }

    /*Bedingungsoperator*/
    (a>b)?  printf("a>b\n"): printf("b>a\n");


    printf("Der groessere Wert ist %i", max);
}
