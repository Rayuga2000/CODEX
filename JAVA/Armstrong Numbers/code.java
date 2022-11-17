import java.util.*;
import java.lang.*;

public class code{
    static void Armstrong(int n){
        int sum=0,r,temp=n;

        while(n>0)
        {
            r=n%10;
            sum=sum+(int)Math.pow(r,3);
            n=n/10;
        }

        if(sum==temp){
            System.out.println("The Number is Armstrong");
        }
        else{
            System.out.println("The Number is not Armstrong");
        }
    }

    public static void main(String args[]){
        Scanner in=new Scanner(System.in);

        System.out.print("Enter the Number: ");
        int n=in.nextInt();

        Armstrong(n);
    }
}