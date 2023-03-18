public class alt{
    public static void main(String[] args){
        int[] num=new int[args.length];
        int sum=0;

        for(int i=0;i<args.length;i++){
            num[i]=Integer.parseInt(args[i]);
            sum+=num[i];
        }

        System.out.print("Array: ");
        for(int i=0;i<num.length;i++){
            System.out.print(num[i]+" ");
        }
        System.out.print("\nSum: "+sum);
    }
}
