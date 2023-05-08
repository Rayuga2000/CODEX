//multiple inheritance in java

public class Q5{
    public static void main(String[] args){
        C c=new C(5);
        c.add();
        c.show();
    }
}

interface A{
    void add();
}
interface B{
    void show();
}

class C implements A,B{
    int x;
    
    C(int x){
        this.x=x;
    }

    public void add(){
        x*=100;
    }

    public void show(){
        System.out.print(x);
    }
}