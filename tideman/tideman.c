#include <stdio.h>
#include <string.h>

int compareCandidates(int argc, int scores[], char* argv[]);

int main (int argc, char *argv[])
{
	char input, sinput[50];
	int track,test = 0;
	int score[argc];

	for (int t = 0; t < argc; t++)
	{
		score[t] = 0;
	}

	//for (int j = 0; j < 3; j++)
	//{
		for (int i = 0; i < (argc - 1); i++)
		{
			printf("%d. ", i+1);
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
			}
			
		}
	//}

//	for (int l = 0; l < (argc -1); l++)
//	{
//		printf("%s score: %d\n",argv[l+1],score[l]);
//	}

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
	
	printf("%s wins!!\n", argv[loop]);
	return 0;
}
