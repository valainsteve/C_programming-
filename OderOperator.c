
int main()
{
    int a, b, c, d;
    printf("Bitte geben Sie a ein.\n");
    scanf("%i", &a);

    printf("Bitte geben Sie b ein.\n");
    scanf("%i", &b);

    printf("Bitte geben Sie c ein.\n");
    scanf("%i", &c);

    printf("Bitte geben Sie d ein.\n");
    scanf("%i", &d);

    if((a>b)|| (c>d))
    {
        printf("Die erste Zahl ist groesser als die zweite\n");
        printf("oder die dritte Zahl ist groesser als die vierte\n");
    }
    return 0;

}
