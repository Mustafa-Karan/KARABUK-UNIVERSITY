public class main {
    public static void main(String[] args){
        Duck duck=new Duck();
        Cat cat=new Cat();
        Eagle eagle=new Eagle();
        Animal[] animals=new Animal[]{duck,cat,eagle};
        for(Animal a: animals){
            if(a instanceof Movable){
                ((Movable)a).move();
            }
            if(a instanceof Flyable){
                ((Flyable)a).fly();
            }
            if(a instanceof Swimmable){
                ((Swimmable)a).swim();
            }
        }
    }
}
