//problem Link : https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/E
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
    assert(2<=n && n<=1000);
    int low=1e5;
    int lowIndex=0;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        assert(-1e5<=x && x<=1e5);

        if(x< low){
            low=x;
            lowIndex=i;
        }
    }
    cout<<low <<" "<<lowIndex;


}
