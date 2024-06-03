class Student{
  int id;
  String name;
  double score;
}
public class main{
  public static void main(String[] args){
    Student a=new Student();
    a.id=3;
    a.name="AAA";
    a.score=40;

  Student b= new Student();
    b.id=5;
    b.name="BBB";
    b.score=50.4;

  System.out.println(a.id+" "+a.name+" "+a.score);
  System.out.println(b.id+" "+b.name+" "+b.score);
  }
}
