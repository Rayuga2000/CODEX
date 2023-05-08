public class Q4{
    static void x()throws ArithmeticException{
        int x=10/0;

        System.out.println(x);
    }
    public static void main(String[] args){
        try{
            x();
        }catch(Exception e){
            System.out.println("Error: Divide by 0");
        }
    }
}