public class test{
    public static void main(String[] args){
        for(int i=0;i<3;i++){
            new myThread().start();//creating new instance of class and directly calling start() using it without creating an instance variable
        }
    }
}

class myThread extends Thread{
    public void run(){
        try{sleep(1000*10);}catch(InterruptedException e){}
        System.out.println("Thread "+this.threadId()+" is running");
    }
}