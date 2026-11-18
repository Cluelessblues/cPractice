#include <stdio.h>

// copy input to output

int main(int argc, char *argv[])
{
	FILE* fp = fopen(argv[1],"r");
	
	int ch,linec;
	
	linec = 1;

	printf("%d. ",linec);

	while ((ch = fgetc(fp))  !=EOF)
	{
		if (ch == '\n')
		{
			putchar(ch);
			linec++;
			printf("%d. ", linec);
			continue;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;
}
