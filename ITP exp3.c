#include<stdio.h>
void towerofHanoi(int n, char src, char des, char helper)
{
    if(n==0)
    {
        return;
    }
    towerofHanoi(n-1, src, helper, des);
    printf("Move from %c to %c\n", src, des);
    towerofHanoi(n-1, helper, des, src);
}
int main()
{
    towerofHanoi(3, 'A', 'C', 'B');
}
