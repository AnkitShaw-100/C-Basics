//Switch case program - 1
#include<stdio.h>

void main()
{
    int ch;
    printf("Enter any number between 1 and 7 : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Sunday");
        break;

        case 2:
        printf("Monday");
        break;
        
        case 3:
        printf("Tuesday");
        break;
        
        case 4:
        printf("Wednesday");
        break;
        
        case 5:
        printf("Thursday");
        break;
        
        case 6:
        printf("Friday");
        break;
        
        case 7:
        printf("Saturday");
        break;
    }
}
