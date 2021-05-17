#include <stdio.h>
#include <stdlib.h>

int main()
{
//    Write a program ask the user two integers then add, multiple, divide and subtract them
//    Expected Output 1:
//    Input any 2 integer: 16 4
//    ADD = 20
//    MUL = 64
//    DIV = 4
//    SUB =  12
//    ---------------------------------------------------------
//    Expected Output 2:
//    Input any 2 integer: 15 10
//    ADD = 25
//    MUL = 150
//    DIV = 1.5
//    SUB =  5

        int firstInput, secondInput, check; /*<==== declaration variables*/

        printf("Input any 2 integer: ");/*<==== asks user to enter 2 numbers*/
        check = scanf("%d %d", &firstInput, &secondInput); /*<==== this will take 2 inputs*/
        if(!check){	/*<==== this will check if the take 2 inputs are numbers*/
            system("color C");
            system("cls");
            return printf("Invalid input \n\n\n");/*<==== an error message if the 2 inputs are not numbers**/
        }

        system("cls");
        printf("ADD = %d\n", firstInput + secondInput); /*<==== this will add the 2 inputs and prompt it to the user*/
        printf("MUL = %d\n", firstInput * secondInput); /*<==== this will multiply the 2 inputs and prompt it to the user*/
        printf("DIV = %d\n", firstInput / secondInput); /*<==== this will divide the 2 inputs and prompt it to the user*/
        printf("SUB = %d\n\n\n", firstInput - secondInput); /*<==== this will subtract the 2 inputs and prompt it to the user*/


    return 0;
}
