#include <iostream>
#include <vector>
using namespace std;
class cards{
	
	vector<int> DeckVector(52);
	public:
};
/*
		int CreatMultiDeckVector(int numberofdecks){
			int numberofcards= 52 * numberofdecks;
			if (numberofdecks==1){
				for (int i=0; i < 52; i++){
 					DeckVecor[i]=i;
				}
			}
			else{
				DeckVector.resize(numberofcards);
				for (int a=0; a < numberofdecks; a++){
					for(int value=0; value < 52; value++){
						DeckVector[value+ 52*a]= value;
					}
				}
			}
			return numberofcards;	
		}
		void FaroShuffle(int numberofcards){
			for (int preshuffleposition=0; preshuffleposition <numberofcards; preshuffleposition++){
				if( b <= (preshuffleposition/2)){
					int postshuffleposition= 2*preshuffleposition -1;
					int temp=DeckVector[preshuffleposition];
					DeckVector[preshuffleposition]=DeckVector[postshuffleposition];
					DeckVector[postshuffleposition]=temp;
					
				}
				else{
				int postshuffleposition2= 2*preshuffleposition -numberofcards;
					temp=DeckVector[preshuffleposition];
					DeckVector[preshuffleposition]=DeckVector[postshuffleposition];
					DeckVector[postshuffleposition]=temp;	
				}			
			}
		}
		void cardtype(int location){
			switch(location){
				case 0: 13: 26: 39:
				cout << "Ace of ";
				break;
				case 1: 14: 27: 40:
				cout << "2 of ";
				break;
				case 2: 15: 28: 41:
				cout << "3 of ";
				break;
				case 3: 16: 29: 42:
				cout << "4 of ";
				break;
				case 4: 17: 30: 43:
				cout << "5 of ";
				break;
				case 5: 18: 31: 44:
				cout << "6 of ";
				break;
				case 6: 19: 32: 45:
				cout << "7 of ";
				break;
				case 7: 20: 33: 46:
				cout << "8 of ";
				break;
				case 8: 21: 34: 47:
				cout << "9 of ";
				break;
				case 9: 22: 35: 48:
				cout << "10 of ";
				break;
				case 10: 23: 36: 49:
				cout << "Jack of ";
				break;
				case 11: 24: 37: 50:
				cout << "Queen of ";
				break;
				case 12: 25: 38: 51:
				cout << "King of ";
				break;
			}
			if(location < 13){
			cout << "Clubs.\n";
			}
			else if(13 <= location <26){
			cout << "Diamonds.\n";
			}	
			else if(26 <= location <39){
			cout << "Hearts.\n";
			}
			else{
			cout << "Spades.\n";
			}
		}					
}; 
int main()
{
	int numberofdecks;
	cout << "This program shuffles a n number of decks of cards that were place on top of each other. Before the cards are organized with Clubs first, Diamonds second, Hearts third, then Spades last.\n";
	cout << "Each suit of cards preshuffle is organized from top to bottom Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King. The program asks from a n number of decks and then shuffles the combined\n";
	cout << "stack of cards. The program will then ask you for a integer which corosponds to a position in the stack of cards with one being the top of the stack and will return what that card is if\n";
	cout << "the position you entered was valid\n";
	cout << "Enter the Number of Decks To shuffle"<<endl;
	cin >> numberofdecks;
	
	while(1){
		if(numberofdecks==0){
		cout << "No Decks to shuffle moron\n";
		}
		else{
			int numberofcards= CreatMultiDeckVector(numberofdecks);
			FaroShuffle(numberofcards);
			while(1){
				int positionvalue=0;
				cout << "Enter a integer";
				cin << positionvalue;
				if ((positionvalue > 0) &&(positionvalue < numberofcards)){
					break;
				}
			} 
				int location= positionvalue-1;
				cout << "Your Card is ";
				cardtype(location);
		}
	} 
}
	*/ 
