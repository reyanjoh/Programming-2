#include <stdio.h>
#include <stdlib.h>

int main(){
//    Write a program that tells the user to input an integer and then outputs the number with the digits reversed using Iterative Looping.
//    Expected Output 1:
//    Input any integer: 12345
//    Revised for 12345 is 54321
//    ---------------------------------------------------------
//    Expected Output 2:
//    Input any integer: 6789123
//    Revised for 6789123 is 3219876
//    ---------------------------------------------------------
//    Expected Output 3:
//    Input any integer: ssa2
//    The inputted data is Invalid


    int UserInput, remainder, holder, check, reverse = 0; /*<=== the declaration of all variables including the error checker*/

    printf("Input any integer: ");      /*<=== asks the user to enter any positive number*/
    check = scanf("%d", &UserInput);

    if(!check){ /*<=== checks if the user input is a valid number*/
        printf("The inputted data is Invalid\n\n\n\n"); /*<=== prompts if the user input is not a valid number*/
        return 0;/*<=== ends the program*/
    }
    if(UserInput < 0){ /*<=== checks if the user input is a positive number*/
        printf("Please enter a positive number. . .\n\n\n\n"); /*<=== prompts if the user input is not a positive number*/
        return 0;/*<=== ends the program*/
    }


    holder = UserInput; /*<=== stores the user input to a holder variable for later use*/

    while (UserInput > 0) /*<=== this will repeat the process up until it met a certain condition*/
    {
        remainder = UserInput % 10;          /*==============================================================================*/
        reverse = reverse * 10 + remainder; /*<|====this will do the magic to get the reverse of the user input=======<<<<- */
        UserInput /= 10;                   /*==============================================================================*/
    }

    printf("Revised for %d is %d\n\n\n\n", holder, reverse); /*<=== this will show the user the result*/

    return 0;





















}
