public class index {
    static int x;//static variable //value depends on class
    int y;//local variable //value depends on object
    public static void main(String[] args) {
        //System.out.println(x);
        //xxx a=new xxx();
        //a.print();

        index b=new index();//instance of class index
        b.y=3;
        b.x=5;
        System.out.println(b.y+" "+x);
        b.y=5;
        b.x=10;

        //if accessing static var from same class then object name may not be included
        System.out.println(b.y+" "+x);

        xxx c=new xxx();
        System.out.println(c.z);//if accessing static var from another class then object name must be included
    }
}
class xxx {
    static int z=13;
}
