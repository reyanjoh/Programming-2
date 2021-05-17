#include <stdio.h>
#include <stdlib.h>


//        Create a C program that calculate the average of students grades(five subjects)
//        + Separate tasks with functions
//        + First function for adding all grades
//        + Second function for calculating average the grades
//        + Upload Your Source Code to your GitHub Repo (Tutorials on the C Functions Slides)
//



/*===============declared a function that adds all 5 grades==============*/
int addGrades(int first, int second, int third, int fourth, int fifth){                                     /*=======================================================*/
    int total = first + second + third + fourth + fifth;                                                   /*=======================================================*/
                                                                                                          /*==This is the magic function that adds all the grades==*/
    return total;   /*<==this returns or sendback the value of the variable named total*/                /*=======================================================*/
}                                                                                                       /*=======================================================*/

/*===============declared a function that calculates the average of 5 grades==============*/
int average(int total){
    int averageGrade = total/5;  /*<=== this calculates the average of 5 grades  ===<<<<<-*/
                                /*and stores it to an integer variable named averageGrade*/
    return averageGrade; /*<==this returns or sendback the value of the variable named averageGrade*/
}

/*================The Main function, the program will not start without it===================*/
int main(){

    int check, firstSubGrade, secondSubGrade, thirdSubGrade, fourthSubGrade, fifthSubGrade;/*<=== declaration if all integer variables including the error checker ===<<<- */
                /* <===  ===<<<- */
    printf("Enter five subjects grade: \n"); /* <=== asks the user to enter 5 grades ===<<<- */
    check = scanf("%d %d %d %d %d", &firstSubGrade, &secondSubGrade, &thirdSubGrade, &fourthSubGrade, &fifthSubGrade);

    if(!check){     /* <=== checks the user's Input if it is ineger/valid ===<<<- */
        printf("invalid Input. . . \n\n\n\n");/* <=== throw an error message ===<<<- */
        return 0;/* <=== ends the program if not valid ===<<<- */
    }

//    totalGrade = addGrades(firstSubGrade, secondSubGrade, thirdSubGrade, fourthSubGrade, fifthSubGrade);

    printf("Average Grade: %d", average(addGrades(firstSubGrade, secondSubGrade, thirdSubGrade, fourthSubGrade, fifthSubGrade)));/* <=== this passes all the parameter for all the functions and print its result ===<<<- */

//    printf("%d", totalGrade);

//    avs = average(addGrades)
//    printf("average %d", avs);

    return 0;





}
