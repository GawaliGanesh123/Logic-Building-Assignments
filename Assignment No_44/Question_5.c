/* 5. Write a program which accept matrix and swap the contents of consecutive rows.

Input:
3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5

Output:
4   3   2   2
3   2   5   9
3   9   7   5
8   4   1   9

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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


void swap_rows(int **matrix, int row, int col)
{
    int i, j;

    for (i = 0; i < row - 1; i+=2)
    {
        for (j = 0; j < col; j++)
            swap(&matrix[i][j], &matrix[i + 1][j]);
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


    swap_rows(matrix, row, col);


    printf("\nData after swapping rows is :\n");
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




