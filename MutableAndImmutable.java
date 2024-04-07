class Immutable{
    private final String a="MithilaDola";
    Immutable(String a){
    }
    void display(){
        System.out.println("Name:"+a);
    }
}
public class MutableAndImmutable{
    public static void main (String[] args) {
        StringBuilder obj = new StringBuilder("Dola");
        obj.append(" ");
        obj.append("Mithila");
        String a=obj.toString();
        System.out.println("The final modified string : "+a);
        Immutable obj1=new Immutable("Dead");
        obj1.display();
    }
}
