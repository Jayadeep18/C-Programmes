#include <stdio.h>

int main()
{
  double balance1, balance2, interest1, interest2;
  int months = 0;

  // flag = 1 indiactes account1 has lower balance, flag=2 indiactes account2 has lower balance.
  // Intialising default flag=1.
  int flag = 1;
  printf("Enter initial balance for account1:");
  scanf("%lf", &balance1);
  printf("Enter monthly interest rate in percentage for account 1:");
  scanf("%lf", &interest1);

  printf("Enter initial balance for account2:");
  scanf("%lf", &balance2);
  printf("Enter monthly interest rate in percentage for account 2:");
  scanf("%lf", &interest2);
  
  //variables to store lower and higher balance and their respective interestrates.
  double lowerbalance, lowerbalInterestRate, higherbalance, higherbalanceInterestRate;

  if (balance1 < balance2)
  {
    printf("Account1 has lower balance.\n");
    lowerbalance = balance1;
    lowerbalInterestRate = interest1;
    higherbalance = balance2;
    higherbalanceInterestRate = interest2;
  }

  else if (balance1 > balance2)
  {
    flag = 2;
    printf("Account2 has lower balance.\n");
    lowerbalance = balance2;
    lowerbalInterestRate = interest2;
    higherbalance = balance1;
    higherbalanceInterestRate = interest1;
  }

  else
  {
    printf("Account1 and Account2 has same balance.\n");
    balance1 *= (1 + interest1 / 100);
    balance2 *= (1 + interest2 / 100);
    if (interest1 > interest2)
    {
      printf("It will take 1 month for Account 1 to surpass Account 2.\n");
      printf("Account 1 balance at time of surpassing: %.2lf\n", balance1);
      printf("Account 2 balance at time of surpassing: %.2lf\n", balance2);
    }
    else if(interest2 > interest1)
    {
      printf("It will take 1 month for Account 2 to surpass Account 1.\n");
      printf("Account 1 balance at time of surpassing: %.2lf\n", balance1);
      printf("Account 2 balance at time of surpassing: %.2lf\n", balance2);
    }
    else
    {
      printf("Account1 asd Account2 will never surpass eachother") ;
      return 0;
    }
  }

  if (lowerbalInterestRate <= higherbalanceInterestRate)
  {
    printf("lower balance account  can never surpass higherer balance account.\n");
    return 0;
  }

  // considering simple interest. Simple math to get the months.Adding one to get the surpassed month.
  months=floor(100*(higherbalance-lowerbalance))/((lowerbalance*lowerbalInterestRate)-(higherbalance*higherbalanceInterestRate))+1;
  
  //calculating balances after the result months.
  lowerbalance+=(lowerbalance*lowerbalInterestRate*months)/100;
  higherbalance+=(higherbalance*higherbalanceInterestRate*months)/100;

  //printing the respsective balances using flag.
  if (flag == 1)
  {
    printf("It will take %d months for Account 1 to surpass Account 2.\n", months);
    printf("Account 1 balance at time of surpassing: %.2lf\n", lowerbalance);
    printf("Account 2 balance at time of surpassing: %.2lf\n", higherbalance);
  }
  else
  {
    printf("It will take %d months for Account 2 to surpass Account 1.\n", months);
    printf("Account 1 balance at time of surpassing: %.2lf\n", higherbalance);
    printf("Account 2 balance at time of surpassing: %.2lf\n", lowerbalance);
  }

  return 0;
}
