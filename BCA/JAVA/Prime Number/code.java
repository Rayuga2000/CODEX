import java.util.*;

public class code{
    public static boolean prime(int n){
        if(n==0 || n==1){
            return(false);
        }
        else{
            for(int i=2;i<n;i++){
                if(n%i==0){
                    return(false);
                }
            }
        }

        return(true);
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        System.out.print("Enter the Number: ");
        int n=in.nextInt();

        if(prime(n)){
            System.out.println("The Number is Prime Number");
        }
        else{
            System.out.println("The Number is not Prime Number");
        }
        in.close();
    }
}