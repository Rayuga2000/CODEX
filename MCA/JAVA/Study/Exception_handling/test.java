import java.lang.*;
import java.io.*;
public class test{
    public static void main(String[] args){
        int size=Integer.parseInt(args[0]);
        int index=Integer.parseInt(args[1]);

        try{
            if(size<0){
                throw new IllegalArgumentException("Array size can't be negative");
            }
            else{
                int[] arr={1,2,3};

                System.out.println("Enter index: "+index);
                System.out.println("Value: "+arr[index]);

            }
        }catch(IllegalArgumentException e){
            System.out.print("Error: "+e.getMessage());
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.print("Wait: "+e.getMessage());
        }
    }
}