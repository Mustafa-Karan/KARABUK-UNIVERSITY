public class main {
    public static void main(String[] args){
        MasterStudent master=new MasterStudent(1,12,5,3);
        BachelourStudent bachelour=new BachelourStudent(2,34,55);
        PhDStudent phd=new PhDStudent(3,34,5,5);
        Student[] student=new Student[]{master,phd,bachelour};
        for(Student a: student){
            if(a instanceof ArticleScoreBehaviour ){
                System.out.println(((ArticleScoreBehaviour) a).articleScore());
            }
            if(a instanceof ConferenceScoreBehaviour ){
                System.out.println(((ConferenceScoreBehaviour) a).conferenceScore());
            }
            if(a instanceof ProjectScoreBehaviour ){
                System.out.println(((ProjectScoreBehaviour) a).projectScore());
            }
            System.out.println(a.computeBaseScore());
        }
    }
}