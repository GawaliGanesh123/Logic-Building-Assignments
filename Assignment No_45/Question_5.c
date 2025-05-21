/* 5. Write a program which accept matrix and check whether the matrix is sparse matrix or not.
      Sparse matrix is a matrix with the majority of its elements equal to zero.

Input:
1   0   3   0
0   6   0   0   
0   0   1   0
9   0   0   9

Output: It is a sparse matrix.

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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


int check_sparse(int **matrix, int row, int col)
{
    int i, j;
    int count_zeroes = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
                count_zeroes++;
            if (count_zeroes > ((row * col) / 2))
                return 1;
        }
    }
    return 0;
}



int main()
{
    int i, row, col, result=0;
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


    result = check_sparse(matrix, row, col);


    if (result == 1)
        printf("\nIt is a sparse matrix.\n");
    else
        printf("\nIt is not a sparse matrix.\n");


    for (i = 0; i < row; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }


    free(matrix);
    matrix = NULL;

    return 0;

}



