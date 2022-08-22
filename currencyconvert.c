#include<stdio.h>
#include<stdio.h>

float check(char choice1,char choice2);

main()
{
    float result;
    float currency;
    char choice1,choice2;
    printf("\n\t\t         CURENCY CONVERTER");
    printf("\n\n\n");
    printf("\n\t\t Currency conversion available are:");
    printf("\n\t\t        A . NEPALI RUPEES");
    printf("\n\t\t        B . AMERICAN DOLLAR");
    printf("\n\t\t        C . EURO");
    printf("\n\t\t        D . POUND");
    printf("\n\t\t PRESS the Alphabets to choose option!.");
    printf("\n\t\t     To be converted from: ");
    choice1=toupper(getch());
    putch(choice1);
    printf("\n\t\t     To be converted to: ");
    choice2=toupper(getch());
    putch(choice2);
    printf("\n\t\tENTER the amount You want to convert :: ");
    scanf("%f",&currency);
    result = check(choice1,choice2);
    if(result == 0.00)
    {
        printf("\n\n\n\t\t\t INVALID INPUT!");
    }
    else{

         printf("\n\n\n\t\t\t %c : %f = %c : %f",choice1,currency,choice2,currency*result);
    }



}



float check(char choice1,char choice2)
{
    if(choice1 == 'A' && choice2 == 'B')
    {
        return 0.0078;
    }
    if(choice1 == 'A' && choice2 == 'C')
    {
        return 0.0078;
    }
    if(choice1 == 'A' && choice2 == 'D')
    {
        return 0.0066;
    }
    if(choice1 == 'B' && choice2 == 'A')
    {
        return 128.00;
    }
    if(choice1 == 'B' && choice2 == 'C')
    {
        return 1.00;
    }
    if(choice1 == 'B' && choice2 == 'D')
    {
        return 0.85;
    }
    if(choice1 == 'C' && choice2 == 'A')
    {
        return 128.00;
    }
    if(choice1 == 'C' && choice2 == 'B')
    {
        return 1.00;
    }
    if(choice1 == 'C' && choice2 == 'D')
    {
        return 0.85;
    }
    if(choice1 == 'D' && choice2 == 'A')
    {
        return 151.10;
    }
    if(choice1 == 'D' && choice2 == 'B')
    {
        return 1.18;
    }
    if(choice1 == 'D' && choice2 == 'C')
    {
        return 1.18;
    }
    else{

    return 0.00;
    }
}

