#include <stdio.h>

int number;

int input()
{
    printf("Enter the number:\n");
    scanf("%d", &number);
}

int checkEven()
{
    if (number % 2 == 0)
        return 1;
    else
        return 0;
}

/*
void findPrime()
{
    int prime;
    for (prime = 2; prime <= number; prime++)
    {
        int countDivisibleBy = 0;
        for (int dividend = 1; dividend <= prime; dividend++)
        {
            if (prime % dividend == 0)
            {
                countDivisibleBy++;
            }
        }

        if (countDivisibleBy == 2)
        {
            printf("%d \n\n", prime);
        }
    }
}*/

int checkPrime(int checkNumber)
{
    int countDivisible = 0;
    for (int count = 1; count <= checkNumber; count++)
    {
        if (checkNumber % count == 0)
        {
            countDivisible++;
        }
    }
    if (countDivisible == 2)
        return checkNumber;
    else
        return 0;
}

int findSum()
{
    if (checkEven(number))
    {
        int firstNum, secondNum;
        for (int count = 0; count <= number / 2; count++)
        {
            firstNum = count;
            secondNum = number - count;
            if (checkPrime(firstNum) && checkPrime(secondNum))
            {
                printf("%d + %d = %d \n\n", firstNum, secondNum, number);
            }
        }
    }
    else
        printf("The number is not even! \n\n");
}

int main()
{
    input();
    findSum();
    return 0;
}
