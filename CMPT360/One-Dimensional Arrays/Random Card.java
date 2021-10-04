package javaapplication4;
import java.util.Scanner;
public class JavaApplication4 {
    public static void main(String[] args) {
        
        String ranks[] = {"Ace", "Deuce","Three", "Four", "Five", "Six", "Seven", "Eight", "Nine","Ten", "Jack", "Queen", "King"};
        String suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
        
        int[] deck = new int[52];
        for (int i = 0; i < deck.length; i++){
            deck[i] = i;
        }
        for(int i = 0; i < deck.length;i++){
            int index = (int)(Math.random() * deck.length);
            int temp = deck[i];
            deck[i] = deck[index];
            deck[index] = temp;
        }
        for (int i = 0;i < 4; i++){
            String suit = suits[deck[i] / 13];
            String rank = ranks[deck[i] % 13];
            System.out.println("Card " + deck[i] + " is "+ rank + " of " + suit);
        }
    }
}
