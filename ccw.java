public class main{
  static int Area(int[] a,int[] b,int[] c){
    int ss=0;
    ss+=a[0]*b[1]-a[1]*b[0];
    ss+=b[0]*c[1]-b[1]*c[0];
    ss+=c[0]*a[1]-c[1]*a[0];
    return ss;
  }
  public static void main(String[] args){
    int[] a={0,0},b={1,0},c={0,1};

    System.out.println(Area(a,b,c));
    System.out.println(Area(a,c,b));
  }
}    
    
