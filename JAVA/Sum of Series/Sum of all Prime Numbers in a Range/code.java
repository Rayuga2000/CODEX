import java.util.*;

class Prime{
    public static boolean checkPrime(int n){
        if(n==1){
            return(false);//return false when number is 1
        }
        else if(n==2){
            return(true);
        }
        else{
            for(int i=2;i<n;i++){
                if(n%i==0){
                    return(false);//return false when number is divisible by any other number
                }
            }
        }

        return(true);//return true by default
    }
}
public class code{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        Prime p=new Prime();
        int sum=0;

        System.out.print("Enter the Range: ");
        int r=in.nextInt();

        for(int i=1;i<=r;i++){
            if(p.checkPrime(i)){
                sum=sum+i;
            }
        }

        System.out.println("Sum is=> "+sum);
    }
}