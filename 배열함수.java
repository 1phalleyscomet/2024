import java.util.Scanner;

public class main{
 static int Total(int[] a){
    int ss =0;
    for(int i=0;i<a.length;i++)
      ss +=a[i];
    return ss;
  }
  public static void main(String[] args){
    int[] a = {1,2,8,4,5};
    int [] b = new int[3];
    b[0] =5; b[1] = a[0]+a[4]; b[2] = -a[2];
    System.out.println(Total(a));
    System.out.println(Total(b));
  }
}
