//link: https://codeforces.com/group/cSWqsVAlXN/contest/392077/problem/J
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
 
    ll n; cin>>n;
    ll m=n , cou=0;
    while(m>0){
        m/=10;
        cou++;
    }
    ll leftDiv=(ll)pow(10,cou-1);
    m=n;
    cou=(cou+1)/2;
    while(cou--){
        cout<< n%10 + (m/leftDiv)%10 <<endl;
        n/=10;
        leftDiv/=10;
    }
    return 0;
}