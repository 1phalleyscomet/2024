import java.util.Scanner;
public class forif1{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();
    int cnt=0;
    for(int i = 1; i<=n; i++){
      if(n%i==0)
        cnt=cnt+1;
        System.out.println(cnt);
    }
  }
}