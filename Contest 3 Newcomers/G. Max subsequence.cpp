//link: https://codeforces.com/group/cSWqsVAlXN/contest/393134/problem/G

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
 
    int n; cin>>n; assert(1<=n && n<=1e5);
    string s; cin>>s; assert(s.size() == n);
 
    int counter=0;
    for(int i=0 ; i<s.size() ;i++){
        if(s[i] == s[i+1]) continue;
        else counter++;
    }
 
    cout<<counter;
}