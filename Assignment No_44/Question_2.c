/* 2. Write a program which accept matrix as well as one number from user and return frequency of that number.

Input:
3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5
Input: 9

Output: 3

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>

void display(int **matrix, int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d  ", matrix[i][j]);
        printf("\n");
    }
}


void accept_data(int **matrix, int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter [%d][%d] data : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


int count_frequency(int **matrix, int row, int col, int num)
{
    int i, j;
    int count = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] == num)
                count++;
        }
    }
    return count;
}


int main()
{
    int i, row, col, num, result = 0;
    int **matrix = NULL;

    while (1)
    {
        printf("Enter row : ");
        scanf("%d", &row);

        printf("Enter column : ");
        scanf("%d", &col);

        if (row != col)
        {
            printf("Enter same value of row and column!\n");
            continue;
        }
        break;
    }


    matrix = (int **)malloc(row * sizeof(int *));


    for (i = 0; i < row; i++)
        matrix[i] = (int *)malloc(col * sizeof(int));


    accept_data(matrix, row, col);
    printf("Enter number : ");
    scanf("%d", &num);


    printf("Entered data is : \n");
    display(matrix, row, col);


    result = count_frequency(matrix, row, col, num);


    printf("Frequency of %d is %d\n", num, result);

    for (i = 0; i < row; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }
    
    free(matrix);
    matrix = NULL;

    return 0;
}
















