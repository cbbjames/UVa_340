#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

int main()
{
	int n;
	
	while ((scanf("%d", &n)) == 1 && n)
	{
		int ans[64];
		//ans = malloc(n*sizeof(int));
		int guess[64];
		//guess= malloc(n*sizeof(int));
		for (int i = 0; i < n; i++)
			scanf("%d", &ans[i]);

		int set = 1;
		printf("Game %d:\n", set);
		while (1)
		{
			int A=0, B=0;
			for (int i = 0; i < n; i++)
				scanf("%d", &guess[i]);
			if (guess[0] == 0)
				break;
			
			for (int i = 1; i < 10; i++)
			{
				int c1 = 0, c2 = 0;
				for (int j = 0; j < n; j++)
				{
					if (i == guess[j])
						c1++;
					if (i == ans[j])
						c2++;
				}
				if (c1 > c2)
					B += c2;
				else
					B += c1;
			}
			for (int i = 0; i < n; i++)
			{
				if (ans[i] == guess[i])
					A++;
			}
			//print ans
			
			printf("	(%d,%d)\n", A, B-A );
	
		}
		set++;
	}
	return 0;
}