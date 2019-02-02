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


int main(){
ifstream cin;
cin.open("inp.txt");
fstream cout;
cout.open("opt.txt");
    vector<ll> v;
    ll n;
    n=800000;
    vector <bool> prime(n+1,true);
            for (ll p=2; p*p<=n; p++){
                if (prime[p] == true){
                    for (ll i=p*2; i<=n; i += p)
                        prime[i] = false;
                }
            }
            prime[0]=false;
            prime[1]=false;
		
		for(ll i=3;i<n;i++){
		if(prime[i])v.push_back(i);
		}
        // for(auto i:v){
        //     cout<<i<<' ';
        // }
//         cout<<v.size()<<endl;
	ll t=1;
	cin>>t;
    n=11500;
    ll ss;
	ll a[]={3,5,7,11};
	while(t--){
	    cin>>n;
	    ll temp1=2,temp2=0;
	    for(ll i=0;i<n;i++){
	    	if(i==n-3)temp2=19;
	    	else if(i==n-2)temp2=13;
	    	else if(i==n-1)temp2=2;
	        else temp2=a[i%4];
//	        if(i==n-1 )temp2*=2;
	       // cout<<v[i]<<' '<<temp1<<' '<<temp2<<endl;
            ss=temp1*temp2*v[i];
	        cout<<ss<<' ';
	        temp1=temp2;
	    }
	    cout<<endl;
	}
return 0;
}

