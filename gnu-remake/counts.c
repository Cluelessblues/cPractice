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
	
	printf("Character Count: %d\n", character);
	printf("Word Count: %d\n", wordcount);
	printf("Line Count: %d\n", linecount);
	fclose(input);

	return 0;
}

