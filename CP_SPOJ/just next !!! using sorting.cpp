#include<iostream>
#include<algorithm>
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
        int j=-1;
        int val;
        for(i=0;i<n;i++)cin>>a[i];
        
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                j=i-1;
                val=a[j];
                break;
            }
        }
        if(j==-1){
            cout<<-1<<endl;
            continue;
        }
        sort(a+j,a+n);
        for(int i=j;i<n;i++){
            if(a[i]>val){
                swap(a[j],a[i]);
                break;
            }
        }
        sort(a+j+1,a+n);
        for(int i=0;i<n;i++)cout<<a[i];
        cout<<endl;
        
        
        
    }
    
    
    
    return 0;
}