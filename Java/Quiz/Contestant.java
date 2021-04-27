import java.util.Scanner;

class Contestant {
	private int cid;
	private String name;
	private String dob;
	private char gender;

	public void newContestant() {
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter contestant id: ");
		cid = scan.nextInt();
		System.out.print("Enter Name: ");
		name = scan.next();
		System.out.print("Enter date of birth: ");
		dob = scan.next();
		System.out.print("Enter gender: ");
		gender = scan.next().charAt(0);
	}
	public void editContestant(){
	
	}
	public void completeList(){
	
	}
}
