#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll maxx=1e4+1;
signed main(){
    ll seed;
    cin>>seed;
    srand(seed);
	ll n=rand()%maxx;
    cout<<n<<endl;

    
	return 0;
}