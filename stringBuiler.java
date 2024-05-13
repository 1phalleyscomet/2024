import java.util.Scanner;

public class main{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String line = sc.nextLine();
    sc.close();
    StringBuilder sb=new StringBuilder();
    int idx=0;
    while(idx<line.length()){
      char cc=line.charAt(idx++);
      sb.append(cc);
      if(cc=='a'|| cc=='e'||cc=='i'||cc=='o'||cc=='u')
        idx=idx+2;
    }
    System.out.println(sb);
  }
}
