//refer to an instance variable of the current object
public class ex1{
    int x=10;
    public ex1(int x){
        System.out.println(this.x);//prints the x of current class
        System.out.print(x);//prints the local variable x
    }
    public static void main(String[] args){
        new ex1(20);
    }
}
