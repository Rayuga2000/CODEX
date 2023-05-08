//multiple inheritance in java

public class Q6{
    public static void main(String[] args){
        C c=new C(5);
        c.display();
    }
}

abstract class A{
    abstract void display();
}

class C extends A{
    int x;
    
    C(int x){
        this.x=x;
    }

    public void display(){
        System.out.print(x*100);
    }
}