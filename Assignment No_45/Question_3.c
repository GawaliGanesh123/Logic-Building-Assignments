/* 3. Write a program which accept matrix and reverse the contents of each columns.

Input:
3   2   5   9  
4   3   2   2  
8   4   1   9  
3   9   7   5

Output:
3   9   7   5   
8   4   1   9   
4   3   2   2
3   2   5   9

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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


void reverse_matrix(int **matrix, int row, int col) 
{   
    int i, j, k;

    for (k = 0; k < col; k++)
    {
        i = 0;
        j = row - 1;

        while (i < j)
            swap(&matrix[i++][k], &matrix[j--][k]);
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


    reverse_matrix(matrix, row, col);


    printf("\nMatrix after reversing columns : \n");
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










