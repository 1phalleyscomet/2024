import java.util.Scanner;

public class main{
 static void PrintAll(int[] a){
    for(int i=0;i<a.length;i++)
      System.out.print(a[i]+" ");
   System.out.println();
  }
   static voidsub(int n,int[] a){
     n=-n;
     a[0] =-a[0];
   }
  
  public static void main(String[] args){
    int[] a = {1,2,8,4,5};
   int n =5;
    System.out.println(n);
    PrintAll(a);
    sub(n,a);
    System.out.println(n);
    PrintAll(a);
  }
}
