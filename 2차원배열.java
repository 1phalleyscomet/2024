import java.util.Scanner;

public class main{
  public static void main(String[] args){
    char[][] mat=new char[5][15];
    Scanner sc=new Scanner(System.in);
    for(int i=0;i<5;i++){
      String t=sc.next();
      for(int j=0;j<t.length();j++)
        mat[i][j]=t.charAt(j);
    }
    sc.close();
    StringBuilder sb=new StringBuilder();
    for (int j=0;j<15;j++)
      for(int i=0;i<5;i++)
        if(mat[i][j]!=0)
          sb.append(mat[i][j]);
    System.out.println(sb);
  }
}
