// Fig. 8.10: DeckOfCards.cs
// DeckOfCards class represents a deck of playing cards.
using System;

public class DeckOfCards
{
   private Card[] deck; // array of Card objects
   private Card[] hand;
   private int[] suitCounters;
   private int[] faceCounters;
   private int currentCard; // index of next Card to be dealt (0-51)
   private const int NUMBER_OF_CARDS = 52; // constant number of Cards
   private Random randomNumbers; // random number generator

   // constructor fills deck of Cards
   public DeckOfCards()
   {
      
      deck = new Card[ NUMBER_OF_CARDS ]; // create array of Card objects
      currentCard = 0; // set currentCard so deck[ 0 ] is dealt first  
      randomNumbers = new Random(); // create random number generator
      hand = new Card[5];
      suitCounters = new int[4];
      faceCounters = new int[13];
      // populate deck with Card objects
      for (int count = 0; count < deck.Length; ++count)
      {
          deck[count] = new Card(count % 13, count / 13);
      }
   } // end DeckOfCards constructor

   public void MakeHand()
   {
       for (int i = 0; i < hand.Length; i++)
       {
           hand[i] = DealCard();
           Console.WriteLine(hand[i]);
       }
   }
   public void CountSuits()
   {
       for (int i = 0; i < suitCounters.Length; i++)
       {
           suitCounters[i] = 0;
       }
       for (int i = 0; i < hand.Length; i++)
       {
           if (hand[i] != null)
           {
               ++suitCounters[hand[i].Suit];               
           }
       }
       Console.WriteLine("{0}" ,string.Join(", ", suitCounters));
   }

   public void CountFaces()
   {
       for (int i = 0; i < faceCounters.Length; i++)
       {
           faceCounters[i] = 0;
       }
       for (int i = 0; i < hand.Length; i++)
       {
           if (hand[i] != null)
           {
               ++faceCounters[hand[i].Face];
           }
       }
       Console.WriteLine("{0}", string.Join(", ", faceCounters));
   } 
   // shuffle deck of Cards with one-pass algorithm

   public void AnswerQueries()
   {
       Console.WriteLine("Answer 1: " + AnswerOne());
       Console.WriteLine("Answer 2: " + AnswerTwo());
       Console.WriteLine("Answer 3: " + AnswerThree());
       Console.WriteLine("Answer 4: " + AnswerFour());
       Console.WriteLine("Answer 5: " + AnswerFive());
       Console.WriteLine("Answer 6: " + AnswerSix());
       Console.WriteLine("Answer 7: " + AnswerSeven());
   }
   private bool AnswerOne()
   {
       int counter = 0;
       for (int i = 1; i < hand.Length; i++)
       {
           if (hand[i - 1].Face == hand[i].Face && hand[i - 1].Suit == hand[i].Suit)
           {
               counter++;
           }
       }
       if (counter == 2)
       {
           return true;
       }
       return false;
   }
   private bool AnswerTwo()
   {
       int count = 0;
       for (int i = 0; i < hand.Length; i++)
       {
           if (AnswerOne())
           {
               count++;
           }
       }
       if (count == 2)
       {
           return true;
       }
       return false;
   }
   private bool AnswerThree()
   {
       for (int i = 0; i < faceCounters.Length; i++)
       {
           if (faceCounters[i] == 3)
           {
               return true;
           }
       }
       return false;
   }
   private bool AnswerFour()
   {
       for (int i = 0; i < faceCounters.Length; i++)
       {
           if (faceCounters[i] == 4)
           {
               return true;
           }
       }
       return false;
   }
   private bool AnswerFive()
   {
       for (int i = 0; i < suitCounters.Length; i++)
       {
           if (suitCounters[i] == 5)
           {
               return true;
           }
       }
       return false;
   }
   private bool AnswerSix()
   {
       int count = 0;
       for (int i = 1; i < hand.Length; i++)
       {
           if (hand[i - 1].Face > hand[i].Face)
           {
               count++;
           }
           else
           {
               return false;
           }
       }
       return true;
   }
   private bool AnswerSeven()
   {
       bool first = false;
       bool second = false;
       for (int i = 0; i < suitCounters.Length; i++)
       {
           if (suitCounters[i] == 3 && !second)
           {
               second = true;
           }
           if (suitCounters[i] == 2 && !first)
           {
               first = true;
           }
       }
       if (first && second)
       {
           return true;
       }
       return false;
       
   }
    public void Shuffle()
   {
      // after shuffling, dealing should start at deck[ 0 ] again
      currentCard = 0; // reinitialize currentCard

      // for each Card, pick another random Card and swap them
      for ( int first = 0; first < deck.Length; ++first )
      {
         // select a random number between 0 and 51 
         int second = randomNumbers.Next( NUMBER_OF_CARDS );

         // swap current Card with randomly selected Card
         Card temp = deck[ first ];
         deck[ first ] = deck[ second ];
         deck[ second ] = temp;
      } // end for
   } // end method Shuffle

   // deal one Card
   public Card DealCard()
   {
      // determine whether Cards remain to be dealt
      if ( currentCard < deck.Length )
         return deck[ currentCard++ ]; // return current Card in array
      else
         return null; // indicate that all Cards were dealt
   } // end method DealCard
} // end class DeckOfCards


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
