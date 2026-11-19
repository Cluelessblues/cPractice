#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	int input,i,output;
	char holding[50];
	i = 0;
	printf("%s: ", argv[1]);
	while ((input = getchar()) != '\n')
	{
		holding[i] = input;
		i++;
	}
	
	output = strcmp(holding,argv[1]);
	printf("%d,int argc: %d",output,argc);

	if (output == 0)
	{
		printf("I might be on to something\n");
	}
	return 0;	
}
