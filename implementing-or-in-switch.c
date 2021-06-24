//Writing a program to demonstrate how one can implement mutiple conditions in a switch case
// Anshul, 24/6/21
#include<stdio.h>  //3 & 4 includes stdio.h & conio.h, stdio.h is the library file used for printf 
#include<conio.h>  //and scanf Functions conio.h is the library file used for getch function.

void main()
{
    char choice, choice2;
    start : printf("Please Enter your choice.. \n1.Press F for success,\n2. Press S for failure : \n");
    scanf("%s", &choice);
    switch (choice)   //switch let's the program operate differently according to the input provided by the user
    {
        case 'f' :    //Here if the user inputs 'f' this case is choosed.. & leaving it empty automatically passes
        case 'F' :    //the control to next case i.e case 'F' hence mutiple test condition lead to same result..
                 printf("You are here no matter you pressed 'f' (or) 'F'");
                 break;
        case 's' :
                 printf("This one was case sensitive.. you pressed 's'");
                 break;
        case 'S' :
                 printf("This one was case sensitive.. you pressed 'S'");
                 break;
        default :
                 break;
    }
    printf("\n Invalid input, Press Y to try again.. : ");
                 scanf("%s", &choice2);
                 if (choice2 == 'y' || choice2 == 'Y')  //As we can see mutiple test condition in "if" can simply be
                 {                                      //obtained by using "||" i.e or operator.
                    goto start;
                 }
    getch();
}