//Find the maximum and minimum element of an array
import java.util.Scanner;

public class Q2{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sum=0,min=0,max=0;

        System.out.print("Enter size of array: ");
        int n=sc.nextInt();
        int[] num=new int[n];

        System.out.print("Enter data: ");
        for(int i=0;i<n;i++){
            num[i]=sc.nextInt();
            if(i==0){
                min=num[i];
                max=num[i];
            }
            else if(min>num[i]){
                min=num[i];
            }
            else if(max<num[i]){
                max=num[i];
            }
        }
        System.out.print("\nMin: "+min+"\nMax: "+max);
    }
}
