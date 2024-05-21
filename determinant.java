public class main{
  public static void main(String[] args){
    int n=3;
    for(int i=0;i<n;i++){
      int r=0,c=i;
      for(int j=0;j<n;j++){
        System.out.println(r+" "+c);
        r++;c=(c+1)%n;
      }
      System.out.println();
    }
  }
}
