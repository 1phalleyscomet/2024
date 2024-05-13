public class main{
static void ShowMat(int[][]m){
    for(int i=0;i<m.length;i++){
    	for(int j=0;j<m[i].length;j++)
      System.out.print(m[i][j]+" ");
      System.out.println();
    }
      System.out.println();
  }
public static void main(String[] args){
  int[][] a={{1,2,3},{4,5,6},{7,8,9}};
  int [][]b={{10,20},{30,40,50}};
  ShowMat(a);
  ShowMat(b);
  a[1]=b[0];
  ShowMat(a);
  b[0][0]=-100;
  ShowMat(a);
}
}
