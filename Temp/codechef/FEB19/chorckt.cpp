/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
#include<bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;
typedef long long ll;
#define int int_fast64_t
#define db double

#define pb push_back
#define mk make_pair
#define len(a) a.size()
#define sq(a) ((a)*(a))
#define cb(a) ((a)*(a)*(a))
#define tits(a) ((int)log2(a)+1)
#define seits(a) __builtin_popcount(a)
#define maxx numeric_limits<int>::max();
ll cil(ll a,ll b) {return ((a==0)?0LL:(((a-1)/b)+1));}
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ignor cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define arr(a,n) ll a[n];for(ll i=0;i<n;i++)cin>>a[i]
#define flo fflush(stdout)
#define rep(i,n) for(ll i=0;i<(n);i++)
#define init int t;cin>>t;while(t--)
#define in(a) ll a;cin>>a

/*
memset(arr, 0, sizeof(arr[0][0]) * m * n);
v1.resize(col,vector<int>(row));
bool present=binary_search(v.v.begin(), v.end(),val);	//O(log(n))
std::vector<int> :: iterator it1=lower_bound(v.v.begin(), v.end(),val);	// >=
auto  it2=upper_bound(v.v.begin(), v.end(),val);	// >
int count=it2-it1;
set<pair<int,int>>::iterator it=s.upper_bound({point,INT_MAX});
if(it==s.begin())cout<<"not contained in any interval";
it--;
pair<int,int> current=*it;
if(current.first<=point && point<=current.second())cout<<"yes! its present";
else cout<<"its not present";
*/

const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);
#define inf 0x3f3f3f3f
// #define TEST 1
// #define fpn 1
std::vector<string> t; //for 'M' Pretty Melodies t_i
std::map<string,ll> c; //Pretty Value C_i
std::vector<string> p; //for 'A' Good Melodies P_i
std::map<string,ll> q; // Cost of Good Melodies Q_i
void pre(){
    return ;
}

// ll fun(){
//     int nPos = str_to_search.find(str, 0);

// while (nPos != string::npos)
// {
// 	count++;
// 	nPos = str_to_search.find(str, nPos + str.size());
// }
// }

ll val(string s){
    ll n=0,temp;
    for(auto i:s){
        temp=i-'a';
        if(temp<26)n+=temp;
        else n+=i-'A';
        ++n;
    }
    return n;
}

void solve(){
    t.clear();
    c.clear();
    p.clear();
    q.clear();
    in(n);
    in(m);
    in(a);
    in(x);
    in(r);
    ll temp;
    string s,st;
    cin>>s;
    rep(i,m){
        cin>>st>>temp;
        t.pb(st);
        c[st]=temp;
    }
    rep(i,a){
        cin>>st>>temp;
        p.pb(st);
        q[st]=temp;
    }
    
    if(x>=r){
        cout<<1<<endl;
        vector<pair<ll,string>> vp;
        ll sz=len(t),szz;
        rep(i,sz){
            vp.pb({c[t[i]],t[i]});
        }
        sort(vp.begin(),vp.end());
        // for(auto i:vp)cout<<i.first<<' '<<i.second<<endl;
        bool found=0;
        ll l=1,r=n;
        for(int i=sz-1;i>=0;--i){
            string ss=vp[i].second;
            ll szz=len(ss);
            
            for(ll j=0;j<n-szz;j++){
                found=1;
                
                for(int k=0;k<szz;k++){
                    if(s[j+k]!=ss[k]){
                        found=0;
                        break;
                    }
                }
                if(found){
                    // cout<<ss<<endl;
                    l=j;
                    r=l+szz;
                    l++;
                }
            }
            
            if(found)break;
        }
        
        cout<<"3 "<<l<<' '<<r<<endl;
    }
    else cout<<0<<endl;
    
    
    
    return;
}

signed main(){
fast;
#ifdef fpn
ifstream cin;
cin.open("inp.txt");
fstream cout;
cout.open("opt.txt");
#endif
#ifdef TEST
in(n);
pre();
rep(i,n)
#endif
solve();
return 0;
}