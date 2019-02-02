/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
using namespace std;
typedef long long int ll;
const ll mod=10;
ll ncr(ll n, ll r) {
	ll C[r+1]={0}; 
	C[0] = 1;
	for (ll i = 1; i <= n; i++){
		for (ll j = min(i, r); j > 0; j--)
			// nCj = (n-1)Cj + (n-1)C(j-1); 
			C[j] = (C[j] + C[j-1])%mod;
	}
	return C[r];
}

int main(){
    ll n,b,c,d,e,f;
    cin>>n;
    ll a[n];

    ll o=0,e=0;
    rep(i,n){
        cin>>a[i];
        if(a[i]%2)o++;
        else e++;
    }
    ll m=0;
    ll s=0;
    if(o%2==0)cout<<n<<endl;
    else{
        s=0;
        d=n;
        bool ok=0;
        rep(i,n){
            if(a[i]%2==1){
                c=(a[i]*(a[i]+1))/2;
                if(c%2==0){
                    ok=1;
                    break;
                }
            }
        }
        if(ok)d++;
        else d+=3;
        cout<<d<<endl;
    }
    
    return 0;
}