public class Duck extends Animal implements Movable,Flyable,Swimmable{
    public void swim(){
        System.out.println("DUCK SWIMMING");
    }
    public void fly(){
        System.out.println("DUCK FLYING");
    }
    public void move(){
        System.out.println("DUCK MOVING");
    }
}