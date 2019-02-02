#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define f(i,a,n) f(i=a;i<n;i++)
#define fb(i,a,n) f(i=a;i>=n;i--)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll mod=1e9+7;
const double pi=acos(-1);
bool cmp(pair<vector<int>,int> a,pair<vector<int>,int> b)
{
    return (a.second<b.second);
}
long long fact(long long n)
{
    if(n<=1)
        return 1;
    else
        return(n*fact(n-1));
}
int main()
{
    fast;
        ll n;
        cin>>n;
        long long M=pow(n,n),facto=fact(n),m=0;
        cout<<"M="<<M<<" "<<facto<<endl;
        long r1=M/n;
//        int a[M+1][n+1];
		int cnt=1,r,arr[n],res[facto+1]={0};
        vector<vector<int> > a(M+1),tmp(n+1),rn;
        for(int i=0;i<=M;i++)
            a[i].push_back(0);
        for(int i=1;i<n+1;i++)
            a[0].push_back(0);
        
        long long c,q,l;
        for(int i=0;i<n;i++)
            arr[i]=i+1;
        
        cout<<"***********"<<endl;
        vector<pair<vector<int>,int> > oper(facto+1);
        vector<int> vec,upd,temp;
        // vec.assign({1,2,3,4});
        for(int i=0;i<n;i++)
            temp.push_back(0);
        for(int i=0;i<n;i++)
            vec.push_back(i+1);
        upd.assign(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            oper[0].first.push_back(0);
            oper[0].second=0;
        }
        // oper[0].assign(make_pair({0,0,0},0));
        cout<<"!!!!!"<<endl;
        for(int j=1;j<=n;j++)
        {
            l=pow(n,j);
            r=(M/l);
            for(int i=1;i<=M;i++)
            {
                m=i;
                if(i>n*r)
                {
                    // cout<<"@@@@@@@"<<endl;
                    c=i/(n*r);
                    q=c*n*r;
                    m-=(q);
                    if(m==0)
                        m=n*r;
                }
                a[i].push_back(ceil((m*1.0)/r));
            }
        }
        for(int i=1;i<=M;i++)
        {
            for(int j=1;j<=n;j++)   
                cout<<a[i][j]<< " ";
            cout<<endl;
        }
        cout<<"**************"<<endl;
        int i=1;
        do
        {
            temp.assign(arr,arr+n);
            oper[i].first=temp;
            oper[i].second=0;
            i++;
        }while(next_permutation(arr,arr+n));
        
        
        cout<<"******************"<<endl;
        for(i=1;i<=M;i++)
        {
            for(int j=1;j<=n;j++)
            {
                swap(upd[j-1],upd[a[i][j]-1]);
            }
            // cout<<"&&"<<endl;
            // for(auto it:upd)
                // cout<<it<<" ";
            // cout<<endl;
            // cout<<"&&"<<endl;
            for(int k=1;k<=facto;k++)
            {
                if(oper[k].first==upd)
                {
                    if(k==32)
                        rn.push_back(a[i]);
                    res[k]++;
                    oper[k].second++;
                    break;
                }
            }
            upd.clear();
            upd.assign(vec.begin(),vec.end());
        }
        
        cout<<"*******************"<<endl;
        cout<<"OPER="<<oper[1].first.size()<<endl;
        for(i=1;i<=facto;i++)
        {
            cout<<"INDEX="<<i<<" ";
            for(int j=0;j<n;j++)
                cout<<oper[i].first[j]<<" ";
            cout<<" ::"<<oper[i].second;
            cout<<endl;
        }
        cout<<"***************"<<endl;
        cout<<"***************"<<endl;
        for(int i=1;i<=facto;i++)
            cout<<res[i]<<" ";
        cout<<endl;
        cout<<"***************"<<endl;
        sort(oper.begin(),oper.end(),cmp);
        cout<<"MINIMUM:"<<endl;
        cout<<oper[1].second<<endl;
        for(int i=0;i<oper[1].first.size();i++)
            cout<<oper[1].first[i]<<" ";
        cout<<endl<<"MAXIMUM:"<<endl;
        cout<<oper[facto].second<<endl;
        for(int i=0;i<oper[facto].first.size();i++)
            cout<<oper[facto].first[i]<<" ";
        cout<<"$$$$"<<endl;
        cout<<rn.size()<<" "<<rn[0][0]<<endl;
        
        for(int i=0;i<rn.size();i++)
        {
            for(int j=1;j<rn[i].size();j++)
                cout<<rn[i][j]<<" ";
            cout<<endl;
        }
        
        
    return 0;
}
