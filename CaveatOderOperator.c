/***********************************
*Programm zur Demonstration der Risiken beim
*oder Operator
************************************/
#include <stdio.h>
int istCGroesserD(int c, int d);

int main()
{
    int a;
    int b;
    int c = 3;
    int d =2;
    printf("a eingeben:");
    scanf("%i", &a);
    fflush(stdin);

    printf("b eingeben:");
    scanf("%i", &b);
    fflush(stdin);


    /*wenn die erste Bedingung erfüllt ist, dann
    wird die zweite gar nicht mehr geprüft*/
    if( a > b || istCGroesserD(c,d))
    {
        printf("a ist goesser als b oder c ist groesser als d");

    }else {
        printf("a ist nicht goesser als b und c ist nicht groesser als d");
    }

    getchar();
    getchar();
}

/****************************
*Diese Funktion ist zu Demozwecken
*falsch implementiert
******************************/

int istCGroesserD(int c, int d){
    int ret;
    if (c>d)
    {
        ret=0;
    }
    else if(c<d)
    {
        ret=1;
    }
    else
    {
        ret=17;
    }
    return ret;
}
