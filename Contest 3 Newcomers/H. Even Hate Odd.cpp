//link: https://codeforces.com/group/cSWqsVAlXN/contest/393134/problem/H

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
 
    int t;
    cin>>t;
    assert(1<=t && t<=100);
 
    while(t--)
    {
        int n;
        cin>>n;
        assert(1<=n && n<=1e5);
        bool poss=false;
        if(n%2 !=0)
            poss=true;
 
        int arr[n];
        int even=0, odd=0;
        for(int i=0 ; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i] % 2 ==0)
                even++;
            else
                odd++;
        }
 
        if(even == odd)
        {
            cout<< 0 <<endl;
        }
        else if(poss)
        {
            cout<<-1<<endl;
        }
        else if(even>odd)
        {
            cout<< (even-odd)/2 <<endl;
        }
        else
        {
            cout<<(odd-even)/2 <<endl;
        }
 
    }
}