/* 1. Write a program which accept matrix from user and display transpose of the matrix.
      The tranpose of a given matrix is formed by interchanging the rows and columns of a matrix.

Input:
3   2   5   9
4   3   2   2
8   4   1   5
3   9   7   5

Output:
3   4   8   3
2   3   4   9
5   2   1   7
9   2   5   5

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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


void swap(int *num1, int *num2)
{
    *num1 = (*num1) + (*num2);
    *num2 = (*num1) - (*num2);
    *num1 = (*num1) - (*num2);
}


void transpose(int **matrix, int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = i; j < col; j++)
        {
            if (i != j)
                swap(&matrix[i][j], &matrix[j][i]);
        }
    }
}



int main()
{
    int i, row, col=0;
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


    printf("\nEntered data is : \n");
    display(matrix, row, col);


    transpose(matrix, row, col);


    printf("\nMatrix after transposed : \n");
    display(matrix, row, col);


    for (i = 0; i < row; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }


    free(matrix);
    matrix = NULL;

    return 0;


}





