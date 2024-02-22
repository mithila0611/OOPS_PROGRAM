/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;
public class Student{
    private String fullName;
    private int rollNum;
    private double semPercentage;
    private String collegeName;
    private int collegeCode;
    Student(){}
    Student(String name,int roll,double perc,String college,int code){
    fullName=name;
    rollNum=roll;
    semPercentage=perc;
    collegeName=college;
    collegeCode=code;
   
   }
   void display(){
        System.out.println("Name of student is: "+fullName);
        System.out.println("roll number of student is: "+rollNum);
        System.out.println("sem percentage is: "+semPercentage);
        System.out.println("college name is: "+collegeName);
        System.out.println("college code is: "+collegeCode);
    }
    public static void main(String args[])
    {
        String name;
        String college;
        int roll;
        int code;
        double perc;
        Scanner m=new Scanner(System.in);
        System.out.println("Enter name of student: ");
        name=m.nextLine();
        System.out.println("Enter roll number of student: ");
        roll=m.nextInt();
        System.out.println("Enter sem percentage: ");
        perc=m.nextDouble();
        m.nextLine();
        System.out.println("Enter college name: ");
        college=m.nextLine();
        System.out.println("Enter college code : ");
        code=m.nextInt();
        Student s= new Student(name,roll,perc,college,code);
        s.display();
    }
}

