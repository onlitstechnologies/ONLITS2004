import java.util.Scanner;
class FactorialRecursion {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, f;
		System.out.print("Enter a number: ");
		n = sc.nextInt();

		//Method 1
		//FactorialRecursion ob = new FactorialRecursion();
		//f = ob.factorial(n);

		//Method 2
		f = factorial(n);
		System.out.println("The factorial of " + n + " is " + f + ".");
	}
	
	static int factorial(int n)
	{
		int f;
		if(n==0)
			return 1;
			
		f = n * factorial(n-1);
		return f;
	}
}

/*
	In C we had static variable
	
*/
