// write a program which accept name from user and print that name.

#include<stdio.h>

int main()
{ 
    char Name[30];

    printf("Enter the that you want to print : \n");
     scanf("%[^\n]s",Name);

    printf("%s",Name);


    return 0;
}
