/*Have the function ArrayChallenge (arr) take the array of positive integers stored in arr
and return the length of the longest increasing subsequence (LIS). A LIS is a subset of the original list 
where the numbers are in sorted order, from lowest to highest, and are in increasing order. 
The sequence does not need to be contiguous or unique, and there can be several different subsequences. 
For example: if arr is [4, 3, 5, 1, 6] then a possible LIS is [3, 5, 6], and another is [1, 6]. 
For this input, your program should return 3 because that is the length of the 
longest increasing subsequence */
import java.util.*;

public class test{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter Length: ");
        int n=sc.nextInt();

        int[] arr=new int[n];

        System.out.print("Enter Array: ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int[] LIS=new int[n];
        /*stream converts an array or any iterable into a stream of integers.
        A stream is like a sequence of elements that can be processed one by one.*/
        LIS=Arrays.stream(LIS).map(x->0).toArray();
        

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    LIS[i]+=1;
                }
            }
        }
        /*we can use max() in Stream just like python lists*/
        System.out.println("LIS: "+(Arrays.stream(LIS).max().getAsInt()+1));
    }
}