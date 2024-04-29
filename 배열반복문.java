import java.util.Scanner;

public class main{
  public static void main(String[] args){
    int[] a = {1,2,8,4,5};
    int [] b = new int[3];

  for(int i =0;i<b.length;i++)
    System.out.print(b[i]+" ");
  System.out.println();

  int ss=a[0],mm=a[0];
    for (int i = 1;i<a.length;i++)
      ss = ss+a[i];
      mm = Math.max(mm,a[i]);
  }
  System.out.println(ss+" "+mm);
}
}
