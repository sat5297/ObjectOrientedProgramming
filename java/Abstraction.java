public class Abstraction {
    
    public static void main(String[] args){
        Audi a1 = new Audi();
        a1.start();
    }

}

class Audi extends Car { 
    @Override
    void start(){
        System.out.println("Audi is starting");
    }

}



abstract class Car {
    String brand;
    int price;

    abstract void start();
}