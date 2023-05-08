//Find prime numbers within a range
import java.util.Scanner;

public class Q3{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter range: ");
        int n=sc.nextInt();

        System.out.print("Prime numbers: 2 ");
        
        for(int i=3;i<n;i++){
            boolean prime=true;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=false;
                    break;
                }
            }
            if(prime){
                System.out.print(i+" ");
            }
        }
    }
    
}
