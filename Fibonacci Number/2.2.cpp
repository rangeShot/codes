#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fib(ll n) { 
  int f[n+2];   // 1 extra to handle case, n = 0 
  int i; 
  f[0] = 0; 
  f[1] = 1; 
  ll s=1;
  for (i = 2; i <= n; i++) { 
      f[i] = f[i-1] + f[i-2]; 
      f[i]%=10;
    //   s+=f[i];
    //   s%=10;
  } 
  return f[n]; 
} 

signed main(){
   ll n;cin>>n;
   n%=200;
    cout<<(ll)(fib(n)%10)<<endl;
    return 0;
}