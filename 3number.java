import java.util.Scanner;

public class main{
  public static void main(String[] args){
    Scanner key = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
     key.close();
    int[] cnt = new int[10];
    int m = a*b*c;
    while (m>0){
      cnt[m%10]++;
      m = m/10;
    }
    for (int i=0;i<10;i++){
    System.out.println(cnt[i]);
}
}
