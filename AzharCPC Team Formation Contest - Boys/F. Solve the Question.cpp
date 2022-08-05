//Problem Link: https://codeforces.com/group/GLzwywY8fN/contest/382740/problem/F
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n;
	cin>>t>>n;
	if(t>=1 && t<=3 && n>=1 && n<=500){
	if(t==1) cout<<n;
	else if(t==2) cout<<"1";
	else if(t==3) cout<<"0";
	}
}
