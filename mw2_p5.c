#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char answer;
  int dice1, dice2, dice3, sum;

  srand(time(NULL)); // Initialize random seed

  do {
    // Generate three random number from 0 to 19
    dice1 = rand() % 20 ; 
    dice2 = rand() % 20 ;
    dice3 = rand() % 20 ;
    sum = dice1 + dice2 + dice3;

    printf("You rolled dice three times and their results are: %d %d %d\n", dice1, dice2, dice3);
    printf("The sum of all the dices is: %d\n", sum);

    //y denotes 'Yes' , all the other characters denotes 'No'
    printf("Roll again? (y/n): ");
    scanf(" %c", &answer);
  } while (answer == 'y');
  printf("Programme ended");

  return 0;
}

