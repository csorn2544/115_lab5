#include<stdio.h>
int main()
{
    int n,i,j,mid,direction=0;
    scanf("%d",&n);
    mid=n/2;
    if(n%2==0)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<n; j++)
            {
                if(j==(mid+direction)||j==(mid-direction))
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
            printf("\n");
            if(i==mid)
            {
                continue;
            }
            else if(i>mid)
            {
                direction--;
            }
            else
            {
                direction++;
            }
        }
    }
        else
    {
        mid++;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(j==(mid+direction)||j==(mid-direction))
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
            printf("\n");
            if(i>=mid)
                direction--;
            else
                direction++;
        }
    }
}
