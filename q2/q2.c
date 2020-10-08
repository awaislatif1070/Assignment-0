#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define str_size 100

int main(int argc, char *argv[])
{
char str[str_size];
FILE* input;
input = fopen("q1_a.txt", "r");
		if ((input = fopen("q1_a.txt", "r")) == NULL) {
			printf("Error! opening file\n");
			exit(1);
		}
		fscanf(input, "%[^\n]", str);
		printf("Array is : %s\n\n", str);

        return 0;
}

