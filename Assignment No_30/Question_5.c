/*5.Write a program which accept division from the user and depends on the division display exam timing. 
There are 4 division in school as A, B, C, D. Exam of division A at 7AM, B at 8:30AM, C at 9:20AM and D at 10:30AM.
(Application should be case insensitive)

Input : C
Output : Your exam at 9:20AM

Input : d
Output : Your exam at 10:30AM
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display_Schedule(char div)
{
    switch (div)
    {
        case 'A':
        case 'a':
            printf("\nYour exam is at 7AM.\n");
            break;

        case 'B':
        case 'b':
            printf("\nYour exam is at 8:30AM.\n");
            break;

        case 'C':
        case 'c':
            printf("\nYour exam is at 9:20AM.\n");
            break;
        
        case 'D':
        case 'd':
            printf("\nYour exam is at 10:30AM.\n");
            break;
        
        default:
            printf("\nInvalid option selected.\n");
    }
}

int main()
{
    char div;

    printf("Enter your division: ");
    scanf("%c", &div);

    Display_Schedule(div);

    return 0;
}
