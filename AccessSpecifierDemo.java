class AccessSpecifierDemo{
    private int priVar;
    protected int proVar;
    public int pubVar;
    public void setVar(int priValue,int proValue, int pubValue){
        priVar=priValue;
        proVar=proValue;
        pubVar=pubValue; 
    }
    public int getPriVar()
    { 
        return priVar;
    }
    public int getProVar()
    {
        return proVar;
    }
    public int getPubVar()
    {
        return pubVar;
    }
}
class AbsEncapJava
{
    public static void main(String[] args){
        AccessSpecifierDemo obj = new AccessSpecifierDemo();
        System.out.println("Get and set method values");
        obj.setVar(7,4,2);
        System.out.println("Private Value : "+obj.getPriVar());
        System.out.println("Protected Value : "+obj.getProVar());
        System.out.println("Public Valu : "+obj.getPubVar());
    }
}
