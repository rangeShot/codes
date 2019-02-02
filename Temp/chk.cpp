/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd2(ll a[],ll n){
	ll v=0,c=0;
	for(ll i=0;i<=n;i++){
        v=__gcd(a[i%n],a[(i+1)%n]);
        if(v==1){
        	c++;
//        	cout<<i<<' '<<a[i]<<' '<<a[i+1]<<endl;
		}
    }
    return c;
}

ll gcd3(ll a[],ll n){
	ll v=0,c=0;
	for(ll i=0;i<=n;i++){
        v=__gcd(a[i%n],a[(i+1)%n]);
        v=__gcd(v,a[(i+2)%n]);
        if(v!=1){
        	c++;
        	cout<<i<<endl;
		}
    }
    return c;
}

ll gre(ll a[],ll n){
	ll c=0;
	for(ll i=0;i<n;i++){
		if(a[i]>=1e9){
//			cout<<a[i]<<endl;
			c++;
		}
	}
	return c;
}

main(){
ifstream ci;
ci.open("opt.txt");
fstream co;
co.open("inpp.txt");
ll t=1;
while(t--){
    ll n;
//    n=11500;
    ci>>n;
//    cout<<n<<endl;
    ll a[n];
    ll v,c=0;
    for(ll i=0;i<n;i++)ci>>a[i];
    if(gcd2(a,n))cout<<n<<' '<<"gcd2  "<<gcd2(a,n)<<endl;
    if(gcd3(a,n))cout<<n<<' '<<"gcd3  "<<gcd3(a,n)<<endl;
    if(gre(a,n))cout<<n<<' '<<"gre   "<<gre(a,n)<<endl;
//    cout<<endl<<endl;
}
    
}
