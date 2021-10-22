#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Liczba parzysta czy nieparzysta?\n");
    printf("Liczba naturalna a = ");
    scanf("%d", &a);
    if (a%2==0){
        printf("Liczba parzysta");
    }
    else {
        printf("Liczba nieparzysta");
    }
    return 0;
}
