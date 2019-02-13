/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 

import java.io.*;
import java.math.*;
import java.lang.*;
import java.security.*;
import java.text.*;
import java.util.*;

/*
Set<Integer> st = new HashSet<Integer>();st.add();
long []a=new long[26];
Arrays.sort(a);
Collections.reverse(Arrays.asList(a)); 


*/

class GUSSRT {
    static long Mod=1000000007;
    static long power(long a, long b){
        if(b==0)return 1;
        long half=power(a,b/2);
        half%=Mod;
        long p=(half*half)%Mod;
        if(b%2==0)
            return p;
        else
            return (a*p)%Mod;
    }


    static long inv(long n){
        return power(n,Mod-2);
    }

    static long cil(long n, long k){
        return (n+1)/k;
    }

    public static void main (String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        long t=scan.nextLong();
        while(t-->0){
            long n=scan.nextLong();
            long k=scan.nextLong();
            long m=scan.nextLong();
            long a=(n-1)*inv(n);a%=Mod;
            long ans=power(a,cil(m,2));
            ans=Mod+1-ans;
            ans%=Mod;
            if(m%2==0){
                ans+=((1-ans)*inv(n+k));
            }
            ans%=Mod;
            ans+=Mod;
            ans%=Mod;
            System.out.println(ans);
        }
        
        
    }
}