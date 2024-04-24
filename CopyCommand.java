import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
class CopyCommand{
    public static void main(String[] args){
        FileInputStream input;
        FileOutputStream output;
        try{
            input=new FileInputStream("source");
            output=new FileOutputStream("destination");
            while(input.available()>0){
                output.write(input.read());
            }
        }
        catch(FileNotFoundException obj){
            System.out.println("File Not Found");
        }
        catch(IOException obj){
            System.out.println("IO Error");
        }
        System.out.println("Successfully Executed");
    }
}
