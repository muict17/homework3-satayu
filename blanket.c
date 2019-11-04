#include<stdio.h>

int main()
{
    int count1=0, count2=0;
    int n, i;
    scanf("%d",&n);
    char blanket[n]; 
    for(i=0;i<n;i++)
    {
        scanf(" %c",&blanket[i]);
        if(blanket[i]=='(') count1++;
        else if(blanket[i]==')') count2++;
    }
    if(count1==count2)
    {
        printf("Complete\n");
    }
    else
    {
        printf("Incomplete\n");
    }
    return 0;
}