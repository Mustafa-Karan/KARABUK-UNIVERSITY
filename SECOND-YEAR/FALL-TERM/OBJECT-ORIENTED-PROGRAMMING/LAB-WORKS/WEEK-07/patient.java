import java.util.Scanner;
public class patient {
    private int patientid;
    private String name;
    patient(String name, int id){
        this.name=name;
        this.patientid=id;
    }
    public String getName(){
        return name;
    }
    public int getid(){
       return patientid;
    }
    public String toString(){
        return "Patient id: "+patientid+"Name: "+name;
    }
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            patient[] p=new patient[4];
            int id;
            String name;
            for(int i=0;i<4;i++){
                System.out.println("Enter Name:");
                name=input.nextLine();
                System.out.println("Enter ID:");
                id=input.nextInt();
                input.nextLine();//to clear buffer
                p[i]=new patient(name,id);

            }
            for(int i=0;i<4;i++){
                System.out.println("PATIENT: "+p[i].toString());
            }
        }
}

