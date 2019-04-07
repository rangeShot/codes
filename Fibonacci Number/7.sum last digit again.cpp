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
    for(int i=1;i<100;i++){a[i]+=a[i-1];a[i]%=10;}
    // for(int i=0;i<100;i++){
    //     cout<<a[i]<<' ';
    //     if(i==59)cout<<endl;
    // }
    ll n,m;
    cin>>m>>n;
    n%=60;
    m%=60;
    n=a[n]-a[max(m-1,0ll)]+10;
    cout<<n%10;
    
    
    return 0;
}