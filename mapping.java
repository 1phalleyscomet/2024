public class Hasing12829{
  static String conv(int n){
    int[] dd=new int[3];
    for(int i=0;i<3;i++){
      dd[i]=n%2;
      n=n/2;
    }
    return""+dd[2]+dd[1]+dd[0];
  }
  public static void main(String[] args){
    String[] bin=new String[8];
    for(int i=0;i<8;i++)
      bin[i]=conv(i);
    for(int i=0;i<8;i++)
      System.out.println(bin[i]);
    /*Scanner sc=new Scanner(System.in);
    String octa=sc.next();
    sc.close();
    StringBuilder sb=new StringBuilder();
    for (int i=0;i<0cta.length();i++)
      sb.append(bin[octa.charAt(i)-'0']);
    System.out.println(sb);*/
  }
}

public static void main(String[] args){
  Scanner octa+sc.next();
  sc.close();
  if(octa.equals("0")==true)System.out.println(o);
  else{
    iString[] bin=new String[8];
    i for (int i=0;i<8;i++)
      bin[i]=conv(i);
    StringBuilder sb=new StringBuilder();
    String first = bin[octa.charAt(i)-'0']);
    int loc =0;
    while (first.charAt(loc)=='0')loc++;
    sb.append(first.substring(loc,3));
    for(int i=1;i<octa.length();i++)
      sb.append(bin[octa.charAt(i)-'0']);
    System.out.println(sb);
  }
}
