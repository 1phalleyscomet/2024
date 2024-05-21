import java.util.Scanner;
public class main{
  public static void main(String[] args){
    int[][] a,b;
    Scanner sc =new Scanner(System.in);
    int m1=sc.nextInt(); int n1=sc.nextInt();
    a= new int[m1][n1];
    for(int i=0;i<m1;i++)
      for(int j=0;j<n1;j++)
        a[i][j]=sc.nextInt();
    int m2=sc.nextInt(); int n2=sc.nextInt();
    b=new int[m2][n2];
    for(int i=0;i<m2;i++)
      for(int j=0;j<n2;j++)
        b[i][j]=sc.nextInt();
    sc.close();
    for(int i=0;i<m2;i++){
      for(int j=0;j<n2;j++){
        in sum=0;
        for(int k=0;k<n1;k++)
          sum +=a[i][k]*b[k][j];
        System.out.print(sum+" ");
      }
      System.out.printin();
    }
  }
}
  
