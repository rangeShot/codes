/* 
 
By:                                        
 
_ __ ___ 119574 
| '__/ __| 
| |  \__ \ 
|_|  |___/ 
 
*/ 
/*
Question:
Write a program that calculates the day of the week for any particular
date in the past or future.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct date { 
    ll d, m, y; 
}; 
  
const ll monthDays[12] = {31, 28, 31, 30, 31, 30, 
                           31, 31, 30, 31, 30, 31}; 

ll countLeapYears(date d) { 
    ll years = d.y; 
  
    if (d.m <= 2) 
        years--; 
  
    return years / 4 - years / 100 + years / 400; 
} 
  
ll count(date dt) { 
    ll n = dt.y*365 + dt.d; 
  
    for (ll i=0; i<dt.m - 1; i++) 
        n += monthDays[i]; 
  
    n += countLeapYears(dt); 
    n-=737430;  
return n%7; 
} 
 

void solve(){
    date dt;
    cin>> dt.d >> dt.m >> dt.y;
    ll n=count(dt);
    n+=7;
    n%=7;
    switch(n){
        case 0:
        cout<<"Sunday"<<endl;
        break;
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
        cout<<"Thursday"<<endl;
        break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        default:
        cout<<"Saturday"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}
