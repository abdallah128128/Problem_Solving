//link: https://codeforces.com/group/cSWqsVAlXN/contest/393134/problem/J

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
 
    int n; cin>>n;
    int b[n];
    loop(n) cin>>b[i];
 
    int mx=0;
    loop(n){
    b[i] += mx ;
    cout<<b[i]<<" ";
    mx=max(mx,b[i]);
    }
}