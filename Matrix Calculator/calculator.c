#include <stdio.h>
#include "calculator.h"

void trace(int n, int m, int arr[n][m])
{
    int tr = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(i == j)
                tr += arr[i][j];
        }
    }
    printf("The trace of given matrix is %d\n", tr);
}

void transpose(int n, int m, int arr[n][m])
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void determinant(int n, int m, int arr[n][m])
{
    if(m != n)
        printf("Determinant only exists for a square matrix. ");
    else if(n > 3 || m > 3)
        printf("Please enter a matrix of order 1, 2 or 3. ");
    else
    {
        if(m == 1 && n == 1)
            printf("%d", arr[0][0]);
        else if(m == 2 && n == 2)
            printf("%d", arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0]);
        else if(m == 3 && n == 3)
        {
            printf("%d", arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]) - arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]) + arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
        }
    }
}

void scalar(int x, int n, int m, int arr[n][m])
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
            printf("%d ", arr[i][j] * x );
        printf("\n");
    }
}

void row(int y, int n, int m, int arr[n][m])
{
    if (y < n && y >= 0)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += arr[y][j];
        }
        printf("The sum of row %d is: %d\n", y, sum);
    }
    else
        printf("Please enter a valid row.\n");
}

void column(int y, int n, int m, int arr[n][m])
{
    if (y < m && y >= 0)
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i][y];
        }
        printf("The sum of column %d is: %d\n", y, sum);
    }
    else
        printf("Please enter a valid column.\n");
}

void symmetric(int n, int m, int arr[n][m])
{
    int flag = 0;
    if (n != m)
        printf("The given matrix is not square and hence not symmetric.\n");
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(flag == 1) break;
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] != arr[j][i])
                {
                    flag = 1;
                    printf("The given matrix is not symmetric.\n");
                    break;
                }
            }
        }
        if(flag == 0)
            printf("The given matrix is symmetric.\n");
    }
}

void skew(int n, int m, int arr[n][m])
{
    int flag = 0;
    if (n != m)
        printf("The given matrix is not square and hence not skew symmetric.\n");
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(flag == 1) break;
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] != -arr[j][i])
                {
                    flag = 1;
                    printf("The given matrix is not skew symmetric.\n");
                    break;
                }
            }
        }
        if(flag == 0)
            printf("The given matrix is skew symmetric.\n");
    }
}

void addition(int n, int m, int arr[n][m], int k, int l, int array[k][l])
{
    if(n != k || m != l)
        printf("Addition is not possible as the matrices are of different order.");
    else
    {
        printf("The sum of the two matrices is: \n");
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                printf("%d ", arr[i][j] + array[i][j]);
            }
            printf("\n");
        }
    }
}

void subtraction(int n, int m, int arr[n][m], int k, int l, int array[k][l])
{
    if(n != k || m != l)
        printf("Subtraction is not possible as the matrices are of different order.");
    else
    {
        printf("The difference of the two matrices is: \n");
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                printf("%d ", arr[i][j] - array[i][j]);
            }
            printf("\n");
        }
    }
}

void multiplication(int n, int m, int arr[n][m], int k, int l, int array[k][l])
{
    if(m != k)
        printf("Multiplication is not possible as the number of columns of first matrix is not equal to the number of rows of second matrix.");
    else
    {
        printf("The product of the two matrices is: \n");
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<l;j++)
            {
                int sum = 0;
                for(int p = 0;p<m;p++)
                {
                    sum += arr[i][p] * array[p][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
}

void power(int n, int m, int arr[n][m], int p)
{
    if(n != m)
        printf("Power of matrix is not possible as the matrix is not square.");
    else
    {
        int result[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                result[i][j] = 0;
            }
        }
        for(int i = 0; i < n; i++)
        {
            result[i][i] = 1;
        }
        for(int i = 0; i < p; i++)
        {
            int temp[n][m];
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < m; k++)
                {
                    temp[j][k] = 0;
                    for(int l = 0; l < m; l++)
                    {
                        temp[j][k] += result[j][l] * arr[l][k];
                    }
                }
            }
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < m; k++)
                {
                    result[j][k] = temp[j][k];
                }
            }
        }
        printf("The matrix raised to the power %d is: \n", p);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
}

        printf("The product of the two matrices is: \n");
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<l;j++)
            {
                int sum = 0;
                for(int p = 0;p<m;p++)
                {
                    sum += arr[i][p] * array[p][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
}
