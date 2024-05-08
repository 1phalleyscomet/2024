import java.util.Scanner;
public class Hashing15829{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int N=sc.nextInt();
    String ll = sc.next().strip();
    sc.close();
    long ss=0;bb=1;
    int M = 1234567891;
    for(int i=0;i<N;i++){
      int cc =ll.charAt(i)-'a'+1;
      ss=ss+cc*bb;
      ss=ss%M;
      bb=bb*31;
      bb=bb%M;
    }
    System.out.println(ss);
  }
}
