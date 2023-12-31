import java.util.ArrayList;
import java.util.Iterator;
import java.lang.String;
public class object {
    public void switchPairs(ArrayList<Strings> aList){
        Strings temp;
        int i=-1,j=0,k=0;
        Iterator iterator= aList.iterator();
        if(aList.size()>=2){
            while(iterator.hasNext()){
                iterator.next();
                i++;
                if(iterator.hasNext()){
                   iterator.next();
                    j=i+1;
                    k+=2;
                }
                else{
                    k--;
                }
                if(k%2==0){
                    temp=aList.get(i);
                    aList.set(i,aList.get(j));
                    aList.set(j,temp);
                    i++;
                }
            }
        }
        else{
            System.out.println("LIST ELEMENT IS NOT ENOUGH TO SWITCH");
        }
    }
}