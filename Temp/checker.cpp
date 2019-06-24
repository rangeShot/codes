#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

signed main(){
	ifstream in;
    in.open("input.txt");

    ifstream out1;
    out1.open("Output.txt");

    ifstream out2;
    out2.open("out.txt");

    ll t;in>>t;
    string j,k,s;
    for(ll i=0;i<t;i++){
    	in>>s;
    	getline(out1,j);
    	getline(out2,k);
    	if(j!=k){
    		cout<<"Test case: "<<s<<endl;
    		cout<<"my answer: "<<j<<endl;
    		cout<<"expected: "<<k<<endl;
    	}
    	else cout<<"Test "<<i+1<<" passed"<<endl;



    }




	return 0;
}