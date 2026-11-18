#include <stdio.h>

int main()
{
	char data[50];

	FILE *points = fopen("text.txt","r");
	
	if (points != NULL){
		printf("The file was found\n");
		printf("The address for the pointer : %p\n",points);
		printf("Maybe this works: %d\n", *points);
	}

	while ((ch = fgets(points) != EOF))
	{


	return 0;
}
