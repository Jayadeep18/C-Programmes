#include <stdio.h>

int main()
{
    int time, timeZone,flag=1;

    // Prompt the user for the time
    printf("Enter the time of day (0-23): ");
    scanf("%d", &time);
    if (time < 0 || time > 23)
    {
        printf("Invalid input. Please try again.\n");
    }
    while ((time < 0 || time > 23 ) && flag)
    {
        printf("Enter the time of day (0-23): ");
        scanf("%d", &time);
        if (time < 0 || time > 23)
        {
            printf("Invalid input. Please try again.\n");
        }
        else{
            flag=0;
        }
    }
    
    //reset flag
    flag=1;

    // Prompt the user for the time zone
    printf("Enter the time zone (1-3):\n");
    printf("choose 1 for MST,2 for CET and 3 for EAT\n");
    scanf("%d", &timeZone);
    if (timeZone < 1 || timeZone > 3)
    {
        printf("Invalid input. Please try again.\n");
    }
    while (timeZone < 1 || timeZone > 3 && flag)
    {
        printf("Enter the time zone (1-3):\n");
        printf("choose 1 for MST,2 for CET and 3 for EAT\n");
        scanf("%d", &timeZone);
        if (timeZone < 1 || timeZone > 3)
        {
            printf("Invalid input. Please try again.\n");
        }
        else{
            flag=0;   
        }
    } 

    // Calculate and print the time in GMT
    switch (timeZone)
    {
    case 1: // MST
        //MST is 7 hours behind GMT
        if (time + 7 > 23)
        {
            printf("%d:00 MST is %d:00 GMT\n", time, time + 7 - 24);
        }
        else
        {
            printf("%d:00 MST is %d:00 GMT\n", time, time + 7);
        }
        break;
    case 2: // CET
        //CET is 1 hour ahead of GMT
        if (time - 1 < 0)
        {
            printf("%d:00 CET is %d:00 GMT\n", time, 24 - time - 1);
        }
        else
        {
            printf("%d:00 CET is %d:00 GMT\n", time, time - 1);
        }
        break;
    case 3: // EAT
        //EAT is 3 hours ahead of GMT
        if (time - 3 < 0)
        {
            printf("%d:00 EAT is %d:00 GMT\n", time, 24 - time - 3);
        }
        else
        {
            printf("%d:00 EAT is %d:00 GMT\n", time, time - 3);
        }
        break;
    }
    printf("\nprogram ended");
    return 0;
}
