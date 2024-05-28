import java.util.Scanner;
public class main{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int d=sc.nextInt();
    int h=sc.nextInt();
    int w=sc.nextInt();
    sc.close();

  double scale=Math.sqrt(1.0*d*d/(h*h+w*w));
    h=(int)(scale*h);
    w=(int)(scale*w);
    System.out.println(h+" "+w);
  }
}
