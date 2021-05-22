#include <stdio.h>
#include <stdlib.h>


//    Create a Program that takes a strings from the user input and converts a the vowels into Uppercase.
//    + Print the Inputted String
//    + Print the length of the string
//    + Print the number of consonant and vowels
/*<==  ==<<<-*/

int main(){

    char str[255];  /*<== declared a string with a max of 255 characters ==<<<-*/
    int  i, vowels, consonantCounter; /*<== Counter Ints ==<<<-*/


   printf("Input a sentence: "); /*<== asks the user to enter a sentence ==<<<-*/
   gets(str);                   /*<== stores the user input to the variable named str ==<<<-*/
   system("cls");


   printf("the Inputted String: "); /*<== prints the user Input ==<<<-*/
   puts(str);                      /*<== prints the user Input ==<<<-*/
    printf("\n");                 /*<== prints the user Input ==<<<-*/

   i = 0;                   /*<== assigning values ==<<<-*/
   vowels = 0;             /*<== assigning values ==<<<-*/
   consonantCounter = 0;  /*<== assigning values ==<<<-*/


    while(str[i]!='\0') /*<== the magic ==<<<-*/
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i]=str[i]-32;
            vowels++;
        }
        if(str[i] >= 'a' || str[i] >= 'e' || str[i] >= 'i' || str[i] >= 'o' || str[i] >= 'u'){
            consonantCounter++;
        }

        i++;
    }
    printf("converted the vowels into Uppercase.: ");
    puts(str);
    printf("\n");

    printf("the length of the string: %d \n\n", i);

    printf("the number of consonant: %d \n\n", i-vowels);

    printf("the number of vowels: %d \n\n\n\n\n\n\n", i-consonantCounter);

}
