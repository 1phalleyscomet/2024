import java.util.Scanner;//스캐너
public class 반복문{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    for(int i=1;i<=9;i++)
      System.out.println(n + "*" + i + "=" + n*);
  }
}