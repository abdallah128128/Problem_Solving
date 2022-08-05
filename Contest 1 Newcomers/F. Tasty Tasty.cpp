//problem link: https://codeforces.com/group/cSWqsVAlXN/contest/390769/problem/F
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
 
    ll a,b,c;  cin>>a>>b>>c;
    assert(0<=a && a<=1e18);
    assert(0<=b && b<=1e18);
    assert(0<=c && c<=1e18);
 
    if(a+b >= c) cout<<b+c;
    else cout << (2*b)+a+1;
 
}