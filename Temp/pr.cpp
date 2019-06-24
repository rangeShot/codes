/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 

// #include <vector>
// #include <set>
// #include <map>
// #include <string>
// #include <cstdio>
// #include <cstdlib>
// #include <climits>
// #include <utility>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <iomanip>
// #include <fstream>
// #include <iostream>

#include<bits/stdc++.h>
using namespace std;
#define int int_fast64_t
typedef long long ll
;typedef long double db;


//for fast scanning
template<typename T> void in(T &x) { 
    x = 0; 
    bool neg = 0; 
    register T c = getchar(); 
    if (c == '-') neg = 1, c = getchar(); 
    while ((c < 48) || (c > 57)) c = getchar(); 
    for ( ; c < 48||c > 57 ; c = getchar()); 
    for ( ; c > 47 && c < 58; c = getchar() ) 
        x= (x << 3) + ( x << 1 ) + ( c & 15 ); 
    if (neg) x *= -1; 
} 
  
//for fast printing 
template<typename T> void out(T n) { 
    bool neg = 0; 
    if (n < 0) 
        n *= -1, neg = 1; 
    char snum[65]; 
    int i = 0; 
    do{ 
        snum[i++] = n % 10 + '0'; 
        n /= 10; 
    } 
    while (n); 
    --i; 
    if (neg) putchar('-'); 
    while (i >= 0) putchar(snum[i--]); 
    putchar('\n'); 
} 

void fastscan(int &number) { 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
    number = 0; 
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') { 
        // number is negative 
        negative = true; 
        // extract the next character from the buffer 
        c = getchar(); 
    } 
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
} 


//for printing a list of values of same data-type
template<typename T>
void print(std::initializer_list<T> text) { 
    for (const auto & value: text) 
        std::cout << value << " "; 
}

//use amax(mx,i) instead of mx=max(mx,i) 
template<typename T, typename U> 
static inline void amin(T &x, U y) { 
    if (y < x) x = y; 
} 
//use amin(mn,i) instead of mn=min(mn,i) 
template<typename T, typename U> 
static inline void amax(T &x, U y) { 
    if (x < y) x = y; 
} 

/*
v1.resize(col,vector<int>(row));
bool present=binary_search(v.v.begin(), v.end(),val);   //O(log(n))
std::vector<int> :: iterator it1=lower_bound(v.v.begin(), v.end(),val); // >=
auto  it2=upper_bound(v.v.begin(), v.end(),val);    // >
int count=it2-it1;
set<pair<int,int>>::iterator it=s.upper_bound({point,INT_MAX});
if(it==s.begin())cout<<"not contained in any interval";
it--;
pair<int,int> current=*it;
if(current.first<=point && point<=current.second())cout<<"yes! its present";
else cout<<"its not present";
pop = __builtin_popcount(num);Number of one's in num
parity = __builtin_parity(num); Parity of num
clz = __builtin_clz(num); Number of leading zero's in num
clz = __builtin_clz(-num);Number of leading zero's in num(only for unassigned value)
ctz = __builtin_ctz(num); Number of trailing zero's in num
memset(arr, 0, sizeof(arr[0][0]) * m * n);
*/

#define F first
#define S second
#define pb emplace_back
#define len(a) a.size()
#define sq(a) ((a)*(a))
#define cb(a) ((a)*(a)*(a))
#define SORT(v) sort(ALL(v)) 
#define tits(a) ((int)log2(a)+1)
#define PERMUTE next_permutation 
#define seits(a) __builtin_popcount(a)
#define maxx numeric_limits<int>::max();
ll cil(ll a,ll b) {return ((a==0)?0LL:((((a)-1)/(b))+1));}
#define ignor cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)
#define arr(a,n) ll a[n];rep(i,n)in(a[i])
#define de(i) cout<<"hi "<<i<<endl;
#define endl "\n"
#define inn(a) ll a;in(a);

const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);
#define inf 0x3f3f3f3f
ll i,j,k;




#define TEST ALL_TESTS
// #define ONLINE ReadFromShell

bool isdigit(char ch){
    return ((ch>='0') && (ch<='9'));
}

char findval(vector<char> s){
    if(isdigit(s[1]) && isdigit(s[3])){
        ll a=(ll)(s[1]-'0');
        ll b=(ll)(s[3]-'0');
        
        if(s[2]=='^')return (char)((a^b) + (ll)('0'));
        else if(s[2]=='|')return (char)((a|b) + (ll)('0'));
        else return (char)((a&b) + (ll)('0'));
    }
    else if(isdigit(s[1]) || isdigit(s[3])){
        if(isdigit(s[1])){
            ll a=(ll)(s[1]-'0');
            ll b=0,c;
            
            if(s[2]=='^')c= a^b;
            else if(s[2]=='|')c= a|b;
            else c= a&b;
            
            b=1;
            ll d=c;
            if(s[2]=='^')c= a^b;
            else if(s[2]=='|')c= a|b;
            else c= a&b;
            
            if(c==d)return (char)(c+(ll)('0'));
            else{
                if(s[2]=='&' || s[2]=='|' || a==0)return s[3];
                else{
                    if(s[3]=='x')return 'X';
                    else return 'x';
                }
            }
        }
        else{
            ll a=(ll)(s[3]-'0');
            ll b=0,c;
            
            if(s[2]=='^')c= a^b;
            else if(s[2]=='|')c= a|b;
            else c= a&b;
            
            b=1;
            ll d=c;
            if(s[2]=='^')c= a^b;
            else if(s[2]=='|')c= a|b;
            else c= a&b;
            
            if(c==d)return (char)(c+(ll)('0'));
            else{
                if(s[2]=='&' || s[2]=='|' || a==0)return s[1];
                else{
                    if(s[1]=='x')return 'X';
                    else return 'x';
                }
            }
        }
    }
    else if(s[1]==s[3]){
        if(s[2]=='^')return '0';
        else return s[1];
    }
    else{
        if(s[2]=='^' && s[2]=='|')return '1';
        else return '0';
    }
    
}

void solve(){
    // code 
    stack<char> stk;
    string s;
    cin>>s;
    ll n=s.size();
    for(int i=0;i<n;i++){
        stk.push(s[i]);
        if(s[i]==')'){
            vector<char> temp;
            temp.push_back(')');
            while(stk.top()!='('){
                stk.pop();
                temp.push_back(stk.top());
            }
            stk.pop();
            reverse(temp.begin(),temp.end());
            char ch=findval(temp);
            stk.push(ch);
            // for(auto i:temp)cout<<i;cout<<' '<<ch<<endl;
        }
    }
    
    if(stk.top()=='0' || stk.top()=='1')cout<<0;
    else cout<<1;
    
    
    // cout<<"\nContent : ";
    // while(stk.size()){
    //     cout<<stk.top()<<' ';
    //     stk.pop();
    // }
    // cout<<endl;
    
    
}

#if defined (ONLINE) && ! defined (ONLINE_JUDGE)  
#define ONLINE_JUDGE
#endif

signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    // freopen("Error.txt", "w", stderr);
    #endif


    #ifdef TEST 
        int t;cin>>t;
        for(int i=1;i<=t;++i){
            cout<< "Case #" << i <<": ";
    #endif
            solve();
            // cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
    #ifdef TEST
        cout<<endl;}
    #endif


      fflush(stdout);
    return 0;
}