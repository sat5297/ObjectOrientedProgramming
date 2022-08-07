public class Interface implements Car {
    public static void main(String[] args){
        Interface i1 = new Interface();
        i1.start();
    }

    @Override
    public void start(){
        System.out.println("Car is starting.");
    }
}

interface Car{
    void start();
}