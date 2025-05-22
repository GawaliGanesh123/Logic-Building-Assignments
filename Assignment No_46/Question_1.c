/* 1. Write application which accept file name from user and open that file in read mode.

Input : Demo.txt
Output : File opened successfully

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    fd = open(file_name, O_RDONLY);


    if (fd == -1)
        perror("ERROR");
    else
        printf("File opened successfully.\n");
        

    close(fd);

    return 0;
}





