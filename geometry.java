import java.util.Scanner;

public class main{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int x=sc.nextInt();
    int y=sc.nextInt();
    int w=sc.nextInt();
    int h=sc.nextInt();
    sc.close();
    int mm=Math.min(x,y);
    mm=Math.min(mm,w-x);
    mm=Math.min(mm,h-y);
    System.out.println(mm);
  }
}
