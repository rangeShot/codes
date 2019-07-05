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


#include <iostream>

using namespace std;
typedef long long int ll;
typedef long double db;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for (ll i = 0; i < (ll)(n); ++i) 
#define endl "\n"
const ll mod=1e9+7;
const db eps=1e-9;
//const double pi=acos(-1);

int Answer;
int dp[1000001];
inline int solve(int n1,int n2)
{
    return dp[n2]-dp[n1-1];
}



int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);
    ll half;
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<1000001;i++)
    {
        half=(i+1)/2;
        if(i%2==0)
        {
            dp[i]=dp[half]+1;
            
        }
        else
        {
            dp[i]=dp[half]+2;
        }
    }
    for(int i=1;i<1000001;i++)
    dp[i]+=dp[i-1];
    
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		int i,j;
		cin>>i>>j;
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Implement your algorithm here.
		   The answer to the case will be stored in variable Answer.
		 */
		/////////////////////////////////////////////////////////////////////////////////////////////
		Answer=solve(i,j);
		// Print the answer to standard output(screen).
		printf("Case #%d\n%d\n",test_case+1,Answer);
	}

	return 0;//Your program should return 0 on normal termination.
}