import java.util.Scanner;
public class main(String[] args){
  Scanner sc=new Scanner(System.in);
  int T =sc.nextLnt();
  for(int t=0;t<T;t++){
    String str=sc.next();
    String res = "";
    for (int i=0;i<str.length();i++)
      res+=(char)+('A'+(str.charAt(i)-'A'+1)%26);
      System.out.println("String#"+(t+1)+"\n"+res+"\n");
  }
  sc.close();
}
}

import java.util.Scanner;
public class main(String[] args){
  Scanner sc=new Scanner(System.in);
  String str=sc.next();
  sc.close();
  int cnt=0,loc=-1;
  while(true){
    loc =str.indexOf("JOI",loc+1);
    if(loc==-1)break;
  }
  System.out.println(cnt);
  cnt =0,loc=-1;
  while(true){
    loc=str.indexOf("IOI",loc+1);
    if(loc==-1)break;
    cnt++;
  }
  System.out.println(cnt);
}
}
