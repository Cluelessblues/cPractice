#include <stdio.h>

int main(void){
	int ch, bc;
	
	bc = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ')
		{
			++bc;
			if (bc > 1)
			{
				continue;
			}
			
		}
		putchar(ch);
	}
	return 0;

}
