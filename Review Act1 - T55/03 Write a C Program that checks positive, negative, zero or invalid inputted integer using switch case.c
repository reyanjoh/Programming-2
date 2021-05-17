#include <stdio.h>
#include <stdlib.h>

int main(){
//    Write a C Program that checks positive, negative, zero or invalid inputted integer using switch case
//    Expected Output 1:
//    Input any integer: -6
//    The integer is a negative number
//    ---------------------------------------------------------
//    Expected Output 2:
//    Input any integer: 5
//    The integer is a positive number
//    ---------------------------------------------------------
//    Expected Output 3:
//    Input any integer: %6aa
//    The inputted data is Invalid

    int userInput, check;

    printf("Input any integer: ");
    check = scanf("%d", &userInput);
    if(!check){
        printf("The inputted data is Invalid.\n\n\n\n");
        return 0;
    }
    if(userInput < 0){
        printf("The integer is a negative number.\n\n\n\n");
    }else if(userInput >= 0){
        printf("The integer is a positive number.\n\n\n\n");
    }




    return 0;





















}
