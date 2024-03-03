/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

class A
{
    public
    void aClass()
    {
        System.out.print("College Fest of college A"+"\n");
    }
}
class B extends A
{
    public
    void bClass()
    {
        System.out.print("All students are invited"+"\n");
    }
}
class C extends A
{
    public
    void cClass()
    {
        System.out.print("Teachers 0f college A are conducting cultrals"+"\n");
    }
}
class D extends B
{
    public
    void dClass()
    {
        System.out.print("All students must wear ID cards"+"\n");
    }
}
/*class ClassE extends ClassA,ClassB
{
}*/
/*Java doesn't support Multiple Inheritance and Hybrid Inheritance.*/
public class InheritanceTypes
{
    public static void main(String[] args)
    {
        //Simple Inheritance
        System.out.print("Simple Inheritance"+"\n");
        B class1=new B();
        class1.aClass();
        class1.bClass();
        //Hierarchical Inheritance
        System.out.print("\nHierarchical Inheritance"+"\n");
        C class2=new C();
        class1.aClass();
        class1.bClass();
        class2.aClass();
        class2.cClass();
        //Multi-Level Inheritance
        System.out.print("\nMulti-Level Inheritance"+"\n");
        D class3=new D();
        class3.aClass();
        class3.bClass();
        class3.dClass();
        /*Java does not support multiple inheritances to avoid the diamond problem
        which causes complexity and ambiguity. Well we can achieve multiple inheritance by the
        concept of interface.*/
    }
}