//problem Link: https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/J
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
    assert(2<=n && n<=1e3);
    int arr[n];
    int minNum=INT_MAX;
    int counter=1;

    loop(n)
    {
        cin >> arr[i];
        assert(-1e5<=arr[i] && arr[i]<=1e5);
        if(arr[i]< minNum)
        {
            minNum=arr[i];
            counter=1;
        }
        else if(arr[i] == minNum)
            counter++;
    }

    if(counter %2 != 0 )
        cout<<"Lucky";
    else
        cout<<"Unlucky";



}
