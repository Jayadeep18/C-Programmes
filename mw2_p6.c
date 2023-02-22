#include <stdio.h>
#include <math.h>

int main()
{
    int num, num_copy, count = 0, digit, expanded_form = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num_copy = num;
    if(num_copy<0){
        num_copy*=-1;
    }

    while (num_copy > 0)
    {
        count++;
        num_copy /= 10;
    }

    printf("The expanded form of %d is: ", num);

    if (num == 0)
    {
        printf("%d x 10^%d  ", 0, 0);
        return 0;
    }

    else
    {
        while (count > 0)
        {
            if (count == 1)
            {
                //pow refers to function calculating power of a number
                digit = num / (int)pow(10, count - 1);
                expanded_form = digit * (int)pow(10, count - 1);
                printf("%d x 10^%d  ", digit, count - 1);
                num = num - expanded_form;
            }
            else
            {
                digit = num / (int)pow(10, count - 1);
                expanded_form = digit * (int)pow(10, count - 1);
                printf("%d x 10^%d + ", digit, count - 1);
                num = num - expanded_form;
            }
            count--;
        }
    }
    printf("\nProgram ended successfully.\n");

    return 0;
}
