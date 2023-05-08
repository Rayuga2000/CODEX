import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter Size: ");
        int size=sc.nextInt();

        try{
            if(size<0){
                throw new NegativeArraySizeException("Array size can't be negative!");
            }
            else{
                int[] arr=new int[size];

                System.out.print("Enter data: ");
                for(int i=0;i<size;i++){
                    arr[i]=sc.nextInt();
                }

                System.out.print("Array:");
                for(int i=0;i<size;i++){
                    System.out.print(" "+arr[i]);
                }
            }
        }catch(NegativeArraySizeException e){
            System.out.print("Error: "+e.getMessage());
        }
    }
}