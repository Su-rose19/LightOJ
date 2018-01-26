#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int MP,LP,T;
        scanf("%d %d",&MP,&LP);
        int con = ((3*3)+(2*5));
        int Value = abs(MP - LP);

        T = (Value*4+(MP*4)+ con );

        printf("Case %d: %d\n",i,T);
    }

    return 0;
}
/*if(LP >= MP)
        {
            T = ((LP - MP)*4+(MP*4)+ con );
        }
        else
        {
            T = (((MP - LP)*4)+(MP*4)+ con);
        }*/
