//Problem Link:https://codeforces.com/group/cSWqsVAlXN/contest/390769/problem/G

#include <bits/stdc++.h>
using namespace std;
 
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
    long long d;
    cin>>n>>d;
    assert(1<=n && n<=100000 && 0<=d && d<=100000);
 
    char x;
    int money;
 
    for(int i=0; i<n; i++)
    {
        cin >> x ;
        cin>>money;
        assert(x=='+' || x=='-');
        assert(0<=money && money<=100000);
 
        if(x=='+')
            d += (long long)money;
        else
        if(d-money  >= 0){
            d-=money;
        }
    }
    if(d>0)
        cout<<d;
    else
        cout<<0;
}
