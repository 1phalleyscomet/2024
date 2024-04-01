import java.util.Scanner;
public class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    sc.close();
    int five = 0, three =0, mm=500000;
    while(N-five*5>=0){
      int r =N-five*5;
      if (r%3==0){
        three=r/3;
        if (five + three <mm)
          mm=five+three;
      }
      five++;
    }
    if (mm==500000)mm=-1;
    System.out.println(mm);

  }
}