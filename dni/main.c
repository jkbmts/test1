#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj numer dnia tygodnia\n");
    scanf("%d", &a);
    switch (a) {
     case 1:
        printf("Pon\n");
        break;
     case 2:
        printf("Wt\n");
        break;
     case 3:
        printf("Sr\n");
        break;
     case 4:
        printf("Czw\n");
        break;
     case 5:
        printf("Pt\n");
        break;
     case 6:
        printf("Sb\n");
        break;
     case 7:
        printf("Ndz\n");
        break;
     default:
        printf("Error\n");
        break;
    }
    return 0;
}
