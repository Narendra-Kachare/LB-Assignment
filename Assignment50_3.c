/*

    Write application which accept file name from user and read all data from that file and display contents on screen.

    Input :  Demo.txt

    Output :  Display all data of file.

*/ 


/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFERSIZE 1024

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
    int iRet = 0;
    char Arr[BUFFERSIZE];
    
    printf("Enter the file name that you want to read\n");
    scanf("%s",Fliename);

    fd = open(Fliename,O_RDONLY);
    if(fd == -1)
    {
        printf("File Unable to open\n");
        perror("Error : ");
        return -1;
    }
    printf("Data from the file is : \n");
    while (1)
    {
        iRet = read(fd,Arr,sizeof(Arr));
        if(iRet == 0)
        {
            break;
        }
        write(1,Arr,iRet);
    }

    close(fd);
    return 0;
}