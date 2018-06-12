#include<stdio.h>
#include<string.h>
#include "sort2.h"
int sort(int argc, char *argv[])
{
   char original[argc][20];
   char sorted[argc][20];
   char temp[20];
   int i;
   int j;
   for (i = 0; i < argc; i++)
      strcpy(sorted[i], argv[i]);

   for (i = 1; i < argc; i++)
   {
      for (j = 1; j < argc; j++)
      {
         if (strcmp(sorted[j - 1], sorted[j]) > 0)
         {
            strcpy(temp, sorted[j - 1]);
            strcpy(sorted[j - 1], sorted[j]);
            strcpy(sorted[j], temp);
         }
      }
   }

   for (i = 1; i < argc; i++)
      printf("%s\n", sorted[i]);
 }

