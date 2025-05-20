/* 1. Write a program which accept matrix from user and return addition of diagonal elements.

Input:
3   2   5   9
4   3   2   2
8   4   1   5
3   9   7   5

Output: 12

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


int add_diagonal(int **matrix, int row, int col)
{
    int sum = 0;
    int i, j;2

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
                sum = sum + matrix[i][j];
        }
    }
    return sum;
}


int main()
{
    int i, row, col, result;
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


    printf("Entered data is : \n");
    display(matrix, row, col);


    result = add_diagonal(matrix, row, col);


    printf("Addition of diagonal is : %d\n", result);


    for (i = 0; i < row; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }


    free(matrix);
    matrix = NULL;

    return 0;
}

















