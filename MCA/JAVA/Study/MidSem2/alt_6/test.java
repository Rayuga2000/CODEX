//refer to an instance variable of the current object
public class test{
    public static void main(String[] args){
        try{
            System.out.println("Statement 1");
            System.out.println("Statement 2 "+10/0);            
            System.out.println("Statement 3");
        }catch(Exception e){

        }
        finally{
            System.out.println("Statement 4");
        }
        System.out.println("Statement 5");
    }
}
