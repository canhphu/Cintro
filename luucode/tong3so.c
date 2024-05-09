#include<stdio.h>
#include<stdlib.h>


int main(int argc, char* argv[])
{
   int n,i;
  
   if (argc != 3)
   {
       printf("Wrong number of arguments___!");
       printf("Correct syntax: rect<width><height>\n");
       return 1;
   }


  
   n = atof(argv[2]);
   for(i=0;i<n;i++)
   {
   printf("%s",argv[1]);
   }
}