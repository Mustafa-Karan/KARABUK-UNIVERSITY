import java.util.Scanner;
import java.util.InputMismatchException;
class deck {
    Suit suit;
    Rank rank;
    int R;
    int S;
    public enum Suit {
        DIAMOND, CLUB, HEART, SPADE;
    }
    public enum Rank {
        ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEM, JACK, QUENN, KING;
    }
    deck(int suit, int rank) {// constructor
        this.suit = Suit.values()[suit - 1];
        this.rank = Rank.values()[rank - 1];
        this.S = suit;
        this.R = rank;
    }
    //methods
    public Suit getSuit() {
        return suit;
    }
    public Rank getRank() {
        return rank;
    }
    public int getValue() {
        return S;
    }
    public String toString() {//That prints suit and rank
        return "Rank: " + rank + "  Suit: " + suit;
    }
    //main method
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true){//needs boolean
            try {
                System.out.println("ENTER 1-4 FOR SUIT TO EXIT THE PROGRAM ENTER -1");
                int suit = scanner.nextInt();
                if (suit < 1 || suit > 4) {
                    if(suit==-1)
                        break;
                    System.out.println("Invalid input. Please enter a valid number.");
                    continue;//returns at the beginning of while loop
                }
                scanner.nextLine();
                System.out.println("ENTER 1-13 FOR RANK");
                int rank = scanner.nextInt();
                if (rank < 1 || rank > 13) {
                    System.out.println("Invalid input. Please enter a valid number.");
                    continue;
                }
                scanner.nextLine();
                deck d = new deck(suit, rank);
                System.out.println("SUIT: " + d.getSuit());
                System.out.println("RANK: " + d.getRank());
                System.out.println("Suit Number: " + d.getValue());
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter a valid number.");
            }
        }
        System.out.println("ALL CARDS OF DECK");
        for (Suit s : Suit.values()) {//FOR EACH
            for (Rank r : Rank.values()) {
                System.out.println("SUIT: " + s);
                System.out.println("RANK: " + r);
            }
        }
    }
}