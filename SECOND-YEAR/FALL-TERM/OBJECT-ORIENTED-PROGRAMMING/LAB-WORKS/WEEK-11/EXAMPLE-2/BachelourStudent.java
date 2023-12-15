public class BachelourStudent extends Student implements ProjectScoreBehaviour{
    BachelourStudent(int id,float mid,float fin){
        super(id,mid,fin);
    }
    @Override
    protected float computeTotalScore(){
        return computeBaseScore()+projectScore();
    }
    @Override
    public float projectScore(){
        return ((float)20);
    }
}