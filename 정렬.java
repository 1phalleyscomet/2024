import java.util.Arrays;
public class main{

  static void ShowArray(int[] a){
    for (int i = 0; i<a.length; i++)
      System.out.print(a[i]+" ");
    System.out.println();
  }
  public static void main(String[] args){
    int[] a ={5,1,6,9,2,7};
    ShowArray(a);
    Arrays.sort(a);
    ShowArray(a);
    /*for (int i =0 ; i<a.length; i++) 
       a[i]=-a[i];
    Arrays.sort(a);
    for (int i =0 ; i<a.length; i++) 
       a[i]=-a[i]   
       */
  }
}
