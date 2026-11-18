#include <stdio.h>

int main(int argc, char *argv[])
{
	int wordcount, linecount, character,in, i = 0;

	FILE *input = fopen(argv[1],"r");

	if (input == NULL)
	{
		printf("File does not exist\n");
		return 1;
	}

	while ((in = fgetc(input)) != EOF)
	{
		++character;

		if (in == ' ' || in == '\t')
		{
			wordcount++;
		}
		else if ( in == '\n')
		{
			linecount++;
		}
	}
	
	printf("Character Count: ");
	for (i = 0; i < character;i++)
	{
		printf("|");
	}

	printf("\n");

	printf("Word Count: ");
	for (i = 0; i < wordcount; i++)
	{
		printf("|");
	}
	printf("\n");

	printf("Line Count: ");
	for (i = 0; i < linecount; i++)
	{
		printf("|");
	}
	printf("\n");

	return 0;
}

