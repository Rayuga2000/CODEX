public class ex1{
    public static void main(String[] args){
        test t=new test();
        //to call instnace ar we use class obj,to call static var we can use both obj and class name
        System.out.println(++t.x+" "+test.y);
    }
}
public class test{
    int x=10;//instance var
    static int y=100;//static var
}