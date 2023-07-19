public class test {
    public static void main(String[] args) {
        try{
            int x=15/0;
            System.out.println(x);
        }
        catch(ArithmeticException e){
            System.out.println("Error: "+e.getMessage());
        }
        System.out.println("Program Executed Successfully");
    }
}