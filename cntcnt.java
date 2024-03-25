import java.util.Scanner;
public class cntcnt{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();
    int cnt=0;
    for(int i = 1; i*i<=n; i++){
      if(n%i==0){
        if(i==n/i)cnt++;
        else cnt = cnt+2;
      }
        System.out.println(i);
    }
  }
}