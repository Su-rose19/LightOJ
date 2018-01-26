#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int A = a * a;
        int B = b * b;
        int C = c*c;
        if(A == B+C || B == C+A || C == A+B)
        {
            printf("Case %d: yes\n",i);
        }
        else{
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}
