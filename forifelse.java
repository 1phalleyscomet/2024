import java.util.Scanner;
public class forifelse{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();
    for(int i = 1; i*i<=n; i++){
      if(n%i==0){
        if(i==n/i)System.out.println(i);
        else System.out.println(i+"\n"+(n/i));
      }
       
    }
  }
}