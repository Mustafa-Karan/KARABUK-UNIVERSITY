import java.util.Comparator;
public class RatingCompare implements Comparator<Movie> {
    public int compare(Movie m1,Movie m2){
        return  Double.compare(m1.getRating(), m2.getRating());
    }
}
