public class ThreadDemo extends Thread{
    String name;
    ThreadDemo(String name){
        this.name=name;
    }
    public void run()
    {
        System.out.println("Hello "+name);
    }
    public static void main(String[] args)
    {
        ThreadDemo t1=new ThreadDemo("Mithila");
        ThreadDemo t2=new ThreadDemo("Dola");
        t1.start();
        t2.start();
    }
}
