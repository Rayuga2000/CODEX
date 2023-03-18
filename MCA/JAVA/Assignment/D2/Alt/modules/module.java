package modules;

public class module{
    public void loop(int i,int r){
        for(int j=1;j<=r;j++){
            if(j==1){
                System.out.print(j+"");
            }
            else{
                System.out.print(j%2+"");
            }
        }
        System.out.println();
    }
}