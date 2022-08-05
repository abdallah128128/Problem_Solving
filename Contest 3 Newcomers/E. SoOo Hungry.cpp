//link: https://codeforces.com/group/cSWqsVAlXN/contest/393134/problem/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(n) for(int i = 0; i < n; i++)
#define endl '\n'
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
 
 
int main()
{
    init();
 
    ll x , y;
    cin>>x >>y;
    assert(1<=x && x<=1e12 && 1<=y && y<=1e12);
 
    ll minutes = ceil((double)x/y);
    cout<<minutes;
 
}