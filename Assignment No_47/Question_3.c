/* 3. Write a program which accepts file name from user and count number of white spaces from that file.

Input : Demo.txt
Output : Number of white spaces are 13

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int count_spaces(char *file_name)
{
    int i;
    int fd;
    int counter = 0;
    char buffer[1024];
    int read_byte_count;
    
    fd = open(file_name, O_RDONLY);

    if (fd == -1)
    {
        perror("ERROR");
        return -1;
    }

    while (read_byte_count = read(fd, buffer, 1024))
    {
        for (i = 0; i < read_byte_count; i++)
        {
            if (buffer[i] == ' ')
                counter++;
        }
    }

    close(fd);

    return counter;
}

int main()
{
    int result;
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    result = count_spaces(file_name);

    if (result != -1)
        printf("Number of white space characters are : %d\n", result);
        

    return 0;
}





