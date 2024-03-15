public class MethodOLJava{
    public int add(int a,int b){
        return a+b;
    }
    public int add(int a,int b,int c){
        return a+b+c;
    }
    public int add(int a,int b,int c,int d){
        return a+b+c+d;
    }
    public static void main(String[] args) {
        MethodOLJava obj=new MethodOLJava();
        System.out.println("Result1 : "+obj.add(2,3));
        System.out.println("Result2 : "+obj.add(2,3,4));
        System.out.println("Result3 : "+obj.add(2,3,4,5));
    }
}
