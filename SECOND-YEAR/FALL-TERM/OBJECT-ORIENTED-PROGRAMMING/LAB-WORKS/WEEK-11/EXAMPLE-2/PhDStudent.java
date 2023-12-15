public class PhDStudent extends MasterStudent implements ArticleScoreBehaviour{
    protected int numberOfArticles;
    PhDStudent(int id,float mid,int conf,int numberOfArticles){
        super(id,mid,conf,numberOfArticles);
    }
    @Override
    public float computeTotalScore(){
        return computeBaseScore()+articleScore();
    }
    public float articleScore(){
        return numberOfArticles*8;
    }
}