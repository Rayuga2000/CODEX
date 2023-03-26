//refer to an instance variable of the current object
public class ex2{
    public ex2(){
        //calls the constructor with the same name as the current cunstructor
        this(100);
    }
    public ex2(int x){
        System.out.println(x);
    }
    public static void main(String[] args){
       new ex2();
    }
}
