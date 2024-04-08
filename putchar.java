import java.util.Scanner;
public class main{
  static vodi PutChar(int n, String t){
    for (int j=o;j<n;j++)
      System.out.print(t);
  }

public static void main(String[] args){
  Scanner sc = new Scanner(System.in);
  int n = sc.nextInt();
  sc.close();
  for (int i = 0; i<n;i++){
    PutChar (n-i-1," ");
    PutChar(2*i+1, "*");
    System.outprintln();
  }
}
}
