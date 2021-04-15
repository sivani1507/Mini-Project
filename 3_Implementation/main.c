#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "proto.h"

int main()
{
     int ch;
     printf("************************\n");
     printf("WELCOME TO ADVANCED CALCULATOR\n");
     printf("1. ADIITION\n");
     printf("2. SUBTRACTION\n");
     printf("3. MULTIPLICATION\n");
     printf("4. DIVISION\n");
     printf("5. MODULUS\n");
     printf("6. POWER\n");
     printf("7. FACTORIAL\n");
     printf("8. DRAW NUMBERS\n");
     printf("9. DRAW PYRAMID\n");
     printf("10. QUIT\n");
     printf("************************\n");
     printf("ENTER YOUR CHOICE : \n");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1: addition();
                break;
        case 2: subtraction();
                break;
        case 3: multiplication();
                break;
        case 4: division();
                break;
        case 5: modulus();
                break;
        case 6: power();
                break;
        case 7: factorial();
                break;
        case 8: drawn();
                break;
        case 9: drawa();
                break;
        case 10: printf("You have quit the calculator operation");
                break;
        default: printf("Invalid Operation");
                 break;
        
     } 
}
