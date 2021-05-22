#include <stdio.h>
#include <stdlib.h>


//    Create a program that reverse the word order on the inputted data from the user.
//    + Create a video explaining your code (record your running code and narrate it with your voice)
//    + upload the code also

int main(){

    char str[100];
  	int i, j, holder, start, last;

  	printf("Enter any String: ");
  	gets(str);

  	holder = strlen(str);
  	last = holder - 1;

  	printf("Reverse ordered words\n");
  	for(i = holder - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				start = 0;
			}
			else
			{
				start = i + 1;
			}
			for(j = start; j <= last; j++)
			{
				printf("%c", str[j]);
			}
			last = i - 1;
			printf(" ");
		}
	}
    printf("\n\n\n\n");
  	return 0;

}
