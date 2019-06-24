/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double db;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for (ll i = 0; i < (ll)(n); ++i) 
#define endl "\n"
const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);

string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen "
               }; 
  
string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety "
               }; 
  
string numToWords(int n, string s) { 
    string str = ""; 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    if (n) 
        str += s; 
  
    return str; 
} 
  
string convertToWords(long n) { 
    string out; 
  
    out += numToWords((n / 10000000), "crore "); 
  
    out += numToWords(((n / 100000) % 100), "lakh "); 
  
    out += numToWords(((n / 1000) % 100), "thousand "); 
  
    out += numToWords(((n / 100) % 10), "hundred "); 
  
    if (n > 100 && n % 100) 
        out += "and "; 
  
    out += numToWords((n % 100), ""); 
  
    return out; 
} 

void solve(){
    int n,m;
    cin>>n>>m;
    string sn,sm;
    bool over=0;
    if(n>m){
        ll temp=n;
        n=m;
        m=temp;
    }
    sn=convertToWords(n);
    sm=convertToWords(m);
    while(sn<sm){
        // cout<<sn<<' '<<sm<<endl;
        if(n+m>99999){
            over=1;
            break;
        }
        
        n*=2;
        sn=convertToWords(n);
        m*=2;
        sm=convertToWords(m);
        
        if(n+m>99999){
            over=1;
            break;
        }
    }
    if(sn!=sm)n+=m;
    if(!over)cout<<n;
    else cout<<"Out of bounds";
    
    
	return;
}
signed main(){
	IOS;
	ll t=1;
// 	cin>>t;
	while(t--)solve();
fflush(stdout);return 0;
}