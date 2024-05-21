public class a{
  static int n =3;
  static void Transpose(int[][] m){
    for (int i=0;i<n;i++)
      for(int j=0;j<n;j++){
        int t = m[i][j];
        m[i][j]=m[j][i];
        m[j][i]=t;
      }
  }
  static void Transpose(int[][] m){
    for(int=0;i<n;i++)
      for(int j=i+1;j<n;j++){
        int t = m[i][j];
        m[i][j]=m[j][i];
        m[j][i]=t;
      }
  }
  public static void main(String[] args){
    int[][] a ={{11,12,13},{21,22,23},{31,32,33}};
    ShowMat(a);
    Transpose(a);
    ShowMAt9a0;
  }
}
