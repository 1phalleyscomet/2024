public class main{
  static void ShowMat(int[][]m){
    for(int i=0;i<m.length;i++){
      System.out.print(m[i][j]+" ");
      System.out.println();
    }
    System.out.println();
  }
  public static void main(String[] args){
    int[][]a={{1,2,3},{4,5,6},{7,8,9}};
    int [][]b=new int[3][2];
    b[0][0]=11; b[0][1]=12;
    b[1][0]=21; b[1][1]=22;
    b[2][0]=31; b[2][1]=32;

  int[][]c=new int[3][];
    c[0]=new int[1];
    c[1]=new int[2];
    c[2]=new int[3];
    c[0][0]=111;
    c[1][0]=121; c[1][1]=122;
    c[2][0]=131; c[2][1]=132; c[2][2]=133;
    ShowMat(a);
    ShowMat(b);
    ShowMat(c);
  }
}
