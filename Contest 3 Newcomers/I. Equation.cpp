//link: https://codeforces.com/group/cSWqsVAlXN/contest/393134/problem/I

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
 
    ll x,y,z;
    cin>>x>>y>>z;
 
    cout<< (x/z) * y;
 
}