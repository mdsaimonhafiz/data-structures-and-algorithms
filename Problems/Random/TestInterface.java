interface Printable{  
void print();  
}  
interface Showable{  
void print();  
}  
  
class TestInterface implements Printable, Showable{  
public void print(){System.out.println("Hello");}
  
public static void main(String args[]){  
TestInterface obj = new TestInterface();  
obj.print();  
    } 
}  
