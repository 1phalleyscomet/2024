public class a{
static void ShowMat(int[][]m){
    for(int i=0;i<m.length;i++){
    	for(int j=0;j<m[i].length;j++)
      System.out.print(m[i][j]+" ");
      System.out.println();
    }
      System.out.println();
  }
static int SumMat(int[][] m){
  int sum=0;
  for(int i=0;i<m.length;i++)
    for(int j=0;j<m[i].length;j++)
      sum+=m[i][j];
  return sum;
}
static int RowSum(int[] r){
  int sum=0;
  for(int i=0;i<r.length;i++)
    sum+=r[i];
  return sum;
}
public static void main(String[] args){
  int[][] a={{2,3,4},{-1,10},{3,3,3,3}};
  ShowMat(a);
  System.out.println(SumMat(a));
  System.out.println(RowSum(a[2]));
}
}
