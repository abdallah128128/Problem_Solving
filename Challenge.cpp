//Problem Link: https://codeforces.com/group/GLzwywY8fN/contest/382740/problem/H

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin>>n>>s;
    if(n>=3 && n<=100000){
        if(s[n-1] =='n' && s[n-2]=='o' && s[n-3]=='s')
            cout <<"YES";
        else cout<<"NO";
    }
}
