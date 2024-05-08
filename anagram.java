import java.util.Scanner;
public class main{
  static boolean Anagram(String s1,String s2){
    int[] c1=new int[26];
    int[] c2=new int[26];
    if(s1.length() !=s2.length()) return false;
    for (int i=0;i<s1.length();i++){
      c1[s1.charAt(i)-'a']++;
      c2[s2.charAt(i)-'a']++;
    }
    for(int i=0;i<26;i++)
      if(c1[i] != c2[i]) return false;
    return true;
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n =sc.next();
    for(int i=0;i<n;i++){
      String t1=sc.next();
      String t2=sc.next();
      if(Anagram(t1,t2)==true)
        System.out.println(t1+"&"+t2
                           +"are anagrams.");
      else
        System.out.println(t1+"&"+t2
                           +"areNotanagrams.");
    }
    sc.close();
  }
}
