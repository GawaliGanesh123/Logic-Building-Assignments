/* 3. Write application which accept file name from user and read all data from that file and display contents on screen.

Input : Demo.txt
Output : Display all data of file.

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    int fd;
    int count;
    char buffer[20];
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    fd = open(file_name, O_RDONLY);

    if (fd == -1)
    {
        perror("ERROR");
        exit(1);
    }
    
    
    while (count = read(fd, buffer, sizeof(buffer)))
        write(1, buffer, count);


    close(fd);

    return 0;
}




