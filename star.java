import java.util.Scanner;
public class main{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n = sc.nextInt();
    sc.close();

    while(n>=0){
      for (int i = 0;i<n;i++)
        System.out.println("*");
    System.out.println();  
    

    /*for (int i=0;i<n;i++){
      for (int j=0;j<i;j++)
        System.out.print("*");
      System.out.println();*/
    }
  }
}