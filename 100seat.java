import java.util.Scanner;

public class main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    boolean[] a = new boolean[100];
    int rejected = 0;
    for (int i=0;i<n;i++){
      int t = sc.nextInt() -1;
      if(a[t] == false)
        a[t] = true;
      else rejected++;
  }
    sc.close();
    System.out.println(rejected);
}
}
