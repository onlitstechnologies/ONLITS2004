import java.util.Scanner;
class EvenOdd {
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		n = sc.nextInt();
		if(n%2==0) {
			System.out.println(n + " is an even number.");
		}
		else {
			System.out.println(n + " is an odd number.");
		}
	}
}
