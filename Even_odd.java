/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
//import section
import java.lang.*;
import java.util.Scanner;
//class section
public class Even_odd {
	public static void main(String[] args) {
		int num;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the number : ");
		num=input.nextInt();
		if(num>0) {
		    if(num%2==0) {
		        System.out.println(num+" "+"is an even number");
		    }
		    else {
		        System.out.println(num+" "+"is an odd number");
		    }
		}
		else{
		    System.out.println("Invalid input");
		}
	}
}