//problem link: https://codeforces.com/group/cSWqsVAlXN/contest/392077/problem/G
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n) for(int i = 1; i <= n; i++)
#define endl '\n'
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
 
 
 
int main()
{
    init();
 
    int l,r;
    cin>>l>>r;
    assert(1<=l && l<=r && r<=1e6);
    int polCounter=0;
    for(int i=l ; i<=r ; i++)
    {
        string s = to_string(i);
        string ss=s;
        reverse(s.begin(),s.end());
        if(s==ss)
            polCounter++;
 
    }
    cout<<polCounter;
}