public class WorkerClass {
    private int salary;
    private String name;
    private static int counter=0;
    public WorkerClass() {//Constructor
        counter++;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setSalary(int salary){
        this.salary=salary;
    }
    public static void descent(){
        counter--;
    }
    public static void ascent(){
        counter++;
    }
    public void seeEveythinhg(){
        System.out.println("NAME:"+name);
        System.out.println("SALARY:"+salary);
        System.out.println("COUNTER:"+counter);
    }
    public static void seecounter(){
        System.out.println(WorkerClass.counter);
    }
}