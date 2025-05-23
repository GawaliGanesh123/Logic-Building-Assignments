/* 5. Write a program which accepts file name and one count from user and read that number of characters from starting position.

Input : Demo.txt      12
Output : Display first 12 characters from Demo.txt

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int display_n_characters(char *file_name, int n)
{
    int i;
    int fd;
    int counter = 0;
    char buffer[4096];
    int read_byte_count;
    
    fd = open(file_name, O_RDONLY);

    if (fd == -1)
    {
        perror("ERROR");
        return -1;
    }

    read(fd, buffer, n);
    write(1, buffer, n);

    close(fd);

    return counter;
}

int main()
{
    int n;
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    printf("Enter number of characters to display : ");
    scanf("%d", &n);

    display_n_characters(file_name, n);

    return 0;
    
}





