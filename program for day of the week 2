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
    int d, m, y; 
}; 

int day(date dt) 
{ 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
    dt.y -= dt.m < 3; 
    return ( dt.y + dt.y/4 - dt.y/100 + dt.y/400 + t[dt.m-1] + dt.d) % 7; 
} 

void solve(){
    date dt;
    cin>> dt.d >> dt.m >> dt.y;
    ll n=day(dt);

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
