/******************************************************************************

Esther Lee
ELET 1102
Project 1: Restaurant seating
This code tells you who should sit at which table depending on the party size.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int total;
    
    printf("How many people are in your party? ");
    scanf("%d", &total);
    
    
    if(total == 1)
    {
        printf("Please have a seat at the bar");
    } 
    else if(total == 2)
    {
        printf("Please have a seat at the small table");
    } 
    else if(total >= 3 && total <= 4)
    {
        printf("Please have a seat at the medium table");
    } 
    else if(total >= 5 && total <= 6)
    {
        printf("Please have a seat at the large table");
    } 
    else if(total >= 7 && total <= 8)
    {
        printf("Please have a seat at the booth");
    } 
    else if(total > 8)
    {
        printf("Please wait 45 minutes or make a reservation for later on.");
    }
    

    return 0;
}

