#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  char ch;
  int pos = 0, i = 0, maxfrequency = 0, ti = 0;
  int equalfrequency[27];
  int frequency[27];
   
  memset(frequency, 0, sizeof(frequency));
  memset(frequency, 0, sizeof(equalfrequency));
  
FILE *fp;
    fp = fopen("test.txt", "r");
   
    if (fp == NULL)
    {
        printf("File is not available \n");
    }
    else
    {
  while ((ch = fgetc(fp)) != EOF)
  {
    if (ch == '\n')
      break;
    if (ch >= 'a' && ch <= 'z')
      
      pos = ch - 'a';
    else if (ch >= 'A' && ch <= 'Z')
      
      pos = ch - 'A';
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
      frequency[pos] += 1;
  }
  maxfrequency = 0;
  for (i = 0; i<26; i++)
  {
    
    if (frequency[i] > 0)
    if (maxfrequency < frequency[i])
    {
      pos = i;
      maxfrequency = frequency[i];
      ti = 0;
    }
    if (maxfrequency == frequency[i])
    {
     
      equalfrequency[ti] = i;
      ti++;
    }
  }
  printf("The most frequent letter is ");
  for (i = 0; i<ti; i++)
  
    printf("'%c'", equalfrequency[i] + 'a' );
    printf(". It appeared %d times.\n", maxfrequency);
    }
   
   fclose(fp);
    return 0;  
}

