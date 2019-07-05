/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long int ll;
typedef long double db;
#define rep(i,n) for (ll i = 0; i < n; ++i) 
const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);

void heapify(ll a[],ll n, ll i){
    bool need = false;
    ll l=2*i+1;
    ll r=2*i+2;
    
    if(l<n && a[l]>a[i]){
       swap(a[2*i+1],a[i]);
       need=true;
    }
    if(r<n && a[r]>a[i]){
       swap(a[2*i+2],a[i]);
       need = true;
    }
    
    if(need)heapify(a,n,i);
    
    return;
}

void heapsort(ll a[],ll n){
    for(ll i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(ll i=n-1;i>=0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
    return;
}


signed main(){
	fast;
	ll n;
    cin>>n;
    ll a[n];
    rep(i,n)cin>>a[i];
    heapsort(a,n);
    rep(i,n)cout<<a[i]<<' ';
fflush(stdout);return 0;
}
