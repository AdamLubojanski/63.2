#include <iostream>
#include <fstream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

int main(int argc, char** argv) {
ifstream file; //plik wejsciowy
file.open("ciagi.txt");//otwarcie pliku ciagi.txt 
int length, 
int counter = 0;
  for (int i = 0; i < SIZE; i++) {
    length = tab[i].length();
    counter++;
    for (int j = 1; j < length; j++) { //sprawdzamy wszystkie znaki
      if (tab[i][j] == '1' && tab[i][j - 1] == '1') { //to wtedy funkcja ciagdwujedynkowy zwroci true, inaczej false
        counter--;
        break;
      }
    }
  }
  cout << counter << endl;
}
file.close();//zamknięcie pliku return 0;//koniec
return 0;//koniec
}
