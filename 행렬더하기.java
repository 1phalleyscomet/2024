import java.util.Scanner;
public class main{
  public static void main(String[] args){
    int[][] a,b;
    Scanner sc=new Scanner(System.in);
    int m=sc.nextInt();
    int n=sc.nextInt();
    a= new int[m][n];
    b=new int[m][n];
    for(int i=0;i<m;i++)
      for(int j=0;i<n;i++)
        a[i][j]=sc.nextInt();
    for(int i=0;i<m;i++)
      for(int j=0;i<n;i++)
        b[i][j]=sc.nextInt();
      sc.close();
    for(int i=0;i<m;i++){
      for(int j=0;i<n;i++)
        System.out.print(a[i][j]+b[i][j]+" ");
      System.out.printin();
    }
  }
}
    
