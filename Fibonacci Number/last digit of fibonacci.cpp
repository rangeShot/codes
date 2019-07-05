/* 
 
By:                                        
 
_ __ ___ 119574 
| '__/ __| 
| |  \__ \ 
|_|  |___/ 
 
*/ 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
signed main(){
    ll a[100];
    a[0]=0;
    a[1]=a[2]=1;
    for(ll i=3;i<=99;++i){
        a[i]=a[i-1]+a[i-2];
        a[i]%=10;
    }
    ll n;cin>>n;
    n%=60;
    cout<<a[n]<<endl;
    
    
    return 0;
}