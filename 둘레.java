import java.util.Scanner;
public class a{
  public static void main(String[] args){
    Scanner key = new Scanner (System.in);
    int d1 = key.nextInt();
    int d2 = key.nextInt();
    key.close();
    double r = 2.0*d1;
    double c = 2.0*d2*Math.PI;
    System.out.println(r+c);
  }
}
