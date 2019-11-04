#include<stdio.h>

int main()
{
    int n, i, j, temp;
    scanf("%d",&n);
    int miss[n];
    int count;
    for(i=0;i<n;i++)
    {
        scanf("%d",&miss[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(miss[i]>miss[j])
            {
                temp=miss[i];
                miss[i]=miss[j];
                miss[j]=temp;
            }
        }
    }
    for(i=miss[0];i<miss[n-1];i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(miss[j]==i) count++;
        }
        if(count==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}