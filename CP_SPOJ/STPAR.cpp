/*
By:                                        
 
_ __ ___ 119574 
| '__/ __| 
| |  \__ \ 
|_|  |___/ 
 
*/  
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    while(cin>>n){
        if(n==0)break;
        int temp,mn=1;
        bool ok=1;
        int aa[n];
        vector<int> a,b,c;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==mn ){
                a.push_back(temp);
                mn++;
            }
            else{
                b.push_back(temp);
            }
            while(b.size()>0){
                int x=b.size();
                if(b[x-1]==mn){
                    b.pop_back();
                    a.push_back(mn++);
                }
                else break;
            }
        }
        reverse(b.begin(),b.end());
        for(auto i:b)a.push_back(i);
        
        for(int i=0;i<n;i++){
            // cout<<a[i]<<' ';
            if(a[i]!=i+1){
                ok=0;
                break;
            }
        }
        // for(auto i:b){
        //     cout<<i<<' ';
        // }
        
        if(ok)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
    }
    
    
    
    return 0;
} 