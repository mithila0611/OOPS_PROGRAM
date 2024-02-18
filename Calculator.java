/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
//import section
import java.lang.*;
import java.util.Scanner; 
//class section
public class Calculator { 
    public static void main(String[] args) { 
        Scanner input = new Scanner(System.in); 
        float num1,num2; 
        System.out.println("Enter number1 : "); 
        num1=input.nextFloat(); 
        System.out.println("Enter number2 : "); 
        num2=input.nextFloat(); 
        System.out.println("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modular Division\n"); 
        int choice; 
        System.out.print("Enter choice : "); 
        choice=input.nextInt(); 
        if(choice==1) { 
            System.out.print(num1+"+"+num2+"="+(num1+num2));
        }
        else if(choice==2) {
            System.out.println(num1+"-"+num2+"="+(num1+num2));
        }
        else if(choice==3) {
		    System.out.println(num1+"*"+num2+"="+(num1*num2));
        }
        else if(choice==4) {
		    System.out.println(num1+"/"+num2+"="+(num1/num2));
        }
        else if(choice==5) {
		    System.out.println(num1+"%"+num2+"="+(num1%num2));
        }
        else {
		    System.out.println("Invalid input operation");
        }
    }
}
