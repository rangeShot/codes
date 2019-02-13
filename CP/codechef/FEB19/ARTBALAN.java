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
// import java.util.concurrent.*;
// import java.util.regex.*;

/*
Set<Integer> st = new HashSet<Integer>();st.add();
long []a=new long[26];
Arrays.sort(a);
Collections.reverse(Arrays.asList(a)); 


*/


class ARTBALAN{
    
    
    
    static long fun(Integer a[],long n,long total){
        long q=total/n;
        long s=0, ss=0;
        for(int i=0;i<n;i++){
            if(ss+a[i]<q){
                s+=q-a[i];
            }
            else{
                ss-=q-a[i];
                if(ss<0)s-=ss;
            }
            ss=0;
        }
        return s;
    }
    
	public static void main (String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        long t=scan.nextLong();
        scan.nextLine();
        while(t-->0){
            String s=scan.nextLine();
            Integer []a=new Integer[26];
            for (int i=0;i<26 ;i++ ) a[i]=0;
            long n=s.length();
            long temp;
            for(int i=0;i<n;i++){
                int j=(int)(s.charAt(i)-'A');
                a[j]++;
            }
            Arrays.sort(a);
            Collections.reverse(Arrays.asList(a)); 
            // for(int i=0;i<26;i++)
            // System.out.print(a[i]+" ");
        	long l=Math.min(26,n);
        	long ans=Long.MAX_VALUE;
        	for(int i=1;i<=l;i++){
        	    if (n%i==0) {
        	        temp=fun(a,i,n);
        	        ans=Math.min(ans,temp);
        	    }
        	}
        	System.out.println(ans);
        }
        
	}
}