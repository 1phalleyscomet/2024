import java.util.Scanner;

public class main{
  public static void main(String[] args){
    int a1 =0,a2=1,a3=2;
    a1=a1+2;
    int b1,b2,b3;
    b1=a1+2;
  }
}

import java.util.Scanner;

public class main{
  public static void main(String[] args){
    int[] a = {0,1,2};
    int [] b = new int[3];
    a[1] += 2;
    System.out.println(a[2]);
    b[0]=4; b[2]=7;
    System.out.println(a[0]+b[2]);
  }
}
/*동시에 여러 변수 선언(같은 수형)
  a[0],a[1]... 등의 변수가 생김
인덱스 혹은 첨자로 변수 지정
인덱스는 a[n]의 경우 0~n-1
정수값을 갖는 수식-> 변수 변화도 가능
  */
