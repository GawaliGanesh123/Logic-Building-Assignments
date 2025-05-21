/* 4. Write a program which accept matrix and check whether the matrix is identity matrix or not.
      Identity matrix is a square matrix with 1's along the diagonal fro upper left to lower right and 0's in all other positions.
      If it satisfies the structure as explained before then the matrix is called as identity matrix.

Input:
1   0   0   0
0   1   0   0
0   0   1   0
0   0   0   1

Output: It is an identity matrix.

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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



int check_identity(int **matrix, int row, int col)
{
    int i, j;
    int flag = 1;

    if (row != col)
        return 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        return 1;
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


    result = check_identity(matrix, row, col);


    if (result == 1)
        printf("\nIt is an identity matrix.\n");
    else
        printf("\nIt is not an identity matrix.\n");


    for (i = 0; i < row; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }


    free(matrix);
    matrix = NULL;


    return 0;


}
