#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long int n;
    vector<int>v;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>n;
        while(n>0)
        {
            int r = n % 2;
            v.push_back(r);
            n = n / 2;
        }
        reverse(v.begin(),v.end());
        long int cnt = 0;
        for(int i =0; i<v.size(); i++)
        {
            if(v[i]==1)
            {
                cnt = cnt + 1;
            }
        }
        if(cnt%2==1)
        {
            printf("Case %d: odd\n",t+1);
        }
        else{
            printf("Case %d: even\n",t+1);
        }

        v.clear();
    }
    return 0;
}



