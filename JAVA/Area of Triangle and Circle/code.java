import java.util.*;

abstract class shape{
    abstract void area();
}
class triangle extends shape{
    int h,b;
    triangle(int h,int b){
        this.h=h;
        this.b=b;
    }
    @Override
    void area(){
        System.out.println("Area of the Triangle is=> "+(h*b)/2);
    }
}
class circle extends shape{
    int r;
    circle(int r){
        this.r=r;
    }
    @Override
    void area(){
        System.out.println("Area of the Circle is=> "+Math.PI*r*r);
    }
}

public class code{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        while(true){
            System.out.println();
            System.out.println("#######Triangle(1)#####");
            System.out.println("#######Circle(2)#######");
            System.out.print("Enter your choice: ");
            int ch=in.nextInt();

            switch(ch){
                case 1:
                    System.out.print("Enter the Height and Base: ");
                    triangle t=new triangle(in.nextInt(),in.nextInt());
                    t.area();
                    break;
                case 2:
                    System.out.print("Enter the Radius: ");
                    circle c=new circle(in.nextInt());
                    c.area();
                    break;
            
                default:
                    System.out.println("Something went wrong....");
                    break;
            }
        }
    }
}