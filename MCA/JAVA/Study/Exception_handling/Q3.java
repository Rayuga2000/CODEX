public class Q1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        try{
            int[] arr = {1, 2, 3};
            System.out.println(arr[10]);
        }catch (Exception e){
            System.out.println("Index 10 not present");
        }finally{
            System.out.println("Array has only 3 elements");
        }          
    }
}