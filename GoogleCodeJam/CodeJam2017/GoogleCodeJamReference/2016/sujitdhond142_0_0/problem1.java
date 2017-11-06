import java.util.*;
import java.io.*;
class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
    int t = in.nextInt();  // Scanner has functions to read ints, longs, strings, chars, etc.
    for (int i = 1; i <= t; ++i) {
      int r = in.nextInt();
      int c = in.nextInt();
      char[][] a = new char[r][c];
      String s;
      for(int j=0;j<r;j++){
          s=in.next();
          for(int k=0;k<c;k++){
              a[j][k]=s.charAt(k);
          }
      }
      for(int j=0;j<r;j++){
        checkrow(a,r,c,j);
      }
      for(int k=0;k<c;k++){
        checkcol(a,r,c,k);
      }
      System.out.println("Case #" + i + ": ");
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++){
              System.out.print(a[j][k]);
          }
          System.out.println();
      }
    }
  }
  public static void checkrow(char a[][],int rmax,int cmax,int r){
    char temp;
    for(int i=0;i<cmax;i++){
        if(a[r][i]!='?'){
            temp=a[r][i];
            for(int j=0;j<cmax;j++){
                if(a[r][j]=='?'){
                    a[r][j]=temp;
                }else{
                    temp=a[r][j];
                }
            }
        }
    }
  }
  public static void checkcol(char a[][],int rmax,int cmax,int c){
    char temp;
    for(int i=0;i<rmax;i++){
        if(a[i][c]!='?'){
            temp=a[i][c];
            for(int j=0;j<rmax;j++){
                if(a[j][c]=='?'){
                    a[j][c]=temp;
                }else{
                    temp=a[j][c];
                }
            }
        }
    }
  }
}