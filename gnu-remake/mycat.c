#include <stdio.h>
#define FIRSTLINE 1
// small remake of the cat programme where the input file
// is output to the shell

int main(int argc, char *argv[])
{
	int charRead,linecount;

	// opens the file stream
	FILE* inputfile = fopen(argv[1],"r");
	
	
	linecount = FIRSTLINE;

	printf("%d. ",linecount);

	while ((charRead = fgetc(inputfile))  !=EOF)
	{
		if (charRead == '\n')
		{
			putchar(charRead);
			linecount++;
			printf("%d. ", linecount);
			continue;
		}
		putchar(charRead);
	}
	//close the file
	fclose(inputfile);

	return 0;
}
