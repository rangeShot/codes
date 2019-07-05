/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
/*Question:
  You are given an Array. Your task is to answer q queries. There are 2 typees of queries:
  Query type 1: Find the sum of the given range a and b.
  Query type 2: Replace the given index with new value in original array for further queries.
  
Input format:
The first line of contains two integers n and q. 
The next line contains n space separated integers A1, A2, A3, ... , An forming the initial array.

Each of next q lines contains three space-separated integers t,x and y. First integer denotes the type 1 or 2.
if this query is of type 1 then x and y denotes the range.
if this query is of type 2 then value at x th index in array is to updated with y.

eg:
input:
1
4
3
1 0 0
2 0 5
1 0 0

output:
4
5

*/




#include <bits/stdc++.h>
using namespace std;

struct node{
    pair<int,int> range={-1,-1};
    int val=-1;
    node *left,*right;
    node(int v=-1,int r1=-1,int r2=-1) 
    { 
        this->val = v;
        range.first=r1;
        range.second=r2;
        left = right = NULL; 
    } 
};

int n=0,sz=0;
node* root=NULL;
int a[100];
int sum(int a1,int b){
    int s=a[b];
    if(a1>0)s-=a[a1-1];
    return s;
}
void construct(node *root){
    int l=root->range.first;
    int r=root->range.second;
    int mid=(l+r)/2;
    if(l==r)return;
    else{
        
        int s;
        s=sum(l,mid);
        root->left=new node(s, l, mid);
        // cout<<s<<' '<<l<<' '<< mid<<endl;
        construct(root->left);
    
        s=sum(mid+1,r);
        root->right=new node(s, mid+1, r);
        // cout<<s<<' '<< mid+1<<' '<< r<<endl;
        construct(root->right);
    }
}

int retrieve(node* root, int l, int r){
    int a=root->range.first;
    int b=root->range.second;
    // cout<<a<<' '<<b<<' ';
    if(a>r || l>b){
        // cout<<0<<endl;
        return 0;
    }
    else if(l<=a && l<=b && r>=a && r>=b){
        // cout<<root->val<<endl;
        return root->val;
    }
    else{
        // cout<<(retrieve(root->left,l,r)+retrieve(root->right,l,r))<<endl;
        return (retrieve(root->left,l,r)+retrieve(root->right,l,r));
    }
}

void update(node* root,int l, int diff){
    int a=root->range.first;
    int b=root->range.second;
    if(a==b && a==l)root->val+=diff;
    else if(l>=a && l<=b){
        root->val+=diff;
        update(root->left,l,diff);
        update(root->right,l,diff);
    }
return;
}

int main() {
    cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=1;i<n;i++)a[i]+=a[i-1];
    root=new node(a[n-1],0,n-1);
    construct(root);
	for(int i=n-1;i>0;i--)a[i]-=a[i-1];
    int s;
    int q,t,l,r;
    cin>>q;
    while(q--){
        cin>>t>>l>>r;
        if(t==1){
            s=retrieve(root,l,r);
            cout<<s<<endl;
        }
        else update(root,l,r-a[l]);
        
    }
    root=NULL;
	
	
	return 0;
}
