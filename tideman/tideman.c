#include <stdio.h>
#include <string.h>

int compareCandidates(int argc, int scores[], char* argv[]);

int main (int argc, char *argv[])
{
	char input, sinput[50];
	int track,test,voters = 0;
	int score[argc];

	for (int t = 0; t < argc; t++)
	{
		score[t] = 0;
	}

	printf("How Many voters: ");
	scanf("%d", &voters);
	getchar();
	
	

	for (int j = 0; j < voters; j++)
	{
		for (int i = 0; i < (argc - 1); i++)
		{
			printf("Rank %d: ", i+1);
			while(true)
			{	
				input = getchar();
			
				if (input == '\n')
				{
					sinput[track] = input;
					track = 0;
					break;
				}
				else
				{
					sinput[track] = input;
					track++;
				}
	
			}

			for (int k = 0; k < (argc - 1) ; k++)
      			{			
				test = ((strcmp(sinput, argv[k+1])) - 10);
				
      				if (test == 0)
				{
					score[k] = score[k] + (argc - i-1);
      					break;
				}
				else
				{
					printf("Invalid Candidate\n");
					return 1;
					i--;
					break;
				}
			}
			
		}
		printf("\n");
	}
	compareCandidates(argc,score,argv);
	return 0;
}

int compareCandidates(int argc, int scores[], char* argv[])
{
	int previous, loop;
	previous = scores[0];
	loop = 1;
	for (int i = 1; i < (argc - 1); i++)
	{
		if (scores[i] > previous)
		{
			loop = i+1;
			previous = scores[i];
      			
		}

	}
	
	printf("%s Won!\n", argv[loop]);
	return 0;
}
