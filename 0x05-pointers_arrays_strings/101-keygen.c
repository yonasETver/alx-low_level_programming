#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - generates random valid passwords for the program 101-crackme.
 */
int main(void)
{
char seed_str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz@#*~?><&^?!";
char password[15];
int i = 0, rand_num, end,pass_w;

srand(time(0));

while (pass_w < 3040)
{
  rand_num = rand() % 10;
  password[i] = seed_str[rand_num];
  pass_w += password[i];
  i++;
}
end = 3040 - pass_w;
password[i] = end;
printf("%s\n",  password);
return (0);
}
