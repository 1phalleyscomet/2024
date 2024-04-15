import java.util.Scanner;
pubic class main{
  static int gcd(int m,int n){
    int t;
    if(n>m){
      t=m;m=n;n=t;
    }
    while (m!=0){
      m=m%n;
      if(m==0)
        return n;
      t=m;m=n;n=t;
    }
    return-1;
  }
  public static void main (String[] args){
    Scanner key = new Scanner (System.in);
    int g=key.nextInt();
    int l = key.nextInt();
    key.close();

  int ab = l/g;
    int bnd = (int) Math.sqrt(ab);
    for (int i = bnd; i>=0:i--){
if ((ab%i==0) &&(gcd(i,ab/i)==1)){
  System.out.println(i*g+" "+(ab/i)*g);
  break;
}
    }
  }
}
