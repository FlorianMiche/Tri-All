#include "main.h"

using namespace std;

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(65001);
    srand();

    int tableau[9] = {7, 8, 7, 4, 3, 10, 4, 1, -2};

    //int tableau[100];
    //remplirTableau(tableau, 9, -99, 100);

    afficherTableau(tableau, 9);

    cout << "Tri rapide" << endl;
    triRapide(tableau, 0, 9);

    //cout << "Tri bulle" << endl;
    //triBulle(tableau, 0, 9);

    //cout << "Tri gnome" << endl;
    //triGnome(tableau, 0, 9);

    //cout << "Tri insertion" << endl;
    //triInsertion(tableau, 0, 9);

    //cout << "Tri sélection" << endl;
    //triSelection(tableau, 0, 9);

    //cout << "Tri fusion" << endl;
    //triFusion(tableau, 0, 9);

    //cout << "Tri comptage" << endl;
    //triComptage(tableau, 0, 9);

    afficherTableau(tableau, 9);
    cout << (estTrie(tableau, 9) ? "Trié !" : "!!! ERREUR !!!") << endl << endl;

    return 0;
}
