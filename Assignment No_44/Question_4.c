/* 4. Write a program which accept matrix and display addition of elements from each column.

Input:
3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5

Output: 18  18  15  25

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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


void display_add_column(int **matrix, int row, int col)
{
    int sum;
    int i, j;

    for (i = 0; i < row; i++)
    {
        sum = 0;
        for (j = 0; j < col; j++)
            sum = sum + matrix[j][i];
        printf("%d  ", sum);
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


    printf("\nAddition of each column is :\n");
    display_add_column(matrix, row, col);
    printf("\n");   


    for (i = 0; i < row; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }

    

    free(matrix);
    matrix = NULL;

    return 0;


}




