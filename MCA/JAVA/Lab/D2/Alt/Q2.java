//Find the maximum and minimum element of an array
public class Q2{
    public static void main(String[] args){
        int sum=0,min=0,max=0;
        int[] num=new int[args.length];

        System.out.print("Array: ");
        for(int i=0;i<args.length;i++){
            num[i]=Integer.parseInt(args[i]);
            System.out.print(num[i]+" ");
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
