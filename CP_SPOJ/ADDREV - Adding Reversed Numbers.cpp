#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define db double;
ll rev(ll n){
    ll c=0;
    while(n>0){
        c*=10;c+=n%10;
        n/=10;
    }
    return c;
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    int t,n,m;
    cin>>t;
    while(t--){
        cin>> n >> m;
        ll p=rev(n)+rev(m);
        cout<<rev(p)<<endl;
    }
    return 0;
} 