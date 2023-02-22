#include <stdio.h>
#include <math.h>

int main()
{
    //flag=1 refers user is active, flag=0 refers user wants to end program
    int number, count = 0,flag=1;

    while (flag)
    {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        if(number == 0){
            flag=0;
        }
        else
        {
            printf("Binary representation: ");
            while (pow(2, count) <= number)
            {
                count++;
            }

            count--;

            while (count >= 0)
            {
                if (number >= pow(2, count))
                {
                    printf("1");
                    number -= pow(2, count);
                }
                else
                {
                    printf("0");
                }
                count--;
            }
        }
        printf("\n");
    }

    printf("Program ended successfully.\n");

    return 0;
}
