/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class HMAPPY2 {
    
    static long gcd(long a, long b){ 
        if (b == 0) return a; 
        return gcd(b, a % b);  
    } 
    static long lcm(long a, long b) { 
        return (a*b)/gcd(a, b); 
    } 
    
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int t=scan.nextInt();
        while(t-->0){
            long n=scan.nextLong();
            long a=scan.nextLong();
            long b=scan.nextLong();
            long k=scan.nextLong();
            long c=n/a;
            c+=n/b;
            c-=2*(n/lcm(a,b));
            String s1="Win",s2="Lose";
            if(c>=k)System.out.println(s1);
            else System.out.println(s2);
        }
    }
}