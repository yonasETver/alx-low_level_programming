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
char password[18];
int i = 0, rand_num, end,pass_w;

srand(time(0));

while (pass_w < 4040)
{
rand_num = rand() % 10;
password[i] = seed_str[n];
pass_w += password[i];
  i++;
}
end = 4040 - pass_w;
password[i] = end;
printf("%s\n",  password);
return (0);
}