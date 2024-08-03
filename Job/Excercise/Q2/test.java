import java.util.Scanner;

public class test{
    public static int count(String str,String sub_str){
        int i=0,c=0,j=sub_str.length();
        System.out.println("wtf: "+i+' '+c+' '+j);
    
        while(j<=str.length()){
            if(sub_str==str.substring(i,j)){
                c++;
                System.out.print("Why? "+c);
            }
            i++;j++;
        }
    
        return c;
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
    
        System.out.print("Enter String: ");
        String str=sc.nextLine();
    
        System.out.print("Enter Sub-String: ");
        String sub_str=sc.nextLine();

        sc.close();
    
        System.out.print("Count: "+count(str,sub_str));
    }
}