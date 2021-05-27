import java.util.Scanner;

class StockItem {
    String name;
    String unit;
    String category;
    float std_cost;
    float std_price;

    void menu() {
        Scanner scan = new Scanner(System.in);
        int ch;
        System.out.println();
        System.out.print("----------------- STOCK ITEM MENU ----------------");
        System.out.print("1. New stock item");
        System.out.print("2. Display stock item");
        System.out.print("3. Back");
        System.out.print("Enter choice: ");
        ch = scan.nextInt();
        switch (ch) {
            case 1:
                new_item();
                menu();
                break;
            case 2:
                display_item();
                menu();
                break;
            case 3:
                break;
            default:
                System.out.print("Invalid option!");
                menu();
        }
        scan.close();
    }

    void new_item() {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Name: ");
        name = scan.next();
        System.out.print("Enter Unit: ");
        unit = scan.next();
        System.out.print("Enter Category: ");
        category = scan.next();
        System.out.print("Enter Standard Cost: ");
        std_cost = scan.nextFloat();
        System.out.print("Enter Standard Price: ");
        std_price = scan.nextFloat();
        scan.close();
    }

    void display_item() {
        System.out.println("-------- DATA DISPLAY ----------");
        System.out.println("Enter Name: " + name);
        System.out.println("Enter Unit: " + unit);
        System.out.println("Enter Category: " + category);
        System.out.println("Enter Standard Cost: " + std_cost);
        System.out.println("Enter Standard Price: " + std_price);
    }
}