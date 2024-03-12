/*

    Write application which accept file name from user and display size of file.

    Input :  Demo.txt

    Output :  File size is 56 bytes.

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
    int iRet = 0, Ans = 0;
    char Arr[BUFFERSIZE];
    
    printf("Enter the file name that you want to open\n");
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
        Ans = Ans + iRet;
        if(iRet == 0)
        {
            break;
        }
    }
    printf("File size is %f kb\n",Ans/(float)1024);

    close(fd);
    return 0;
}