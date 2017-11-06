import java.util.*;
import java.io.*;
class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
    int t = in.nextInt();  // Scanner has functions to read ints, longs, strings, chars, etc.
    for (int i = 1; i <= t; ++i) {
      int d = in.nextInt();
      int n = in.nextInt();
      int[] k = new int[n];
      int[] s = new int[n];
      float[] time = new float[n];
      for(int j=0;j<n;j++){
        k[j]=in.nextInt();
        s[j]=in.nextInt();
        time[j]=(float)(d-k[j])/s[j];
      }
      float temp=time[0];
      for(int j=0;j<n;j++){
        if(temp<time[j]){
          temp=time[j];
        }
      }
      float ans = d/temp;
      System.out.println("Case #" + i + ": "+ans);
    }
  }
}