//Find prime numbers within a range of values
public class Q3{
    public static void main(String[] args){
        System.out.print("Prime numbers: 2 ");
        
        for(int i=3;i<Integer.parseInt(args[0]);i++){
            boolean prime=true;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=false;
                    break;
                }
            }
            if(prime){
                System.out.print(i+" ");
            }
        }
    }
    
}
