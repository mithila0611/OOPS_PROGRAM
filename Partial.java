import java.util.Scanner;
abstract class pureAbs{
    public void ExamPreparation(){
        System.out.println("Nyt Out");
    }
    abstract void name(String name);
    abstract void rollNo(int no);
}
class student extends pureAbs{
    public void name(String name){
        System.out.println("Student name : "+name);
    }
    public void rollNo(int no){
        System.out.println("Roll number : "+no);
    }
}
public class Partial{
    public static void main(String args[]){
        student obj=new student();
        obj.name("Mithila");
        obj.rollNo(44);
        obj.ExamPreparation();
    }
}
