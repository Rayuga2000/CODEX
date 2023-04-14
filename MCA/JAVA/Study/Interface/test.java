public class test{
    public static void main(String[] args){
        z z=new z();
        z.xxx();
    }
}
interface x{
    void xxx();
}
abstract class y implements x{
    void print(){
        System.out.println("Hello");
    }
}
class z extends y{
    z(){
        super.print();
    }
    public void xxx(){
        System.out.println("world");
    }
}