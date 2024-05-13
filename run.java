public class main{
static int CalcScore(String t){
  int score =0;run=0;
  for(int i=0;i<t.length();i++){
    if(t.charAt(i)=='X')
      run=0;
    else{
      run=run+1;
      score=score+run;
    }
  }
  return score;
}
  public static void main(String[] args){
    Scanner key=new Scanner(System.in);
    int n=key.nextInt();
    for(int i=0;i<n;i++)

    System.out.println(CalcScore(key.next()));
    key.close();
  }
}
