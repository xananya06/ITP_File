#include<stdio.h>
#include<math.h>

int main()
{
    int a, r, n;
    float sum = 0;
    printf("Enter first sequence of G.P series :");
    scanf("%d", &a);
    printf("Enter the common ratio :");
    scanf("%d", &r);
    printf("Enter the total numbers in G.P :");
    scanf("%d", &n);

    sum = (a*(1 - pow(r,n)))/(1-r);
    printf("Sum of GP series :%f", sum);
}
