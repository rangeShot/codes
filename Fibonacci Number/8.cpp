/* 
 
By:                                        
 
_ __ ___ 119574 
| '__/ __| 
| |  \__ \ 
|_|  |___/ 
 
*/ 
#include<bits/stdc++.h>
using namespace std;
#define sq(a) (a)*(a)
typedef long long int ll;
signed main(){
    ll a[200];
    a[0]=0;
    a[1]=a[2]=1;
    for(ll i=3;i<=199;++i){
        a[i]=a[i-1]+a[i-2];
        a[i]%=10;
    }
    for(int i=1;i<200;i++){a[i]=sq(a[i]);a[i]+=a[i-1];a[i]%=10;}
    // for(int i=0;i<200;i++){
    //     cout<<a[i]<<' ';
    //     if((i+1)%60==0)cout<<endl;
    // }
    ll n,m;
    cin>>n;
    n%=60;
    cout<<a[n];
    
    
    return 0;
}