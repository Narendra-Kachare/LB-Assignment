/*
    Write application which accept file name from user and one string from user.write 
    that string at the end of file.


    Input : Demo.txt
            Hello World

    Output :  Write hello World at the end of Demo.txt file

*/ 

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

// #define BUFFERSIZE 1024

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
    int iRet = 0, Ans = 0;
    char * Arr = NULL;
    
    printf("Enter the file name that you want to open\n");
    scanf("%s",Fliename);

    printf("Enter the data that you want to write in the file\n");
    scanf("%s",Arr);

    fd = open(Fliename,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("File Unable to open\n");
        perror("Error : ");
        return -1;
    }
    write(fd,Arr,sizeof(Arr));
    printf("File successfully written\n");

    close(fd);
    return 0;
}