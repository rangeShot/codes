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

/*
Set<Integer> st = new HashSet<Integer>();st.add();
 long []a=new long[26];


*/


class MAGICJAR{
	public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        long t=scan.nextLong();
        while(t-->0){
            long temp,s=0;
            long n=scan.nextLong();
            while(n-->0){
                temp=scan.nextLong();
                s+=temp-1;
            }
        	System.out.println(++s);

        	
        }
        
		
	}
}