import java.util.Scanner;

public class main{
  public static void main(String[] args){
    Scanner sc=new Scanner (System.in);
    String a = sc.next();

  int cnt = 0;
  int n = sc.nextInt();
    for(int i=0;i<n;i++){
      String t = sc.next();
      t=t+t;
      if(t.indexOf(a)!=-1)
        cnt++;
    }
    System.out.println(cnt);
    sc.close();
  }
}
/*abcd
  3
  abcdxxx
  yyyabcdzzz
  dcbattttt
  abllcd*/
  //3

import java.util.Scanner;
public class SimonSaying{
  public static void main(String[] args){
    Scanner sc=new Scanner (System.in);
  int l ="Simon says".length();
    int n =sc.nextInt();
    sc.nextLine();
    for(int i=0;i<n;i++){
      String ss=sc.nextLine();
      if(ss.length()<l)
        continue;
      if(ss.substring(0,l).equals("Simon says")==true)
        System.out.println(ss.substring(l,ss.length()));
    }
    sc.close();
  }
}
