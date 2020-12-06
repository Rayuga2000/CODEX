import java.util.*;

public class code{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int sum=0;

        System.out.print("Enter the Range: ");
        int r=in.nextInt();

        for(int i=1;i<=r;i++){
            sum=sum+i;
        }

        System.out.println("Sum of the Digits is: "+sum);
    }
}