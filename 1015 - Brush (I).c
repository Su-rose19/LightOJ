#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        int N,j,dust_unit,total = 0;
        scanf("%d",&N);
        for(j=1; j<=N; j++)
        {
            scanf("%d",&dust_unit);
            if(dust_unit<0)
            {
                continue;
            }
            else
            {
                total += dust_unit;
            }
        }
        printf("Case %d: %d\n",i,total);
    }
    return 0;
}
