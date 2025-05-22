/* 4. Write application which accept file name from user and display size of file.

Input : Demo.txt
Output : File size is 56 bytes

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    int fd;
    int count;
    int count_bytes = 0;
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
        count_bytes += count;

    
    close(fd);
    

    printf("File size is %d bytes.\n", count_bytes);

    return 0;
}




