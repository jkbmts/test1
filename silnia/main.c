#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int suma = 1;
    char text[20];
    printf("Silnia z jakiej liczby naturalnej?\n");
    scanf("%d", &a);
    if(a==0) {
        sprintf(text, "%d", suma);
        printf(text);
    }
    else {
        for (int i=1; i<=a; i++)
        {
            suma*=i;
        }
        sprintf(text, "%d", suma);
        printf(text);
    }
    return 0;
}
