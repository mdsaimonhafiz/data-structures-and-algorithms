public class ct{
  public static void main(String[] args){
    System.out.println("Hi there");
    ClassTest a = new ClassTest(5,6);
    a.show_nums();
    Object o = a;
    System.out.println(o.equals(a));
  }
}
class ClassTest{
  public int ct1;
  public int ct2;
  ClassTest(int a,int b){
    ct1=a;
    ct2=b;
  }
  void show_nums(){
    System.out.println(ct1 + " " +ct2);
  }
}
