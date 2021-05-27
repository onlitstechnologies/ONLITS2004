import java.util.Scanner;
class Factorial {
	public static void main(String[] args) {
		long n, f=1;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		n = sc.nextInt();
		for(long i=n; i>=1; i--) {
			f = f * i;
		}
		System.out.println("The factorial of " + n + " is " + f + ".");
	}
}

/*
	5! = 5 X 4 X 3 X 2 X 1	=	120
	5! = 1 X 2 X 3 X 4 X 5	=	120
	
	The factorial of 5 is 120.
	
	Critical Thinking
*/
