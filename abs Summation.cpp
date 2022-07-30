//problem Link:https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/A
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
    cin>>n;
    assert(1<=n && n<=1e5);

    long long sum=0;
    for(int i=0 ; i<n; i++)
    {
        int num;
        cin >> num;
        assert(-1e9<=num && num<=1e9);
        sum += num;
    }
    cout<< abs(sum);
}
