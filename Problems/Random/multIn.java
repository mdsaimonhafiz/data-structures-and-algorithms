interface Printable{
  void print();
}

interface Showable{
  void print();
}

public class multiIn implements Showable, Printable{
  void print(){
    System.out.println("print");
  }
  public static void main(String[] args){
    multIn a = new multIn();
    a.print();
  }
}
