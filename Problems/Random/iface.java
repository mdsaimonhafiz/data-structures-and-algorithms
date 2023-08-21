interface Drawable{
  void Draw();
}

class Rect implements Drawable{
  public void Draw(){
    System.out.println("Rect");
  }
}
class Circ implements Drawable{
  public void Draw(){
    System.out.println("Circ");
  }
}
class iface{
  public static void main(String[] args){
    Drawable a=new Circ();
    a.Draw();
  }
}
