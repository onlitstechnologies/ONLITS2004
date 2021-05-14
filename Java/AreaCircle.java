import java.util.Scanner;

public class AreaCircle {
    public static void main(String[] args) {
        final float PI = 3.14F;
        float rad, area;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter radius: ");
        rad = scan.nextFloat();
        area = PI * rad * rad;
        System.out.println("Area is " + area + ".");
        scan.close();
    }    
}
