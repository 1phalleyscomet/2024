import java.util.Scanner;
public class forifelse1{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int ss =0;
    for(int i=0;i<5;i++){
      int t =sc.nextInt();
      if(t<40)ss=ss+40;
      else ss = ss+t;
    }
    sc.close();
    System.out.println(ss/5);
  }
}