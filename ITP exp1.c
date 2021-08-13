#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter the Number you want the factorial of :");
    scanf("%d", &n);
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial is= %d", f);
}
