#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void affiche0 (int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf ("*");
    }
    printf ("\n");
}
void affiche1 (int n)
{
    if (n>0)
    {
        affiche1 (n-1);
    }
     affiche0 (n);
}

int main()
{
    int n;
    scanf ("%d",&n);
    affiche1 (n);
    return 0;
}