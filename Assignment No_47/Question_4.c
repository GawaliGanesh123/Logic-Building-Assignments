/* 4. Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.

Input : Demo.txt      ‘M’
Output : Frequency of M is 7

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int count_occurrence(char *file_name, char c)
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
            if (buffer[i] == c)
                counter++;
        }
    }

    close(fd);

    return counter;
}

int main()
{
    int result;
    char c;
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    printf("Enter character : ");
    scanf(" %c", &c);

    result = count_occurrence(file_name, c);

    if (result != -1)
        printf("'%c' occurred %d times.\n", c, result);
        

    return 0;
}













