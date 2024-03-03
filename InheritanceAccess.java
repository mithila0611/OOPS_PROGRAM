/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

class student
 {
    public
    String fullName="mithila";
    protected 
    int semPercentage=9;
    private
    double phn_no=760105;
    public 
    double getphn()
    {
        return phn_no;
    }
}
//we cannot access private,protected variables
public class InheritanceAccess
{
    public static void main(String args[])
    {
       {
            student m=new student();
            System.out.print("Name : "+m.fullName+"\n");
            System.out.print("phone number : "+m.getphn()+"\n");
            System.out.print("Sem Percentage : "+m.semPercentage+"\n");
        }
    }
}
