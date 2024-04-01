import java.util.Scanner;
public class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt()-1;
    int K = sc.nextInt()-1;
    sc.close();

    if (N-K<K)
            K=N-K;
    long s1=1,s2=1;
    for (int i=0;i<K;i++){
      s1=s1*(N-i);
      s2=s2*(i+1);
    }
    System.out.println(s1/s2);
  }
}