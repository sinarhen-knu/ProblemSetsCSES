#include <iostream>
#include <vector>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    fio;
    ll n; cin>>n;
    ll k=n*(n+1); k/=2;
    if((k&1)) cout<<"NO\n";
    else if((n&1)==0){
        cout<<"YES\n"<<n/2<<"\n";
        for(int i=1;i<=n/2;i+=2) cout<<i<<" ";
        for(int i=n;i>n/2;i-=2) cout<<i<<" ";
        cout<<"\n"<<n/2<<"\n";
        for(int i=2;i<=n/2;i+=2) cout<<i<<" ";
        for(int i=n-1;i>n/2;i-=2) cout<<i<<" ";
        cout<<"\n";
    }
    else{
        cout<<"YES\n";
        int count=0;
        ll p=n+1,q=k/2,sum=k/2;
        vector<bool> lks(p,true);
        p-=1;
        vector<ll> banna;
        while(sum!=0){
            if(sum>=p){
                banna.push_back(p);
                sum-=p; lks[p]=false; p-=1;
            }
            else{
                banna.push_back(sum); lks[sum]=false;
                break;
            }
        }
        cout<<banna.size()<<"\n";
        for(ll x : banna) cout<<x<<" ";
        cout<<"\n"<<n-banna.size()<<"\n";
        for(int i=1;i<=n;i++) if(lks[i]) cout<<i<<" ";
        cout<<"\n";
    }

    return 0;
}

