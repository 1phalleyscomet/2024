import java.util.Scanner;
public class main{
  public static void main(String[] args){
    boolean[][] g=new boolean[2001][2001];
    int x=1000,y=1000,cnt=0;
    g[x][y]=true;
    Scanner sc=new Scanner(System.in);
    int l = sc.nextInt();
    String cmd=sc.next();
    sc.close();
    for(int i=0;i<l;i++){
      switch(cmd.charAt(i)){
        case 'S':y--;break;
        case 'N':y++;break;
        case 'W':x--;break;
        case 'E':x++;break;
      }
      g[x][y]=true;
    }
    for(int i=0;i<2001;i++)
      for(int j=0;j<2001;j++)
        if(g[i][j]==true) cnt++;
    System.out.println(cnt);
  }
}
