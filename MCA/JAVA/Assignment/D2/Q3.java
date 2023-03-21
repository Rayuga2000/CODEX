import java.util.Scanner;
public class Q3{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int r=1;

        System.out.print("Enter range: ");
        int n=sc.nextInt();

        for(int i=1;i<n;i++){
            System.out.print(" ".repeat(n-i)+" ");
            for(int j=1;j<=r;j++){
                if(j==1){
                    System.out.print(j+"");
                }
                else{
                    System.out.print(j%2+"");
                }
            }
            r+=2;
            System.out.println();
        }
    }
}