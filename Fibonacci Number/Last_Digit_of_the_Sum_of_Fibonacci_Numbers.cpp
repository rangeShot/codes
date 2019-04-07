/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    
Last Digit of the Sum of Fibonacci Numbers 
Problem Introduction: The goal in this problem is to find the last digit of a sum of the first 𝑛 Fibonacci numbers. 
Problem Description:
 Task. Given an integer 𝑛, find the last digit of the sum 𝐹0 + 𝐹1 + · · · + 𝐹𝑛. 
 Input Format. The input consists of a single integer 𝑛. 
 Constraints. 0 ≤ 𝑛 ≤ 1018. 
 Output Format. Output the last digit of 𝐹0 + 𝐹1 + · · · + 𝐹𝑛.

Sample 1. Input: 3
Output: 4
𝐹0 + 𝐹1 + 𝐹2 + 𝐹3 = 0 + 1 + 1 + 2 = 4.

Sample 2. Input: 100
Output: 5
The sum is equal to 927372692193078999175, the last digit is 5. 
What To Do:
Instead of computing this sum in a loop, try to come up with a formula for 𝐹0 + 𝐹1 + 𝐹2 + · · · + 𝐹𝑛. 
For this, play with small values of 𝑛. Then, use a solution for the previous problem.

*/ 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

signed main(int argc, char const *argv[])
{
	/* code */
	ll a=-1,b=1,ans=0,n,s=0;
    cin>>n;
    n++;
    n%=60;
    while(n--){
    	ans=a+b;
    	a=b;
    	b=ans;
    	ans+=10;
    	ans%=10;
    	s+=ans;
    	s%=10;
    	// cout<<a<<' '<<b<<' '<<ans<<endl;
    }
    
    cout<<s<<endl;
    
	return 0;
}