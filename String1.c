# include <stdio.h>
#include <string.h>
int main() {

char String1[50];
char String2[50];
char String3[50];

printf("Enter string 1:");
scanf("%s", String1);
printf("Enter string 2:");
scanf("%s", String2);
printf("Enter string 3:");
scanf("%s", String3);

printf("Result %s %s %s", String1, String2, String3);


return 0;
}