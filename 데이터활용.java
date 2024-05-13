import java.util.Scanner;
public class main{
  static int m,n;
  static int[][] a;

static int Proc(int x1, int y1,int x2,inty2){
  int t,ss=0;
  if(x2<x1){t=x1;x1=x2;x2=t;}
  if(y2<y1){t=y1;y1=y2;y2=t;}
  for (int x=x1;x<=x2;x++)
    for(int y=y1;y<=y2;y++)
      ss+=a[x][y];
  return ss;
}
  public static void main(String[] args) throws Exception{}
}
public staitc void main(String[] args){
  Scanner sc=new Scanner(System.in);
  m=sc.nextInt();
  n=sc.nextInt();
  a=new int[m][n];
  for(int t=0;i<m;i++)
    for(int j=0;j<n;j++)
      a[i][j]=sc.nextInt();
  int q=sc.nextInt();
  StringBuilder sb=new StringBuilder();
  for(int i=0;i<q;i++){
    int x1=sc.nextInt()-1;
    int y1=sc.nextInt()-1;
    int x2=sc.nextInt()-1;
    int y2=sc.nextInt()-1;
    sb.append(Proc(x1,y1,x2,y2)+"\n");
  }
  System.out.print(sb);
  sc.close();
}


pubic static void main(String[] args){
 staitc int[] CutMat(int[][] m){
   int[] cnt=new int[3];
   for(int i=0;i<n;i++)
     for(int j=0;j<n;j++){
       if(m[i][j]>0) cnt[0]++;
       else if(m[i][j]<0) cnt[1]++;
       else cnt[2]++;
     }
   return cnt;
 }
public static void main(String[] args){
  int[][] a={{5,1,9,-1,6},{-4,1,6,1,2},{6,-2,7,9,-3},{1,2,3,4,5},{-1,-2,-3,-4,-5}};
   static int n=5;
  /*ShowMat(a);
  int[] r=CutMat(a);
  System.out.printlm(r[0]+" "+r[1]+" "+r[2]);
}
}*/

  
public class main {
    static int n = 5;

    static int[] DivMat(int[][] m) {
        int[] cnt = new int[3];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                if (i > j) cnt[0] += m[i][j];
                else if (i < j) cnt[1] += m[i][j];
                else cnt[2] += m[i][j];
            }
        return cnt;
    }

    public static void main(String[] args) {
        int[][] a = {{5, 1, 9, -1, 6}, {-4, 1, 6, 1, 2}, {6, -2, 7, 9, -3}, {1, 2, 3, 4, 5}, {-1, -2, -3, -4, -5}};
        int[] r = DivMat(a);
        System.out.println(r[0] + " " + r[1] + " " + r[2]);
    }
}
