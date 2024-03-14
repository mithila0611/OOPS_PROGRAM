class parent{
    void displayMSG(){
        System.out.println("Hello! Welcome to programming");
    }
}
class child extends parent{
    void displayMSG(){
        System.out.println("Trespassers will be prosecuted");
    }
}
class MethodOLInheriJava{
    public static void main (String[] args) {
        child obj = new child();
        obj.displayMSG();
    }
}
