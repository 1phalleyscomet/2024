import java.util.Scanner;

public class main{
  public static void main(String[] args){
    boolean[] appear = new boolean[42];
    Scanner key = new Scanner(System.in);
    for (int i=0;i<10;i++){
    int t = sc.nextInt();
    appear[t%42] = true;
    }
    key.close();
    int cnt = 0;
    for (int i=0;i<42;i++)
      if (appear[i] == true)
        cnt++;
    System.out.println(cnt);
}
}
