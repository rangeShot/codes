
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define cil(a,b) (((a-1)/b)+1)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ignor cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define arr(a,n) ll a[n];rep(i,n)scanf("%lld",&a[i])
#define flush fflush(stdin);fflush(stdout)
#define rep(i,n) for(ll i=0;i<n;i++)
#define init int t;scanf("%d",&t);while(t--)
#define in(a) ll a;scanf("%lld",&a)
#define pt printf
#define sp " "

const ll mod=1e9+7;
const double pi=acos(-1);
#define inf 0x3f3f3f3f

void swp(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
fast;
	int n;
	cin>>n;
y:
    int c=1,t=0;
	cout<<"again:  "<<endl;
    int a[n];
    cin>>c;
    rep(i,n)a[i]=i+1;
    
    //max
//     t=cil(n,2);
//    	t=1;
		t=n;
//		t=n/2;
    // while(t--)
    // std::next_permutation(a,a+n);
    int b[n]={0},k=0;
    rep(i,n)b[i]=i+1;
    int x=1;
    while(c--){
	    for(int i=x;i<n;i++){
	    	k=rand()%t;
//	    	k=(k==0)?t:k;
//			cout<<k<<sp;
//			swp(&b[i],&b[k]);
			b[k]++;
		}
//	    for(int i=0;i<n;i++)cout<<b[i]<<sp;
//	    cout<<endl;
//	    x++; 
	}
	    for(int i=0;i<n;i++)cout<<i<<" -> "<<b[i]<<endl;
	    cout<<endl;
    goto y;
    
    //min
//    cout<<endl;cout<<n<<sp;
//    rep(i,n-1)cout << i+1 <<sp;
    
    
flush;
return 0;
}
