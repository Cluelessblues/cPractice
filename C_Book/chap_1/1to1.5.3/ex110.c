#include <stdio.h>
//create a program that replaces each tab, backspace and
//backlash with their visual reprensentation

int main()
{
	int ch;
	while ((ch=getchar()) != EOF)
	{
		if (ch == '\t')
		{
			putchar('\\');
			putchar('t');
			continue;
		}
		if (ch == '\b')
		{
			putchar('\\');
			putchar('b');
			continue;
		}
		putchar(ch);
	}
	
}
