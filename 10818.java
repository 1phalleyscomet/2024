import java.util.Scanner;
public class 10818{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int min = sc.nextInt(), max=min;
   // int min = 1000000, max = -1000000;
   // for (int i =0; i <N ; i++){
  for (int i =1; i <N; i++){
    int t = sc.nextInt();
      if (t>max)max = t;
      if (t<min)min = t;
    }
    sc.close();
    System.out.println(min+" "+max);
  }
}
