public class upcasting{
  public static void main(String[] args){
    Bangladesh a;
    a=new Dhaka();
    //System.out.println(a.p);
    a.roar();
    a=new Dhaka();
    //a.roar();
    a=new Cumilla();
    //a.roar();
  }
}

class Bangladesh{
  void roar(){
    System.out.println(p);
  }
  int p=16;
}
class Dhaka extends Bangladesh{
  void roar(){
    System.out.println(p);
  }
 int p=1;
}
class Rajshahi extends Bangladesh{
  void roar(){
    System.out.println("Rajshahi");
  }
}
class Cumilla extends Bangladesh{
  void roar(){
    System.out.println("Cumilla");
  }
}
