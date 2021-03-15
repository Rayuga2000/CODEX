import java.util.*;

public class QSrt{
    public int part(int arr[],int start,int end){
        int pivot=arr[start],lb=start;

        while(start<end){
            while(arr[start]<=pivot){
                start++;
            }
            while(arr[end]>pivot){
                end--;
            }
            if(start<end){
                int temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
            }
        }

        int temp=arr[lb];
        arr[lb]=arr[end];
        arr[end]=temp;

        return end;
    }
    public void sort(int arr[],int lb,int ub){
        if(lb<ub){
            int pos=part(arr,lb,ub);
            sort(arr,lb,pos-1);
            sort(arr,pos+1,ub);
        }
    }
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        QSrt qs=new QSrt();

        System.out.print("Enter the size: ");
        int[] arr=new int[in.nextInt()];

        System.out.print("Enter the Array: ");
        for(int i=0;i<arr.length;i++){
            arr[i]=in.nextInt();
        }

        qs.sort(arr,0,arr.length-1);
        System.out.println(Arrays.toString(arr));
    }
}