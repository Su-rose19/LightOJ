#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
//#define pi 3.14159

int main()
{
    int T;
    double r1,r2,h,p,r3,vol;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>r1>>r2>>h>>p;
        double x = p / h;
        r3 = r2 + (r1-r2) * x;
        double y = (1.0 * pi * (r3*r3 + r3*r2 + r2*r2) * p);
        vol = y / 3.0;
        printf("Case %d: %lf\n",t+1,vol);

    }
    return 0;
}

