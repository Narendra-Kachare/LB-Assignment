/*

    Write application which accept file name from user and create that file.

    Input :  Demo.txt

    Output :  File created successfully.

*/ 


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

/////////////////////////////////////////////////
// Helper class
/////////////////////////////////////////////////



/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    int fd = 0;
    char Fliename[50];
    
    printf("Enter the file name that you want to create\n");
    scanf("%s",Fliename);

    fd = creat(Fliename,0777);
    if(fd == -1)
    {
        printf("File Unable to open\n");
        perror("Error : ");
        return -1;
    }

    printf("File successfully created\n");

    close(fd);
}