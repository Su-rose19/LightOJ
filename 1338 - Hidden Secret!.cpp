#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string alpha(string s)
{
    string s1,str;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] != ' ')
        {
            s1 += s[i];
        }
    }
    for(int i =0; i<s1.size(); i++)
    {
        if(s1[i] >= 'a' && s1[i] <='z')
        {
            str += s1[i];
        }
        else if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            str += s1[i];
        }
    }
    for(int i =0; i<str.size(); i++)
    {
        if(isupper(str[i]))
        {
            str[i] += 32;
        }
    }
    return str;
}
int main()
{
    string s1,s2;
    int j,T;
    scanf("%d",&T);
    getchar();
    for(j=0; j<T; j++)
    {
        getline(cin, s1);
        getline(cin, s2);
        string s = alpha(s1);
        string r = alpha(s2);
        sort(s.begin(),s.end());
        sort(r.begin(),r.end());
        if( s == r)
        {
            printf("Case %d: Yes\n",j+1);
        }
        else
        {
            printf("Case %d: No\n",j+1);
        }
        s2.clear();
        s1.clear();
        s.clear();
        r.clear();
    }
    return 0;
}
