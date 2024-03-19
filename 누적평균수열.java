import java.util.Scanner;//스캐너
public class 누적평균수열{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a = 0;
    for(int i=0;i<n;i++){
      int t=sc.nextInt();
      int e = (i+1)*t - a;
      System.out.println(e+"");
      a+=e;
    
    }
    sc.close();
  }
}
