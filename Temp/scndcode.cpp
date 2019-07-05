/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 


#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef long double db;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for (ll i = 0; i < (ll)(n); ++i) 
#define endl "\n"
const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);

inline double solve()
{
    
    double Answer;
int n;
double Radius,beg,end;
cin>>Radius>>beg>>end;
cin>>n;
Answer=(end-beg);
while(n--)
{
    double i,j,Height;
   cin>>i>>j>>Height;
   if(Height>=Radius)
   {
       Answer+=2.0*(Height-Radius)+pi*Radius;
       
       Answer-=2.0*Radius;
   }
   else
   {
       
       Answer-=2*asin((Radius-Height)/Radius)*Radius+2.0*Radius*cos(asin((Radius-Height)/Radius));
       Answer+=pi*Radius;
       
   }
}
   return Answer;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    
   
for(ll test_case = 0; test_case  < T; test_case++)
{
        
        
double Answer=solve();

//setbuf(stdout, NULL);
printf("Case #%d\n%.6lf\n",test_case+1,Answer);// << endl;
}
    

        
    return 0;
}

