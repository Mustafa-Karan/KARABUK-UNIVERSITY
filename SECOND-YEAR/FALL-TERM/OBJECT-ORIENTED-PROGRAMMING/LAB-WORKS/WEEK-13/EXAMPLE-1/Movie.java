public class Movie implements Comparable<Movie> {
    private double Rating;
    private String Name;
    private int Year;

    public Movie(String Name, int Year, double Rating) {
        this.Name = Name;
        this.Rating = Rating;
        this.Year = Year;
    }

    public double getRating() {
        return Rating;
    }

    public String getName() {
        return Name;
    }

    public int getYear() {
        return Year;
    }

    @Override
    public int compareTo(Movie m) {
        return Year - m.Year;
    }
    public String toString(){
        return "NAME:"+getName()+'\n'+"YEAR:"+getYear()+'\n'+"RATING:"+getRating();
    }
}