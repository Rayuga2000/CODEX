import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the Range: ");
        int n=sc.nextInt();

        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(j==1){
                    System.out.print(j+" ");
                }
                else{
                    System.out.print(j%2+" ");
                }
            }
            System.out.println();
        }
    }
}