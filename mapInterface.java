import java.util.HashMap;
import java.util.Map;
public class mapInterface {
    public static void main(String[] args) {
        Map<String,Integer> obj=new HashMap<String,Integer>();
        obj.put("mithila", 1);
        obj.put("dola", 2);
        obj.put("middu", 3);
        obj.put("dreamer", 4);
        for(Map.Entry<String,Integer> m:obj.entrySet()){
            System.out.println(m.getKey()+" = "+m.getValue());
        }
    }
}
