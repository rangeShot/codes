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
 int []a=new int[26];


*/


class DEPCHEF {
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        int t=scan.nextInt();
        while(t-->0){
            int n=scan.nextInt();
            int []a=new int[n];
            int []b=new int[n];
            for(int i=0;i<n;i++){
                a[i]=scan.nextInt();
            }
            for(int i=0;i<n;i++){
                b[i]=scan.nextInt();
            }
            int ans=-1;
            for(int i=0;i<n;i++){
             int temp=a[(i-1+n)%n]+a[(i+1)%n];
             if(b[i]>ans){
                 if(b[i]>temp){
                    ans=b[i];
                }
             }
            }
            System.out.println(ans);
        }
        
        
    }
}