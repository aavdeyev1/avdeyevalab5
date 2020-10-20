#include<stdio.h>
#include<stdlib.h>
#include"lab5.h"

int main()
{
  int theNum, choice;

  
  theNum = readPosNum();
  
  
  do
  {
    choice = menu();
    
    switch(choice)
    {
      case 1: theNum = readPosNum();
              break;
      
      case 2: oddEvenZero(theNum);
              break;

      case 3: printPrimes(theNum);
              break;
        
      case 4: printReverse(theNum);
              break;
      
      case 5: printf("Good Bye\n");         
    }// end switch
    
  }while(choice != 5);
  

  return 0;
  
}// end main
