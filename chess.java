import java.util.Scanner;

public class main{
  public static void main(String[] args){
    Scanner key = new Scanner(System.in);
    int[] n = {1,1,2,2,2,8};
    int [] a = new int[6];
    for (int i=0;i<6;i++)
      a[i] = key.nextInt();
    key.close();
    for (int i=0;i<6;i++)
      System.out.print(n[i]-a[i]+" ");
    System.out.println();
  }
}
