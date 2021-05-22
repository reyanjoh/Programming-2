#include <stdio.h>
#include <stdlib.h>


//    Create Program that adds all the array elements and prints the sum, using recursion
//
//    + Array size limit is 5 to 10 only.
//    + The user must input the array size
//    + The user must input the elements.

/*<==  ==<<<-*/

int i = 0, check, arrSize, result = 0; /*<== global variables Declarations ==<<<-*/

int userInput(int res){             /*<== the function that makes all the magic ==<<<-*/
    int arr[arrSize];              /*<== local variable array ==<<<-*/
    if( i < arrSize ){
        printf("element %d: ", i+1);  /*<== this will ask the user for an input each iteration ==<<<-*/
        scanf("%d", &arr[i]);
        result += arr[i];
        i++;
        userInput(result);          /*<== this calls the functions itself ==<<<-*/
    }
//        else if( i == arrSize ){             \
//        for( j <= arrSize; j++; ){            \
//            result += arr[j];                  \
//        }                                       * Zombies
//    }                                          /
//    printf("test1 %d", result);           /
//    printf("test2 %d \n", arr[3]);       /

    return result;
}

int main(){

        printf("size of array: ");      /*<== this asks the user for the array size ==<<<-*/
        check = scanf("%d", &arrSize);
        if(!check) {                   /*<== this checks if the inputed value is a number and valid ==<<<-*/
                printf("Invalid Input\n\n\n\n");
                return 0;
        }

        if( arrSize < 5 || arrSize > 10 ){
            printf("Array size should be 5 to 10 only\n\n\n");
            return 0;
        }

        result = userInput(result);
        printf("sum of all array elements :%d", result);

    return 0;







}
