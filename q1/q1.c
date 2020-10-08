#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define str_size 100

int main(int argc, char *argv[])
{
char str[str_size];
FILE* input;
if(*argv[1]=='a')
{
input = fopen("q1_a.txt", "r");
		if ((input = fopen("q1_a.txt", "r")) == NULL) {
			printf("Error! opening file\n");
			exit(1);
		}
}
if(*argv[1]=='b')
{
input = fopen("q1_b.txt", "r");
		if ((input = fopen("q1_b.txt", "r")) == NULL) {
			printf("Error! opening file\n");
			exit(1);
		}
}
		fscanf(input, "%[^\n]", str);
		printf("Array is : %s\n\n", str);

        int count = 0,i=0;
        
        while (str[i] != '\0')
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= '0' && str[i] <= '9'))
            {
                count++;
            }
            i++;
        }
        printf("Total number of alphabets and digits are : %d\n\n",count);
        return 0;
}

