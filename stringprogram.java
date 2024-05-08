public class main{
  public static void main(String[] args){
    String str="Hello Jeju";
    for (int i=0;i<str.length();i++)
      System.out.println(str.charAt(i)+" "+((int)str.charAt(i)));

    System.out.println(str.indexOf('J'));
    System.out.println(str.replace("e","E"));
    System.out.println(str.substring(0,str.length()-1));
    System.out.println(str.toUpperCase());
    String[] ss=str.split(" ");
    System.out.println(ss[1]+"--"+ss[0]);
    double dd =12.345;
    String dt = String.valueOf(dd);
    dt=dt+1;
    dd=dd+1;
    System.out.println(dt+" "+dd);
                       
  }
}
