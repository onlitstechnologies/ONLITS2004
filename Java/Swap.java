public class Swap {
    public static void main(String[] args) {
        int a=10, b=20;
        System.out.println("Before swapping: a = " + a + " and b = " + b);
        int c = a;
        a = b;
        b = c;
        System.out.println("After swapping: a = " + a + " and b = " + b);
    }
}