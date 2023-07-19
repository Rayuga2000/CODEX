public class test{
    public static void main(String[] args){
        new car();
        new car("Toyota","X79");
    }
}
class car{
    String Name,Model;

    car(){
        this.Name="Unknown";
        this.Model="Unknown";

        System.out.println(Name+" "+Model);
    }

    car(String x,String y){
        this.Name=x;
        this.Model=y;
        
        System.out.println(Name+" "+Model);
    }
}