#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,T,W,N,M;
    scanf("%lld",&T);
    for(i=0; i<T; i++)
    {
        scanf("%lld",&W);
        long long int k = 0;
        if(W%2==1)
        {
            printf("Case %lld: Impossible\n",i+1);

        }
        else
        {
            for(j = 2; j<=(W/2); j+=2)
            {
                if(W%j==0)
                {
                    M = j;
                    N = W / M;
                    if(N % 2 == 1)
                    {
                        k++;
                        break;
                    }
                }
            }
            if(k>0)
            {
                printf("Case %lld: %lld %lld\n",i+1,N,M);
            }
            else
            {
                printf("Case %lld: Impossible\n",i+1);
            }
        }
    }
    return 0;
}
