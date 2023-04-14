import java.util.Scanner;

public class Q2{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int j=0;

        System.out.print("Enter Range: ");
        int n=sc.nextInt();

        for(int i=0;i<n;i++){
            for(int k=0;k<=i;k++){
                System.out.print(" "+j++);
            }
            System.out.println();
        }
    }
}
