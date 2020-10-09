#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
   int number;
   char rollnum[100];
   char name[100];  
   char email[100];
   Student()
   {   }
   void insert(FILE* ptr)
   {
     printf(" Enter Your Name " );
     fgets(name,100,stdin);  
      printf(" Enter Your Roll number " );
      fgets(rollnum,100,stdin);
      printf(" Enter Your Email " );
     fgets(email,100,stdin);
     number=0;
     fputs(number,ptr);
     fprintf(ptr,"Name: %s\t\t",name);
     fprintf(ptr,"ROLLNUM: %s\t\t",rollnum);
     fprintf(ptr,"EMAIL: %s\t\n",email);
      number++;
   }
};
int main()
{
   FILE *ptr;
   ptr=fopen("help2.txt","a+");
   Student obj;
   printf(" Enter DATA " );
   obj.insert(ptr);
   int i=2;
             while(i>0)
        {
           obj.insert(ptr);
           i--;
        }
   return 0;
}
