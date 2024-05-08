import java.util.Scanner;
public class main{
  static boolean Palin(String ll){
    int l=0, r=ll.length()-1;
    while(l<r){
      if(ll.charAt(l) != ll.charAt(r)) return false; //palindrome X
    }
    return true; //palindrome O
  }
  publci static void main(String[] args)(
  Scanner sc = new Scanner(Scanner.in);
  String ll=sc.next();
  sc.close();
System.out.println(Palin(ll));
}
}
    
