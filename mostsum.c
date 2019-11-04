#include<stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d",&n ,&m);
    int array[n][m];
    int row[n];
    for(i=0;i<n;i++)
    {
        row[i]=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&array[i][j]);
            row[i]+=array[i][j];
        }
    }
    int check=row[0], ans=1;
    for(i=0;i<n;i++)
    {
        if(row[i]>check)
        {
            check = row[i];
            ans = i+1;
        }
    }
    printf("%d\n",ans);
    return 0;
}