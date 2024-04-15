import java.util.Scanner;
public class main{
  static boolean IsPrime(int n){
    if (n ==1) return false;
    for (int i = 2;i*i<=n;i++)
      if (n %i==0) return false;
    return true;
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int lb = sc.nextInt();
    int ub = sc.nextInt();
    sc.close();
    int mm = -1, ss=0;
    for (int i =ub;i>=lb;i--){
      if (IsPrime(i)==false)
        continue;
      mm=i;
      ss=ss+i;
    }
    if(mm==-1)System.out.println(-1);
    else System.out.println(ss+"\n"+mm);
  }
}
