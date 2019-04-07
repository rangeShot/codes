/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    
Last Digit of a Large Fibonacci Number
Problem Description :
 Task: Given an integer 𝑛, find the last digit of the 𝑛th Fibonacci number 𝐹𝑛 (that is, 𝐹𝑛 mod 10). 

 Input Format: The input consists of a single integer 𝑛. 
 Constraints. 0 ≤ 𝑛 ≤ 107. 
 Output Format. 
 Output the last digit of 𝐹𝑛.

Sample 1. Input: 3
Output: 2
𝐹3 = 2.

Sample 2. Input: 331
Output: 9
𝐹331 = 668996615388005031531000081241745415306766517246774551964595292186469.

Sample 3. Input: 327305
Output: 5
𝐹327305 does not fit into one line here, but its last digit is equal to 5.

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
    n%=60;
    while(n--){
    	ans=a+b;
    	a=b;
    	b=ans;
    	ans+=10;
    	ans%=10;

    	// cout<<a<<' '<<b<<' '<<ans<<endl;
    }
    
    cout<<ans<<endl;
    
	return 0;
}