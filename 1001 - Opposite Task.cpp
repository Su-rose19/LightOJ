#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    for(int t = 0;t<T;t++)
    {
        cin>>n;
        if(n<=10)
        {
            int res = 0;
            cout<<res<<' '<<n<<endl;
        }
        else{

            int res = 10;
            int res1 = n - res;
            cout<<res1<<' '<<res<<endl;

        }


    }
    return 0;
}




