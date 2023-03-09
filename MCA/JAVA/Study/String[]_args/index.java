public class xxx {
    public static void main(String[] s) {
        System.out.println("The number of command line arguments is: " + s.length);
        for (int i = 0; i < s.length; i++) {
            System.out.println("Argument " + i + " is: " + s[i]);
        }
        System.out.println(s.getClass());
    }
}