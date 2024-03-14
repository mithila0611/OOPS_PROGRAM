
class MethodORJava{
    int add(int a,int b){
        return (a+b);
    }
    float add(float a,float b)
    {
        return (a+b);
    }
    public static void main(String[] args){
        MethodORJava obj = new MethodORJava();
        System.out.println("Result1 : "+obj.add(2,3));
        System.out.println("Result2 : "+obj.add(2.3f,3.6f));
    }
}
