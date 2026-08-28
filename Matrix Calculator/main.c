#include <stdio.h>
#include "calculator.h"
#include <ctype.h>

int main()
{
    while(1)
    {
        int n,m;
        printf("Enter no of rows of  matrix: ");
        scanf("%d",&n);

        printf("Enter no of columns of  matrix: ");
        scanf("%d",&m);

        int arr[n][m];
        printf("Enter the elements of the matrix: \n");
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                printf("Enter element at position [%d][%d]: ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
        printf("The entered matrix is: \n");
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
         int x,y;
         printf("Press 1 to perform operations on matrix or 2 to perform operations on two matrices: ");
         scanf("%d", &x);
         if(x == 1)
         {
            printf("Which operation do you want to perform on the matrix? \n");
            printf("1. Trace\n");
            printf("2. Transpose\n");
            printf("3. Determinant\n");
            printf("4. Scalar Multiplication\n");
            printf("5. Row sum\n");
            printf("6. Column sum\n");
            printf("7. Check for symmetric matrix\n");
            printf("8. Check for skew symmetric matrix\n");
            printf("9. Power of matrix\n");

            int choice;
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    trace(n,m,arr);
                    break;
                case 2:
                    transpose(n,m,arr);
                    break;
                case 3:
                    determinant(n,m,arr);
                    break;
                case 4:

                    printf("Enter the scalar you want to multiply the matrix with: ");
                    scanf("%d", &y);
                    scalar(y,n,m,arr);
                    break;
                case 5:
                    printf("Which row do you want to get the sum of: ");
                    scanf("%d", &y);
                    row(y,n,m,arr);
                    break;
                case 6:
                    printf("Which column do you want to get the sum of: ");
                    scanf("%d", &y);
                    column(y,n,m,arr);
                    break;
                case 7:
                    symmetric(n,m,arr);
                    break;
                case 8:
                    skew(n,m,arr);
                    break;
                case 9:
                    printf("Enter the power you want to raise the matrix to: ");
                    scanf("%d", &y);
                    power(n,m,arr,y);
                    break;

            

                
                default:
                    printf("Invalid choice\n");
            }

         }
         if(x == 2)
         {


         int k,l;
        printf("Enter no of rows of 2nd matrix: ");
        scanf("%d",&k);

        printf("Enter no of columns of 2nd matrix: ");
        scanf("%d",&l);

        int array[k][l];
        printf("Enter the elements of the matrix: \n");
        for(int i = 0;i<k;i++)
        {
            for(int j = 0;j<l;j++)
            {
                printf("Enter element at position [%d][%d]: ",i,j);
                scanf("%d",&array[i][j]);
            }
        }
         printf("The entered matrix is: \n");
        for(int i = 0;i<k;i++)
        {
            for(int j = 0;j<l;j++)
            {
                printf("%d ",array[i][j]);
            }
            printf("\n");
        }
        int choice;
        printf("Which operation do you want to perform on the matrices? \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            addition(n,m,arr,k,l,array);
            break;
            case 2:
            subtraction(n,m,arr,k,l,array);
            break;
            case 3:
            multiplication(n,m,arr,k,l,array);
            break;
            default:
            printf("Invalid choice\n");
        }

        
        }
        char a;
        printf("Press c to continue and e to exit: ");
        scanf(" %c", &a);
        if(a == 'e' || a == 'E')
            break;
    }
    return 0;
}