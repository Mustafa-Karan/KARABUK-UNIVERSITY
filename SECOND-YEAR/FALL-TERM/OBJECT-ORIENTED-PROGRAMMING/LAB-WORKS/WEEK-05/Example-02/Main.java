public class Main {
    public static void main(String args[]){
        Teacher[] teacherObjectArray = new Teacher[4];//object array creation
        int i=-1;
        for (Branch branch : Branch.values()) {//to iterate enum types classical for loop
            i++;
            teacherObjectArray[i]=new Teacher(i,branch);//why "branch" because it is assigned in for loop
        }
        for(i=0;i<4;i++){
            System.out.println("Teacher id:");
            teacherObjectArray[i].getid();
            System.out.println("Teacher's Branches:");
            teacherObjectArray[i].getbranches();
        }
    }
}