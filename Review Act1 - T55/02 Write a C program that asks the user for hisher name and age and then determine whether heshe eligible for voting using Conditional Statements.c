#include <stdio.h>
#include <stdlib.h>

int main(){
//    Write a C program that asks the user for his/her name and age and then determine whether he/she eligible for voting using Conditional Statements
//    Expected Output 1:
//    Name: Juan Dela Cruz
//    Age: 17
//    You are not eligible for voting.
//    ---------------------------------------------------------
//    Expected Output 2:
//    Name: Juan Delama
//    Age: 18
//    You are eligible for voting.
//    ----------------------------------------------------------
//    Expected Output 3:
//    Name: Juan Delama De Guzman
//    Age: abc
//    Invalid Age, Please Try Again.

        int age, check; /*<==== declaration of age and the error checker variable*/
        char name[30]; /*<==== declaration Name variable*/

        printf("Name: ");     /*<==== asks the user to input it's name*/
        scanf("%s", name);

        printf("Age: ");  /*<==== asks the user to input it's age*/
        check = scanf("%d", &age);

        if(!check){  /*<==== this will check if the age is a number or not*/
            printf("Invalid Age, Please Try Again.\n\n\n\n");/*<==== if the age input is not a number it will throw an error massage*/
            return 0;/*<==== this will end the program if age input is invalid*/
        }
        if( age < 18 ){/*<==== this will check if the user is below 18*/
            printf("You are not eligible for voting.\n\n\n\n");/*<==== this will be shown if user is below 18*/

        }else if(age >= 18){/*<==== this will check if the user's age is 18 above*/
            printf("You are eligible for voting.\n\n\n\n");/*<==== this will be shown if user is above 18*/
        }

    return 0;
}
