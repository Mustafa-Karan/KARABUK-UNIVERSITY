public class worker {
    String name;
    int socialSecurityNumber;
    float wage;
    int workingHours;

    public void displayInfo(){

        System.out.printf("Name: %s\n",name);
        System.out.printf("Social Security Number: %d\n",socialSecurityNumber);
    }

    public void displaySalary(){
        System.out.printf("Salary: %f",wage*workingHours);
    }
    public static void main(String[] args){
    worker w = new worker();

    w.name="Mustafa";
    w.socialSecurityNumber=23102052;
    w.wage=3000;
    w.workingHours=40;


    w.displayInfo();
    w.displaySalary();
    }





}
