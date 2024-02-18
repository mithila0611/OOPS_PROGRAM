/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
//import Section
import java.lang.*;
import java.util.Scanner;
//class section
public class Hello_username {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s;
        System.out.println("Enter username : ");
        s=input.nextLine();
        System.out.println("Hello "+s);
    }
}