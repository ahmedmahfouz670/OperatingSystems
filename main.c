#include<stdio.h>
#include<string.h>

int main(){

char path[200];
char command[200];

printf("enter the file you want to move: \n");
gets(path);

strcpy(command,"mv ");
strcat(command, path);
system(command);
exit(0);

return 0;
}