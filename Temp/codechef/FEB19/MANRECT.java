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
Arrays.sort(a);
Collections.reverse(Arrays.asList(a)); 


*/

class MANRECT{
	public static void main (String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        long t=scan.nextLong();
        while(t-->0){
        	long a,b,c,d,e,f,g,h;
        	System.out.println("Q 0 0");
        	a=scan.nextLong();
        	System.out.println("Q 0 1000000000");
        	b=scan.nextLong();
        	System.out.println("Q 1000000000 1000000000");
        	c=scan.nextLong();
        	System.out.println("Q 1000000000 0");
        	d=scan.nextLong();
        	e=(a-b + 1000000000)/2;
        	System.out.println("Q 0 "+e);
        	f=scan.nextLong();
        	a-=f;
            g=1000000000+a-d;
            h=1000000000+f-b;
        	System.out.println("A "+f+" "+a+" "+g+" "+h);
        	h=scan.nextLong();
        }
        
		
	}
}