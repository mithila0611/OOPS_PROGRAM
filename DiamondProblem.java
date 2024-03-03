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
        System.out.print("I am an Animal"+"\n");
    }
}
class B extends A
{
    public
    void bClass()
    {
    System.out.print("I am a Herbivore"+"\n");
    }
}
class C extends A
{
    public
    void cClass()
    {
        System.out.print("I am a cow"+"\n");
    }
}
/*class ClassD extends ClassA,ClassB
{
}*/
//Here the actual problem occurs where the support of Multiple Inheritance in java iseliminated.
public class DiamondProblem
{
    public static void main(String[] args)
    {
        System.out.print("Diamond Problem"+"\n");
        B class1=new B();
        C class2=new C();
        class1.aClass();
        class1.bClass();
        class2.aClass();
        class2.cClass();
/*We can access upto half part of the diamond problem. The other half includes the
multiple Inheritance.
Java does not support multiple inheritances to avoid the diamond problem which causes
complexity and ambiguity.
Well we can achieve multiple inheritance by the concept of interface.*/
    }
}