//refer to the current constructor
public class ex2{
    ex2(){
        //calls the constructor with the same name as the current cunstructor
        this(100);
    }
    ex2(int x){
        System.out.println(x);
    }
    public static void main(String[] args){
       new ex2();
    }
}
