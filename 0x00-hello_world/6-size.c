#include <stdio.h>

void trim(char *s);

int main(void) /*this is were the main program start runing*/
{
trim(s);
int a; long int b; long long int c; char d; 
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

void trim (char *s)
{
  int i =strlen(s)-1;
  while (i>0)
  {
    if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
      i--;
    else break; 
  }
  s[i+1]='\0';
}
