import java.util.Scanner;
public class main{
public static void main(String[] args){
  Scanner key = new Scanner(System.in);
  int T =key.nextInt();
  key.close();
  double t = (double)T;
  double u = t*t/4.0;
  System.out.println(Math.round(u));
}
}
