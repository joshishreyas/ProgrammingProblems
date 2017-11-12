/* package codechef; // don't place package name! */
 
import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Main {
    public static void main(String[] args) throws java.lang.Exception {
        
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        
        Set<Integer> set1 = new TreeSet<Integer>();
        Set<Integer> set2 = new TreeSet<Integer>();
        
        for(int i=0 ; i<=200000 ; i++)
        {
            set1.add(i);
        }
 
        while (t != 0) {
            
            Set<Integer> set3 = new TreeSet<Integer>();
            set3.addAll(set1);
            
            int n = scan.nextInt();
            int k = scan.nextInt();
            
            for(int i=0;i<=n-1;i++)
            {
                set3.remove(scan.nextInt());
            }
            
            Object[] a = new Object[set3.size()];
            a = set3.toArray();
            
            System.out.println(a[k]);
            
            set3.clear();
            
            t--;
        }
        
    }
}