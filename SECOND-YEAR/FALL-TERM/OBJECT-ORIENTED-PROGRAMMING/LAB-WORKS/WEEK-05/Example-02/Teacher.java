public class Teacher {
    private int id;
    private Branch branch;
    public Teacher(int id,Branch branch){//constructor
        this.id=id;
        this.branch=branch;
    }
    public void getid(){
        System.out.println((id+1));
    }
    public void getbranches(){
        System.out.println(branch);
    }
}
