public class test{
    public static void main(String[] args) {
        dog d=new dog();
        cat c=new cat();
        d.sound();
        c.sound();
    }
}

abstract class animal{
    abstract void sound();
}
class dog extends animal{
    void sound(){
        System.out.println("Bark");
    }
}
class cat extends animal{
    void sound(){
        System.out.println("Meaw");
    }
}
