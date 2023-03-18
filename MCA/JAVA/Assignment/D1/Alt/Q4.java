//Sum of the digits of a given number

public class Q4{
    public static void main(String[] args){
        int num=Integer.parseInt(args[0]),sum=0;
        System.out.println("Number: "+num);

        while(num>0){
            sum+=num%10;
            num/=10;
        }
        System.out.print("Sum of Digits: "+sum);
    }
}
