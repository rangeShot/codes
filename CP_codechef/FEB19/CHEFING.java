import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class CHEFING{
    
    
	public static void main (String[] args) {
	    Scanner scan = new Scanner(System.in);
	    
	    long t=scan.nextInt();
	    while(t-->0){
	        long n=scan.nextInt();
	        long no=n;
	        String s;
	        long []a=new long[26];
	        for(int i=0;i<26;i++)a[i]=0;
	        scan.nextLine();
	        while(n-->0){
	            s=scan.nextLine();
	            int len=s.length();
	            Set<Integer> st = new HashSet<Integer>();
	            for(int i=0;i<len;i++){
	                int temp=(int)(s.charAt(i)-'a');
	                st.add(temp);
	            }
	            for(int i:st)a[i]++;
	        }
	        long c=0;
	        for(long i:a){
	            if(i>=no)c++;
	        }
	        System.out.println(c);
	    }
	}
}