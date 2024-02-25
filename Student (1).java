/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;
public class Student {
    // Class variables
    private String collegeName;
    private int collegeCode;
    private String fullName;
    private double semPercentage;

    // Default constructor
    public Student() {
        this.collegeName = "MVGR";
        this.collegeCode = 33;
    }

    // Parameterized constructor
    public Student(String fullName, double semPercentage) {
        this.collegeName = "MVGR";
        this.collegeCode = 33;
        this.fullName = fullName;
        this.semPercentage = semPercentage;
    }

    // Display method
    public void display() {
        System.out.println("College Name: " + collegeName);
        System.out.println("College Code: " + collegeCode);
        System.out.println("Full Name: " + fullName);
        System.out.println("Semester Percentage: " + semPercentage);
    }

    public static void main(String[] args) {
        String name;
        double perc;
        Scanner m=new Scanner(System.in);
        System.out.println("Enter name of student: ");
        name=m.nextLine();
        //System.out.println("Enter roll number of student: ");
        //roll=m.nextInt();
        System.out.println("Enter sem percentage: ");
        perc=m.nextDouble();
        Student s= new Student(name,perc);
        s.display();
   }
}