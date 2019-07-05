/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double db;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for (ll i = 0; i < (ll)(n); ++i) 
#define endl "\n"
const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);

bool isprime(ll n){
	if(n==2 || n==3 || n==5)return true;

	if(n%2==0)return 0;
	else if(n%3==0)return 0;
	else{
		for(ll i=5;i*i<=n;){
			if(n%i==0)return 0;
			i+=2;
			if(n%i==0)return 0;
			i+=4;
		}
		return 1;
	}
}

void solve(){
	ll n;
	cin>>n;
	if(isprime(n))cout<<"yes"<<endl;
	else cout<<"no"<<endl;


	return;
}
signed main(){
	IOS;
	ll t=1;
	// cin>>t;
	while(t--)solve();
fflush(stdout);return 0;
}