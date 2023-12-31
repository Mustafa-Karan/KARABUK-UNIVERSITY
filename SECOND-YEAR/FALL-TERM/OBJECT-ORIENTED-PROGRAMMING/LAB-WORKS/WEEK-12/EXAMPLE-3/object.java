import java.util.ArrayList;
import java.util.Iterator;
public class object {
    public ArrayList<integers>removeBadPairs(ArrayList<integers> aList) {
        int k = 0;
        integers temp1, temp2 = null;
        if (aList.size() >= 2) {
            ArrayList<integers> tempList = new ArrayList<>();
            Iterator<integers> iterator = aList.iterator();
                while (iterator.hasNext()) {
                    temp1 = iterator.next();
                    if (!iterator.hasNext())
                        k--;
                    else {
                        temp2 = iterator.next();
                        k += 2;
                    }
                    if (k%2==0&&temp1.getInteger() < temp2.getInteger()) {
                        tempList.add(temp1);
                        tempList.add(temp2);;
                    }
                }
            aList.clear();
            aList.addAll(tempList);
            return aList;
        } else {
            System.out.println("LIST ELEMENT IS NOT ENOUGH TO CHECK");
        }
        return aList;
    }
}