#include <stdio.h>
#include <stdlib.h>


//    [Write a program that append multiple lines in a text file]
//
//    + User must input how many lines to be append
//    + if the text file doesn't exist, the program will create the text file
//
//    [Example Test Case]
//    *INPUT*
//    Input the file location: C:\text.txt
//    Input how many lines to be appended: 5
//    BSIT
//    EMC
/*<==  ==<<<-*/


void append(int counter,int numberOflines){

    char input[255];

    while( counter < numberOflines ){
        printf("Enter a string for line %d: ", counter+1);
        scanf("%s", input); /*<== this will take the user input and store it to a variable for reusability ==<<<-*/

                              /*V== Change C to A, B, D, E, or F if the text file doesnt exist after some few tries ==<<<-*/
        FILE *file = fopen("C:\\text.txt", "a"); /*<== the keyword "a" means append, it will automatically create a new file if file doesnt exist ==<<<-*/

        fputs(input, file); /*<== this will append the user input stored to a variable to the text file ==<<<-*/
        fputs("\n", file); /*<== this will create a new line ==<<<-*/

        fclose(file);     /*<== this will close the file ==<<<-*/
        counter++;
    }
}

int main(){
////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////JUST WARNINGS////////////////////////////////////////////////
    system("color E");                                                                          ////
    printf("WARNING!!!: most computer needs permission to access disk C. . . \n");              ////
    printf("If this doesnt work, please change file location to a different diskkk. . .\n\n");  //// /*<== this will warn the user for possible errors at the start of the program ==<<<-*/
    system("pause");                                                                            ////
    system("color f");                                                                          ////
    system("cls");                                                                              ////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

    int counter = 0, check, numberOflines;

    printf("Input how many lines to be appended: "); /*<== this will be promped to ask the user if how many lines to add ==<<<-*/
    check = scanf("%d", &numberOflines);

    if(!check){
        printf("\nPlease Enter a number. . .\n\n\n\n");
        return 0;
    }

    append(counter, numberOflines); /*<== function for reusability ==<<<-*/

    printf("\ncheck text file to the given location. . .\n\n\n\n");

  	return 0;

}






























