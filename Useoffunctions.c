//Wap to print diff. numeral series upto a no. provided by the user, where the choice of series is made by user
#include<stdio.h>
#include<conio.h>
void odd(int o);
void even(int e);
void prime(int p);
void main()
{
    int n;
    char choice, choice2;
    test : printf("Enter your choice... \n O for odd no.s, \n E for even no.s, \n P for prime no.s :");
    scanf("%s", &choice);
    printf("Enter the no. upto which the series is to be printed : \n");
    scanf("%d", &n);
    switch (choice)
    {
    case 'E' :
    case 'e':
        even(n);
        break;
    case 'O':
    case 'o':
        odd(n);
        break;
    case 'P' :
    case 'p':
        prime(n);
        break;
    default:
        printf("Invalid Input, Press Y to choose again :");
        scanf("%s", &choice2);
        if ( choice2 == 'Y' || choice2 == 'y')
        {
            goto test;
        }
        else
            goto exit;
        break;
    }
    exit : getch();
}


void odd(int o)
{
    int j;
    for (j = 0; j <= (2 * o); j++)
    {
        if( j % 2 != 0)
        {
            printf("%d\n", j);
        }
    }
}
void even(int e)
{
    int j;
    for (j = 0; j < (2 * e); j++)
    {
        if( j % 2 == 0)
        {
            printf("%d\n", j);
        }
    }
}
void prime(int p)
{
    
}