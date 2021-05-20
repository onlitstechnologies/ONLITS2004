import java.util.Scanner;

public class Start {
    public static void main(String[] args) {
        int ch;
        StockItem s = new StockItem(); //object reference
        Customer c = new Customer();  //object reference
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println();
            System.out.println("-------------- MAIN MENU ---------------------");
            System.out.println("1. Stock Item");
            System.out.println("2. Customer");
            System.out.println("3. Exit");
            System.out.println("Enter choice: ");
            ch = sc.nextInt();
            switch (ch) {
                case 1:
                    s.menu();
                    break;
                case 2:
                    c.menu();
                    break;
                case 3:
                    break;
                default:
                    break;
            }
        } while (true);
        //scan.close();
    }
}