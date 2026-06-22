
package assignment4;


import java.util.Scanner;

import assignment4.area.ShapeCalculatorMain;
import assignment4.mobile.MobileMain;
import assignment4.printing.PrinterMain;

public class Main {
	public static void main(String[] args) {

		while (true) {
			System.out.println("Want to know the Questions? and what's the related number, Enter 'Questions': ");
			Scanner input = new Scanner(System.in);
			System.out.print("Enter the Q.no to continue 1 - 3 or 'exit': ");

			String inputString = input.next().toLowerCase();
			if (inputString.equals("exit")) {
				System.out.println("Bye!");
				break;
			}
			switch (inputString) {
			case "1":
				PrinterMain.main();
				break;
			case "2":
				ShapeCalculatorMain.main();
				break;
			case "3":
				MobileMain.main();
				break;
			case "questions":
				questionDetails();
				break;
			default:
				System.out.println("Invalid input");
			}
		}
	}

	static void questionDetails() {

		while (true) {
			Scanner input = new Scanner(System.in);
			System.out.print("Enter 1 - 3 to check Q.no details or 'exit': ");

			String inputStringDetails = input.next().toLowerCase();
			if (inputStringDetails.equals("exit")) {
				break;
			}
			switch (inputStringDetails) {
			case "1":
				System.out.print("Printing Utility ");
				System.out.print("Want to try out this question : yes/no: ");
				String switchInput1 = input.next().toLowerCase();
				if (switchInput1.equals("yes")) {
					PrinterMain.main();
				}
				break;
			case "2":
				System.out.print("Shape Area Calculator ");
				System.out.print("Want to try out this question : yes/no: ");
				String switchInput2 = input.next().toLowerCase();
				if (switchInput2.equals("yes")) {
					ShapeCalculatorMain.main();
				}
				break;
			case "3":
				System.out.print("Mobile Contact Manager ");
				System.out.print("Want to try out this question : yes/no: ");
				String switchInput3 = input.next().toLowerCase();
				if (switchInput3.equals("yes")) {
					MobileMain.main();
				}
				break;
			default:
				System.out.println("Invalid input");
			}
		}
	}
}
