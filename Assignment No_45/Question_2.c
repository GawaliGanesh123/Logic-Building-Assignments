/* 2. Write a program which accept matrix and reverse the contents of each row.

Input:
3   2   5   9  
4   3   2   2  
8   4   1   9  
3   9   7   5

Output:
9   5   2   3  
2   2   3   4  
9   1   4   8  
5   7   9   3

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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


void reverse(int *array, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
        swap(&array[i++], &array[j--]);
}


void reverse_matrix(int **matrix, int row, int col) 
{   
    int i;

    for (i = 0; i < row; i++)
        reverse(matrix[i], col);
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


    printf("\nMatrix after reversing rows : \n");
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









