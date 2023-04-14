import java.util.Scanner;

public class Q3{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter range: ");
        int n=sc.nextInt();

        int prev1=0,prev2=1,next;

        System.out.print("Fibonacci series: "+prev1+" "+prev2+" ");
        for(int i=0;i<n-2;i++){
            next=prev1+prev2;
            System.out.print(next+" ");
            prev1=prev2;
            prev2=next;
        }
    }
}
