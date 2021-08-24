#include <stdio.h>
#include <stdlib.h>


int totalfunc(int math, int sci, int eng);
int averagefunc(int total);

int main()
{

//    Write a code where the user input and print 2 sets of student data in two separate files.
//
//    Data Inside file(Two Students)
//    Student Name:
//    ID Number:
//    Math Grade:
//    Science Grade:
//    English Grade:
//    Total Grade(calculate total sum of grades):
//    Grade Average(calculate the total average):

    int numOfStudents = 0, total, average;

     printf("Enter Number of Students: ");
     scanf("%d", &numOfStudents);

    FILE *files[numOfStudents];
    for (int i = 0; i < numOfStudents; i++){

        char filename[50], name[100];
        int id, math, sci, eng, total;

        sprintf(filename, "E:Student%d.txt", i+1);

        files[i] = fopen(filename, "w+");

        printf("\nName: ");
//        fgets(name, 100, stdin);
        scanf("%s", name);
//        gets(name);

        printf("\nID: ");
        scanf("%d", &id);

        printf("\nMath: ");
        scanf("%d", &math);

        printf("\nScience: ");
        scanf("%d", &sci);

        printf("\nEnglish: ");
        scanf("%d", &eng);

        printf("\n\n");

        total = totalfunc(math, sci, eng);
        average = averagefunc(total);

        fprintf(files[i], "Name: %s\n", name);
        fprintf(files[i], "ID Number: %d\n", id);
        fprintf(files[i], "Math: %d\n", math);
        fprintf(files[i], "Science: %d\n", sci);
        fprintf(files[i], "English: %d\n\n", eng);
        fprintf(files[i], "Total: %d\n", total);
        fprintf(files[i], "Average: %d\n", average);


    }
//    printf("Hello world!\n");
    return 0;
}

int totalfunc(int math, int sci, int eng){
    int total;

    return total = math + sci+ eng;
}

int averagefunc(int total){
    int average;

    return average = total/3;
}
