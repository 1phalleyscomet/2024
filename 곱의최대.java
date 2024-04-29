import java.util.Scanner; 
import java.util.Arrays; 
  public class A { 
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int N= sc.nextInt;
      int[] A = new int[N];
      for (int i=0; i<N; i++)
        A[i] = sc.nextInt();
      sc.close();
      Arrays.sort(A); 
      int mm-1000000000; 
      mm Math.max(mm, A[N-1]*A[N-2]); 
      mm = Math.max(mm, A[0]*A[1]);
      mm = Math.max(mm, A[0]*A[1]*A[N-1]); 
      mm = Math.max(mm, A[N-3]*A[N-2]*A[N-1]);
      System.out.println(mm);
     } 
 }
