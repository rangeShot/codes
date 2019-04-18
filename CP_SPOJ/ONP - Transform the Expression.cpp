/*
By:                                        
 
_ __ ___ 119574 
| '__/ __| 
| |  \__ \ 
|_|  |___/ 
 
*/  
#include<iostream>
#include<stack>
#include<vector>
#include<map>
using namespace std;
typedef long long int ll;
typedef long double db;

stack <char> stk;
string str;
map <char,int> mp;

void setpriority(){
    mp['(']=0;
    mp[')']=1;
    mp['+']=2;
    mp['-']=3;
    mp['*']=4;
    mp['/']=5;
    mp['^']=6;
    
    return;
}

bool isdg(char c){
    return c>='a' && c<='z';
}

void clear(){
    str.clear();
    int n=stk.size();
    for(int i=0;i<n;i++)stk.pop();
    
    return;
}

void check(char i){
    if(i==')'){
        while(stk.top()!='('){
            str+=stk.top();
            // cout<<stk.top()<<endl;
            stk.pop();
        }
        stk.pop();
    }
    else if(i=='('){
        stk.push(i);
        // cout<<i;
    }
    else if(!stk.empty() && mp[i]<=mp[stk.top()]){
        
        while(mp[i]<=mp[stk.top()]){
            str+=stk.top();
            // cout<<stk.top()<<endl;
            stk.pop();
        }
        stk.push(i);
        // cout<<i;
    }
    else {
        stk.push(i);
        // cout<<i;
    }
    
    return;
}

signed main(){
   int t;cin>>t;
   setpriority();
   while(t--){
       string s;
       cin>>s;
       clear();
       for(auto i:s){
           if(isdg(i))str+=i;
           
           else check(i);
       }
      while(!stk.empty()){
          char i=stk.top();
          if(!(i=='(' || i==')')) str+=stk.top();
           
          stk.pop();
      }
       cout<<str<<endl;
   }
    return 0;
}