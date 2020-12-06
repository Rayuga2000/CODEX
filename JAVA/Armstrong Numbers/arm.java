import java.util.*;
import java.lang.*;

class Armstrong{
    static int temp,r,sum=0;

    public int CheckArmstrong(int n){
        temp=n;

        while(n>0){
            r=n%10;
            sum=sum+(int)Math.pow(r,3);
            n=n/10;
        }

        return(sum);
    }
}
public class arm{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);

        System.out.print("Enter the Number: ");
        int n=in.nextInt();

        Armstrong a=new Armstrong();

        if(a.CheckArmstrong(n)==n){
            System.out.println("The Number is Armstrong");
        }
        else{
            System.out.println("The Number is not Armstrong");
        }
    }
}
