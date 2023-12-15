public class MasterStudent extends Student implements ConferenceScoreBehaviour{
    int numberOfConf;
    MasterStudent(int id,float fin ,float mid,int numberOfConf){
        super(id,fin,mid);
        this.numberOfConf=numberOfConf;

    }
    public float ConferenceScoreBehaviour(){
        return numberOfConf*5;
    }
    @Override
    public float conferenceScore(){
        return numberOfConf*5;
    }
    @Override
    public float computeTotalScore(){
        return computeBaseScore()+conferenceScore();
    }
}