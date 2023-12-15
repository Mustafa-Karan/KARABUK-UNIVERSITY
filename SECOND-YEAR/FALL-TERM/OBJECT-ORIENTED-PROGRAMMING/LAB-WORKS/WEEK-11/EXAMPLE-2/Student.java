public abstract class Student {
    protected int id;
    protected float mid;
    protected float fin;
    Student(int id,float mid,float fin){
        this.id=id;
        this.mid=mid;
        this.fin=fin;
    }
    protected abstract float computeTotalScore();
    public float computeBaseScore(){
        return ((float)2/5)*mid+((float)3/5)*fin;
    }
}