import java.util.*;

class MyException extends Exception{
    MyException(String msg){
        super(msg);
    }
}
public class code{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);

        System.out.print("Enter the Number: ");
        int n=in.nextInt();

        try{
            if(n<20){
                throw new MyException("Number is not valid");
            }
            else{
                System.out.println("Number is valid");
            }
        }
        catch(MyException e){
            System.out.println(e.getMessage());
        }
    }
}