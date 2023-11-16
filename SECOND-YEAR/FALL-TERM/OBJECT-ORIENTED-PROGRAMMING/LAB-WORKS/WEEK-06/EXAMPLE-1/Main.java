import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("FOR ALL VALUES PRESS 0 FOR NAME AND LAST NAME PRESS 1 JUST ID PRESS 2, DEFAULT PRESS ANY NUMBER");
        int c=s.nextInt();
        s.nextLine();//TO CLEAR
        switch(c){
            case 0:
                System.out.println("Enter id:");
                int id = s.nextInt();
                s.nextLine(); // ID'yi alırken bir satır atlamak için
                System.out.println("Enter name:");
                String name = s.nextLine();
                System.out.println("Enter lastname:");
                String lastname = s.nextLine();
                System.out.println("Enter age:");
                int age = s.nextInt();
                person p = new person(id, name, lastname, age);
                System.out.println("ID: 3" +p.id);
                System.out.println("NAME: "+p.name);
                System.out.println("SURNNAME: "+p.lastname);
                System.out.println("AGE: "+p.age);
                break;
            case 1:
                System.out.println("Enter name:");
                name = s.nextLine();
                System.out.println("Enter lastname:");
                lastname = s.nextLine();
                p = new person(name, lastname);
               System.out.println("ID: "+p.id);
                System.out.println("NAME: "+p.name);
                System.out.println("SURNNAME: "+p.lastname);
                System.out.println("AGE: "+p.age);
                break;
            case 2:
                System.out.println("Enter id:");
                id = s.nextInt();
                p = new person(id);
                System.out.println("ID: "+p.id);
                System.out.println("NAME: "+p.name);
                System.out.println("SURNNAME: "+p.lastname);
                System.out.println("AGE: "+p.age);
                break;
            default:
                p = new person();
                System.out.println("ID: "+p.id);
                System.out.println("NAME: "+p.name);
                System.out.println("SURNNAME: "+p.lastname);
                System.out.println("AGE: "+p.age);
                break;
        }
    }
}
class person{
    public int id=0;
    public String name;
    public String lastname;
    public int age;
    public person(int id,String name, String lastname, int age){//constructor
        this.id=id;
        this.name=name;
        this.lastname=lastname;
        this.age=age;
    }
    public person(String name,String lastname){
        this(0,name,lastname,0);
    }
    public person(int id){
        this(id,"Defaullt name","Default last name",0);
    }
    public person(){
        this(0,"Defaullt name","Default last name",0);
        id++;
    }
}