import modules.module;
import java.lang.*;

public class Q3{
    public static void main(String[] args){
        int r=1,n=Integer.parseInt(args[0]);
        module x=new module();

        for(int i=1;i<n;i++){
            System.out.print(" ".repeat(n-i));
            x.loop(i,r);
            r+=2;
        }
    }
}