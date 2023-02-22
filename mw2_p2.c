#include <stdio.h>
#include <ctype.h>
int main()
{
    int n, count, flag = 1;
    char choose;

    while (flag)
    {

        printf("Enter a number to evaluate factors:");
        scanf("%d", &n);

        printf("\nThe positive factors are :");
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                printf("%d, ", i);
        }
        printf("\nThe negative factors are :");
        for (int i = -1; i >= -n; i--)
        {
            if (n % i == 0)
                printf(" %-d, ", i);
        }

        printf("\nDo you want to type another number? (y/n): ");
        scanf(" %c", &choose);
        if (choose == 'n' || choose=='N')
        {
            flag = 0;
        }
        while (choose != 'y' && choose != 'n' && choose != 'Y' && choose != 'N')
        {
            printf("\nInvalid character,please enter again");
            printf("\nDo you want to type another number? (y/n): ");
            scanf(" %c", &choose);
        }
    }
    printf("\nprogram ended");
    return 0;
}