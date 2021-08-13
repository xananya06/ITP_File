#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, n;
    char ch;
    printf("Enter first matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("=============================\n");
    printf("Enter second matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("=================================\n");
    do
    {

        printf("Choose from menu what you want to do: \n");
        printf("1. Addition of two matrices. \n");
        printf("2. Subtraction of two matrices. \n");
        printf("3. Finding upper and lower triangular matrices. \n");
        printf("4. Transpose of matrix. \n");
        printf("5. Product of two matrices. \n");
        printf("==========================================\n");
        scanf("%d", &n);
        printf("=============================================\n");
        switch (n)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%d", c[i][j]);
                    printf("\t");
                }
                printf("\n");
            }

            break;
        case 2:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                    printf("%d", c[i][j]);
                    printf("\t");
                }
                printf("\n");
            }

            break;
        case 3:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (i < j)
                    {
                        printf("0");
                        printf(" ");
                    }
                    else
                        printf("%d", a[i][j]);
                    printf(" ");
                }
                printf("\n");
            }
            printf("================================\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (i > j)
                    {
                        printf("0");
                        printf(" ");
                    }
                    else
                        printf("%d", a[i][j]);
                    printf(" ");
                }
                printf("\n");
            }

            break;
        case 4:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    b[i][j] = a[j][i];
                    printf("%d", b[i][j]);
                    printf("\t");
                }
                printf("\n");
            }

            break;
    case 5:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    c[i][j] = 0;
                    for (int k = 0; k < 3; k++)
                    {
                        c[i][j] += (a[i][k] * b[k][j]);
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%d", c[i][j]);
                    printf(" ");
                }
                printf("\n");
            }

            break;
        }
        printf("====================================\n");
        printf("Wanna perform more operations(y/n): ");
        scanf("%s", &ch);
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
