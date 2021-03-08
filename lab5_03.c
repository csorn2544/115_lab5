#include<stdio.h>
int isugly(int j);
int main()
{
    int n,i=1,count=1;
    scanf("%d",&n);
    while(count<n)
    {
        i++;
        if(isugly(i)==1)
        {
            count++;
        }
    }
    printf("%d",i);
    return 0;
}
int isugly(j)
{
        while (j % 2 == 0)
        j = j / 2;
        while (j % 3 == 0)
        j = j / 3;
        while (j % 5 == 0)
        j = j / 5;
        if(j==1)
        {
            return 1;
        }
        else return 0;
}
