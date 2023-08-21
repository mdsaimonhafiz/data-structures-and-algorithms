public class New{
  public static void main(String[] args){
    try{
      String r = null;
      System.out.println(r.length());
    }
    finally{
    System.out.println("last - out of try block");
    }
    System.out.println("after finally executes");
  }
}
