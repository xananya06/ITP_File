#include<stdio.h>
int main()
{
    char s1[]="Hello", s2[]= "World";
    int i;
    for(i=0; s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    printf("String s2 :%s",s2);
}
