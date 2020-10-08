#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define str_size 100

int main(int argc, char* argv[])
{
	char str[str_size];
	FILE* input;
	if (*argv[1] == 'a')
	{
		input = fopen("q3_a.txt", "r");
		if ((input = fopen("q3_a.txt", "r")) == NULL)
		{
			printf("Error! opening file\n");
			exit(1);
		}
	}
	if (*argv[1] == 'b')
	{
		input = fopen("q3_b.txt", "r");
		if ((input = fopen("q3_b.txt", "r")) == NULL)
		{
			printf("Error! opening file\n");
			exit(1);
		}
	}
	fscanf(input, "%[^\n]", str);
	printf("Array is : %s\n\n", str);

	int count = 0,i = 0,j = 0,a = 0,b = 0,k = 0;
	char temp;

	while (str[i] != '\0')
	{
		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
		{
			j = i;
			while (str[j] != '\0')
			{
				if (str[j] == ' ')
				{
					break;
				}
				j++;
			}
			b = j-1 ;
			count = (b - a) + 1;
			for (k = 0; k < (count / 2); k++)
			{
				temp = str[a];
				str[a] = str[b];
				str[b] = temp;
				a++; b--;
			}
			a = j + 1;
			i = j;
		}
		i++;
	}

	printf("New Array is : %s\n\n", str);
	return 0;
}
