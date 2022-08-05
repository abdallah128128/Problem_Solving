//problem link: https://codeforces.com/group/cSWqsVAlXN/contest/392077/problem/D
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
 
    int n;
    cin>>n;
    assert(1<=n && n<=1e5);
    int maxC=0;
 
    loop(n)
    {
        ll x;
        cin>>x;
        assert(1<=x && x<=1e18);
        int counter=0;
        while(x){
            if(x%2 ==0){
                counter++;
                x/=2;
            }
            else break;
        }
 
        maxC=max(maxC,counter);
    }
    cout<<maxC;
 
}