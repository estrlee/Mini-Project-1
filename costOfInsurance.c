/******************************************************************************

Esther Lee
ELET 1102
Project 1: Cost of insurance
This code tells the user which number their cost of insurance depending on 
their age.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char driveRecord[5];
    
    printf("What is your age? ");
    scanf("%d", &age);
    
    if(age < 25)
    {
        printf("Your yearly insurance cost is $5000 a year\n");
    } 
    else if(age >= 25 && age < 35)
    {
        printf("Do you have a good driving record? (Y/N) ");
        scanf("%s", driveRecord);
        
        if(strcmp(driveRecord, "y") == 0)
        {
            printf("You get a 2%% discount.\nYour insuance cost is $3430 a year");
            
        }
        else 
        {
            printf("Your insurance cost is $3500 a year");
        }
    }
    else if(age >= 35 && age <= 50)
    {
        printf("Your insurance is $2800 a year");
    } else
    {
        printf("Your insurance is $1500 a year");
    }

    return 0;
}
