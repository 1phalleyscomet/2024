import java.util.Scanner;
public class main{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int T =sc.nextInt();
    for(int t=0;t<T;t++){
      String s1=sc.next();
      String s2 = sc.next();
      System.out.println("Distances");
      for(int i=0;i<s1.length();i++){
        int dist =s2.charAt(i)-s1.charAt(i);
        if (dist<0) dist=dist+26;
        System.out.print(dist+" ");
      }
      System.out.println();
    }
    sc.close();
  }
}

import java.util.Scanner;
public class main{
  static boolean IsCapital(char t){
    if((t>='A')&&(t<='Z'))
      return true;
    else return false;
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String str=sc.next();
    sc.close();
    String res = "";
    int delta = 'a'-'A';
    for (int i=0;i<str.length();i++){
      if(IsCapital(str.charAt(i))==true)
        res+=(char)(str.charAt(i)+delta);
      else
        res +=(char)(str.charAt(i)-delta);
    }
    Stste.out.println(res);
  }
  }
