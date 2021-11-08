
#include <stdio.h>

int main(){

    int x = 1;
    int y = 2;
    int z = 3;

    if(x==3 || y == 5 && z == 3)
    {
        printf("wahr in Fall 1\n");
    }

    if(x==1 || y == 5 && z == 3)
    {
        printf("wahr in Fall2\n");
    }

    getchar();
    getchar();

    return 0;

}
