#include<stdio.h>
int main()
{
    int T,k,x,y,i,j;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        int sum = 0;
        scanf("%d",&k);
        for(j=0; j<k; j++)
        {
            scanf("%d %d",&x,&y);
            sum += (y-x-1);
        }
        if(sum%2 == 1)
        {
            printf("Case %d: Alice\n",i+1);
        }
        else if(sum%2==0)
        {
            printf("Case %d: Bob\n",i+1);
        }
    }
    return 0;
}
