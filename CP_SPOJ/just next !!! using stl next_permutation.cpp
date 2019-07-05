/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int i=0;
        int j;
        for(i=0;i<n;i++)cin>>a[i];
        
        if(next_permutation(a,a+n))
        for(int i=0;i<n;i++)cout<<a[i];
        else cout<<-1;
        cout<<endl;
    }
    
    
    
    return 0;
}
