import java.util.Scanner;
import java.lang.Integer;

public class Q2{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String data=new String();

        System.out.print("Enter no. of employee: ");
        int n=sc.nextInt();
        String[] arr=new String[n*4];

        int j=-1;
        for(int i=0;i<n;i++){
            
            System.out.println("Enter (id,name,designation,salary): ");
            data=sc.next();
            String[] ch=data.split(",");
            for(int z=0;z<ch.length;z++){  
                arr[++j]=ch[z];
            }
        }

        j=-1;
        System.out.print("Deatails of Employees having Monthly salary over 20000:(employee_id,employee_name,designation,monthly_salary) : ");
        for(int i=0;i<n;i++){
            new salary(Integer.parseInt(arr[++j]),arr[++j],arr[++j],Integer.parseInt(arr[++j]));
        }
    }
}
class employee{
    int employee_id;
    String employee_name;
}
class salary extends employee{
    String designation;
    int monthly_salary;

    salary(int id,String name,String desig,int sal){
        super.employee_id=id;
        super.employee_name=name;
        designation=desig;
        monthly_salary=sal;

        check(sal);
    }

    void check(int sal){
        if(sal>20000){
            System.out.print(employee_id+" "+employee_name+" "+designation+" "+monthly_salary);
        }
    }
}