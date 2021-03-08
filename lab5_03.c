#include<stdio.h>
int findnthugly(int n);
int isugly(int i);
int maxDivide(int i,int j);
int main()
{
    int n;
    scanf("%d",&n);
    int ugly = findnthugly(n);
    printf("%d",ugly);
}
int findnthugly(int n)
{
    int i=1,count=1;
    while(count<n)
    {
        i++;
        if(isugly(i)==1)
            count++;
    }
    return i;
}
int isugly(int i)
{
    i=divide(i,2);
    i=divide(i,3);
    i=divide(i,5);
    if(i==1)
    {
        return 1;
    }
    else return 0;
}
int divide(i,j)
{
    while (i % j == 0)
        i = i / j;
    return i;
}

