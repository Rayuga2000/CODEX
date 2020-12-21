import java.util.*;

public class code{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);

        System.out.print("Enter the range: ");
        int[] arr=new int[in.nextInt()];

        System.out.print("Enter the Numbers: ");
        for(int i=0;i<arr.length;i++){
            arr[i]=in.nextInt();
        }

        int min=arr[0];
        for(int i=0;i<arr.length;i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }

        System.out.println("The Smallest Number is=> "+min);
    }
}