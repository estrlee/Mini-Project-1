/******************************************************************************

Esther Lee
ELET 1102
Project 1: Bigger number
This code tells the user which number is the biggest out of 3 user entered numbers

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double firstNum;
    double secondNum;
    double thirdNum;
    
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &firstNum, &secondNum, &thirdNum);
    
    if(firstNum > secondNum && firstNum > thirdNum)
    {
        printf("%lf is the biggest number\n", firstNum);
    } 
    else if(secondNum > firstNum && secondNum > thirdNum)
    {
        printf("%lf is the biggest number\n", secondNum);
    } 
    else if(thirdNum > firstNum && thirdNum > secondNum)
    {
        printf("%lf is the biggest number\n", thirdNum);
    }

    return 0;
}