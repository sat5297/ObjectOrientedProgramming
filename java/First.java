import java.util.*;

class Person{
    String name;
    int age;

    public Person(String name, int age){
        this.age = age;
        this.name = name;
    }

    void walk(){
        System.out.println("Guy is walking");
    }

    void eat(){
        System.out.println("Guy is eating.");
    }

    void work(){
        System.out.println("Doing his work.");
    }
}

class Developer extends Person{

    public Developer(String name, int age){
        super(name, age);
    }

    public void work(){
        System.out.println("Developer is working.");
    }
}

public class First{
    public static void main(String[] args){
        Developer d = new Developer("Shakti",23);
        d.eat();
        d.walk();
        d.work();
    }
}

