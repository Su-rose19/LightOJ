#include<stdio.h>
int main()
{
    int T,x1,y1,x2,y2,x,y,i,j,M;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&M);
        printf("Case %d:\n",i+1);
        for(j=0; j<M; j++)
        {
            scanf("%d %d",&x,&y);
            if((x>=x1 && x<=x2) && (y>=y1 && y<=y2))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
