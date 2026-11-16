public class TestAnimals {
    public static void main(String[] args) {
        Fish d = new Fish();
        Cat c = new Cat("Fluffy");
        Animal a = new Fish();
        Animal e = new Spider();
        Pet p = new Cat();

        System.out.println("Fish:");
        d.eat();
        d.walk();

        System.out.println("\nCat:");
        c.eat();
        c.walk();
        p.play();

        System.out.println("\nAnimal (fish):");
        a.eat();
        a.walk();

        System.out.println("\nAnimal (spider):");
        e.eat();
        e.walk();
    }
}
