#include "lab5.h"

int readPosNum()
{
    int theNum;

    printf("Enter a non-negative integer: ");
    scanf("%d", &theNum);
    while(theNum < 1)
    {
        printf("%s not allowed\n", theNum < 0 ? "Negative numbers are" : "Zero is");
        printf("Enter a non-negative integer: ");
        scanf("%d", &theNum);

    }

    return theNum;
}

int menu()
{
    int choice = 1;
    do
    {
        if(choice < 1 || choice > 5)
            printf("\nYou entered an invalid menu choice.");
            
        printf("\nThe menu choices are\n1. Enter a new number\n2. Print the number of odd digits, even digits and zeros in the integer\n3. Print the prime numbers between 2 and the integer (inclusive)\n4. Print the number in reverse order\n5. Quit the program\nChoose: ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 5);

    return choice;
}

void oddEvenZero(int theNum)
{
    int odds = 0; int evens = 0; int zeros = 0;
    while(theNum > 0)
    {
        int check = theNum % 10;
        theNum = theNum / 10;
        //printf("%d\n", theNum);
        if(check == 0)
            zeros++;
        else if ((check % 2) == 0)
            evens++;
        else
            odds++;

    }
    printf("zeros: %d, evens: %d, odds: %d\n", zeros, evens, odds);

}

void printPrimes(int theNum)
{
    printf("Prime number%s between 2 and the integer: ", theNum == 2 ? "" : "s");
    int counter = 2;
    while(counter < theNum + 1)
    {
        if((counter % 2 != 0 && counter % 3 != 0 && counter % 5 != 0 && counter % 7 != 0 && counter % 11 != 0) || counter == 2 || counter == 3 || counter == 5 || counter == 7 || counter == 11)
            printf("%d  ", counter);

        counter++;
        
    }
    printf("\n");
}


void printReverse(int theNum)
{
    printf("The Reversed Integer: ");
    int digit;
    while(theNum > 0)
    {
        digit = theNum % 10;
        theNum = theNum / 10;
        printf("%d", digit);
    
    }

    printf("\n");
}