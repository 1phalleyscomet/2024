import java.util.Scanner;//스캐너
public class fibonacci{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    int f1=0, f2=1;
    for(int i=0;i<n-1;i++){
      int t = f2+f1;
      f1+f2;
      f2=t;
    }
    System.out.println(f2);
  }
}