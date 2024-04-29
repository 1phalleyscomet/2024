import java.util.Scanner;

public class main{
  public static void main(String[] args){
    Scanner key = new Scanner(System.in);
    double[] a = new double[n];
    for (int i=0;i<n;i++)
      a[i] =(double)key.printInt();
    key.close();
    double m = -1;
     for (int i=0;i<n;i++)
       m =Math.max(m,a[i]);
    double ss =0.0;
     for (int i=0;i<n;i++)
       ss += (a[i]/m)*100.0;
    
    System.out.println(ss/n);
}
}
