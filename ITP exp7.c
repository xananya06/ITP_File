#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr1;
    FILE *fptr2;
    fptr1=fopen("ananya.txt","r");
    if(fptr1==NULL)
    {
        printf("Cannot open file %s \n", "ananya.txt");
    }
    fptr2=fopen("2.txt","w");
    if(fptr2==NULL)
    {
        printf("Cannot open this file %s\n", "2.txt");
    }
    char c=fgetc(fptr1);
    while (c!=EOF)
    {
        fputc(c,fptr2);
        c= fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
}
