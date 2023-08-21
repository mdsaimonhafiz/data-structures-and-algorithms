public class virtual{
  public static void main(String[] args){
    parent a = new child();
    a.call();
  }
}
class parent{
  public void call(){
    System.out.println("parent call");
  }
}

class child extends parent{
  public void call(){
    System.out.println("child call");
  }
}
