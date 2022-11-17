import java.util.*;

public class code{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int i,j,temp;

        System.out.print("Enter the size of Array: ");
        int[] arr=new int[in.nextInt()];

        System.out.print("Enter the Array: ");
        for(i=0;i<arr.length;i++)
        {
            arr[i]=in.nextInt();
        }
        
        System.out.print("Enter how many times to rotate the Array: ");
        int t=in.nextInt();

        for(i=0;i<t;i++)
        {
            temp=arr[0];
            for(j=0;j<arr.length-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[j]=temp;
        }

        System.out.print("The new Array is=>");
        for(i=0;i<arr.length;i++)
        {
            System.out.print(" "+arr[i]);
        }
        System.out.println();
    }
}