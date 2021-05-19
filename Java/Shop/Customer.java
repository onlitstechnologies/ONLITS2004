import java.util.Scanner;

class customer {
    String name;
    String contact_no;
    String address;
    String email;

    void menu() {
        int ch;
        Scanner scan = new Scanner(System.in);
        System.out.println();
        System.out.println("-------------- CUSTOMER MENU ------------------");
        System.out.println("1. New customer");
        System.out.println("2. Display customer");
        System.out.println("3. Back");
        System.out.print("Enter choice: ");
        ch = scan.nextInt();
        switch (ch) {
            case 1:
                newCustomer();
                menu(); // Recursion: calling a function within itself
                break;
            case 2:
                displayCustomer();
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

    void newCustomer() {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Name: ");
        name = scan.nextLine();
        System.out.print("Enter Contact No: ");
        contact_no = scan.next();
        System.out.print("Enter Address");
        address = scan.nextLine();
        System.out.print("Enter Email: ");
        email = scan.next();
        scan.close();
    }

    void displayCustomer() {
        System.out.println("------------------ DISPLAY DATA -----------------");
        System.out.println("Name: " + name);
        System.out.println("Contact No:  " + contact_no);
        System.out.println("Address: " + address);
        System.out.println("Email: " + email);
    }
}