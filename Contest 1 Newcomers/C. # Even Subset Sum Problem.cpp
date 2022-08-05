//problem Link: https://codeforces.com/group/cSWqsVAlXN/contest/390769/problem/C
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
 
    int t;  cin>>t;  assert(1<=t && t<=100);
    while(t--)
    {
        int n,co1=0,co2=0,indx1=0 ,indx2=0 , k=0;
        cin>>n;
        assert(1<=n && n<=100);
 
        for(int i=1 ; i<=n ; i++){
            int x;
            cin>>x;
            assert(1<=x&& x<=100);
            if(x%2 ==0){
                co1++;
                k=i;
            }
            else{
                co2++;
                if(indx1==0) indx1=i;
                else indx2=i;
            }
        }
 
        if(co1>0) cout<<"1"<<endl<<k<<endl;
        else if(co2>=2) cout<<"2"<<endl<<indx1<<" "<<indx2<<endl;
        else cout<<"-1"<<endl;
 
    }
}