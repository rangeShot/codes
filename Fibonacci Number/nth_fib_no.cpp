/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    


Problem Description :
Task: Given an integer 𝑛, find the 𝑛th Fibonacci number 𝐹𝑛. Input Format. 

The input consists of a single integer 𝑛. Constraints. 0 ≤ 𝑛 ≤ 45. Output Format. Output 𝐹𝑛.

Sample 1. Input: 10
Output: 55
𝐹10 = 55.

constraints: n<45


*/ 

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

signed main(int argc, char const *argv[])
{
	/* code */
	ll a=-1,b=1,ans=0,n;
    cin>>n;
    n++;
    while(n--){
    	ans=a+b;
    	a=b;
    	b=ans;
    }
    
    cout<<ans<<endl;
    
	return 0;
}