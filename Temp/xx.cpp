#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vl vector<ll>
#define vb vector<bool>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define test() ll tt;cin>>tt;for(ll testcase=1;testcase<=tt;testcase++)
#define all(v) v.begin(),v.end()
#define vivek_ghosh ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX 1000055
#define mod 1000000007
#define ff first
#define ss second
const int INF=0x3f3f3f3f;

ll power(ll x,ll n,ll M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return power((x*x)%M,n/2,M);
    else
        return (x*power((x*x)%M,(n-1)/2,M))%M;
}

ll modinv(ll a,ll m)
{
    ll g =__gcd(a, m);
    ll res=power(a, m-2, m);
    return res;
}

vb prime(MAX,true);
vl prm;
void sieve()
{
  prime[0] = prime[1] = false;
  for(ll p=2;p*p<MAX;p++)
  {
    if(prime[p])
    {
      for(ll i=p*p;i<MAX;i+=p)
        prime[i] = false;
    }
  }
  for(ll p=2;p<MAX;p++)
  {
    if(prime[p])
      prm.pb(p);
  }
}

ll n,m,t,i,j,k,q,x,y,ans=0,cnt=0,sum=0,mx=-1,mn=INT_MAX;
string s;

ll find(string E, ll value)
{
    if(E.size() == 1)
    {
        if(E[0] == 'x')
            return value;
        else if(E[0] == 'X')
            return (!value);
        else if(E[0] == '1')
            return 1;
        else
            return 0;
    }
    
    if(E.size() == 3)
    {
        if(E[1] == '|')
        {
            if(E[0] == E[2])
            {
                if(E[0] == 'x')
                    return value;
                else if(E[0] == 'X')
                    return (!value);
                else if(E[0] == '1')
                    return 1;
                else if(E[0] == '0')
                    return 0;
            }
            else
            {
                if((E[0] == 'X') || (E[2] == 'X'))
                {
                    if(E[0] == 'X')
                        swap(E[0],E[2]);
                    
                    if(E[0] == 'x')
                        return 1;
                    else if(E[0] == '1')
                        return 1;
                    else if(E[0] == '0')
                        return (!value);
                }
                else if((E[0] == 'x') || (E[2] == 'x'))
                {
                    if(E[0] == 'x')
                        swap(E[0],E[2]);
                        
                    if(E[0] == '1')
                        return 1;
                    else if(E[0] == '0')
                        return value;
                }
                else
                    return 1;
            }
        }
        else if(E[1] == '&')
        {
            if(E[0] == E[2])
            {
                if(E[0] == 'x') 
                    return value;
                else if(E[0] == 'X')
                {
                    return (!value);
                }
                else if(E[0] == '1')
                    return 1;
                else if(E[0] == '0')
                    return 0;
            }
            else
            {
                if((E[0] == 'X') || (E[2] == 'X'))
                {
                    if(E[0] == 'X')
                        swap(E[0],E[2]);
                    
                    if(E[0] == 'x')
                        return 0;
                    else if(E[0] == '1')
                        return (!value);
                    else if(E[0] == '0')
                        return 0;
                }
                else if((E[0] == 'x') || (E[2] == 'x'))
                {
                    if(E[0] == 'x')
                        swap(E[0],E[2]);
                        
                    if(E[0] == '1')
                        return value;
                    else if(E[0] == '0')
                        return 0;
                }
                else
                    return 0;
            }
        }
        else
        {
            if(E[0] == E[2])
                return 0;
            else
            {
                if((E[0] == 'X') || (E[2] == 'X'))
                {
                    if(E[0] == 'X')
                        swap(E[0],E[2]);
                    
                    if(E[0] == 'x')
                        return 1;
                    else if(E[0] == '1')
                        return value;
                    else if(E[0] == '0')
                        return (!value);
                }
                else if((E[0] == 'x') || (E[2] == 'x'))
                {
                    if(E[0] == 'x')
                        swap(E[0],E[2]);
                        
                    if(E[0] == '1')
                        return (!value);
                    else if(E[0] == '0')
                        return value;
                }
                else
                    return 1;
            }
        }
    }
    
    ll braces = 0, mid = -1;
    ll len = E.size();
    
    string leftString = "";
    string rightString = "";
    
    if(len != 5)
    {
        for(ll id = 0; id < len ; id++)
        {
            if(E[id] == '(')
                braces++;
            else if(E[id] == ')')
                braces--;
                
            if((E[id] == '|') || (E[id] == '&') || (E[id] == '^'))
            {
                if(braces == 1)
                {
                    mid = id;
                    break;
                }
            }
        }
        
        for(ll id = 1; id < mid ; id++)
        {
            leftString += E[id];
        }
            
        for(ll id = mid + 1; id < len - 1; id++)
        {
            rightString += E[id];
        }
        
        ll leftAns = find(leftString,value);
        ll rightAns = find(rightString,value);
        
        if(E[mid] == '^')
        {
            return (leftAns^rightAns);
        }
        else if(E[mid] == '|')
            return (leftAns|rightAns);
        else
            return (leftAns&rightAns);
    }
    else
    {
        for(ll id = 1; id < len - 1; id++)
            leftString += E[id];
            
        ll ans = find(leftString,value);
        
        return ans;
    }
}

int main()
{
    vivek_ghosh;
    
    ifstream cin;
    cin.open("input.txt");
    ofstream cout;
    cout.open("out.txt");
    
    test()
    {
        cout<<"Case #"<<testcase<<": ";
        
        string E;
        cin>>E;
        
        ll len = E.size();
        
        ll ans;
        
        ll firstAns = find(E,0);
        
        ll secondAns = find(E,1);
        
        if(firstAns == secondAns)
            ans = 0;
        else
            ans = 1;
        
        cout<<ans<<endl;
    }
    
    
    return 0;
}





