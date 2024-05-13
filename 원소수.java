public class main{

public static void main(String[] args){
  int[][] a={{1,2,3},{4,5,6},{7,8,9}};
  int [][]b={{10,20},{30,40,50}};
  ShowMat(a);
  ShowMat(b);
  a[1]=b[0];
  ShowMat(a);
}
}
