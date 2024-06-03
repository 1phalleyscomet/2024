import java.util.Scanner;
class Point{
  long x,y;
  Point(long xx,long yy){
    x=xx; y=yy;
  }
}
public class main{
  static int CCW(Point a,Point b,Point c){
    long sum=0;
    sum+=a.x*b.y-a.y*b.x;
    sum+=b.x*c.y-b.y*c.x;
    sum+=c.x*a.y-c.y*a.x;

  if(sum>0) return 1;
    else if(sum==0) return 0;
    else return -1;
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    Point p1=new Point(sc.nextLong(),sc.nextLong());
    Point p2=new Point(sc.nextLong(),sc.nextLong());
    Point p3=new Point(sc.nextLong(),sc.nextLong());
    sc.close();
    System.out.println(CCW(p1,p2,p3));
  }
}
