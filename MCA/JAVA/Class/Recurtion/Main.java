import java.lang.Integer;

public class Main{
    static int fact(int n){
        int f=1;

        if(n>1){
            f=n*fact(n-1);
        }

        return f;
    }
    public static void main(String[] args){
        System.out.print("Factorial of "+Integer.parseInt(args[0])+" : "+fact(Integer.parseInt(args[0])));
    }
}