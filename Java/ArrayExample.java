import java.util.Scanner;
class ArrayExample {
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int[] nos = new int[5];
		System.out.println("Please enter 5 integers below:");
		for(int i=0; i<5; i++)
		{
			nos[i] = scan.nextInt();
		}
		System.out.println("The integers entered are as follows:");
		for(int i=0; i<5; i++)
		{
			System.out.println(nos[i]);
		}
	}
}
