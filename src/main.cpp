#include <iostream>
using namespace std;

int main() {
  // variable permettant de compter le nombre de places disponibles
  int nbrePlaces = 10;
  // variable permettant de récupérer le choix de l'utilisateur

  cout << "************ Evaluation 2 ************" << endl;
  cout << "1 - Entrée dans le parking\n" << std::endl;
  cout << "2 - Nombre de place disponible\n" << endl;
  cout << "3 - Sortie du parking\n" << endl;
  cout << "4 - Quitter\n" << endl;

  char choix;
  cout << "Saisir un nombre" << endl;
  cin >> choix;
  switch (choix) {
  case '1':
    cout << "Entrée dans le parking" << endl;
    break;
  case '2':
    cout << "Nombre de place disponible" << endl;
    break;
  case '3':
    cout << "Sortie du parking" << endl;
    break;
  case '4':
    cout << "Quitter" << endl;
    break;
  }
}