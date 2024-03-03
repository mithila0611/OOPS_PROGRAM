/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

class principal
{
    public
    void holiday()
    {
        System.out.print("Tomorrow is holiday\n");
    }
}
class student extends principal
{
    public
    void rest()
    {
        System.out.print("Taking rest\n");
    }
}
public class SimpleInheritance
{
    public static void main(String[] args)
    {
        student obj = new student();
        obj.holiday();
        obj.rest();
    }
}