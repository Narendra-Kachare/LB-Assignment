/*

    Write application which accept file name from user and open that file in read mode.

    Input :  Demo.txt

    Output :  File opened successfully.

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
    
    printf("Enter the file name that you want to open\n");
    scanf("%s",Fliename);

    fd = open(Fliename,O_RDONLY);
    if(fd == -1)
    {
        printf("File Unable to open\n");
        perror("Error : ");
        return -1;
    }

    printf("File successfully opened\n");

    close(fd);
}