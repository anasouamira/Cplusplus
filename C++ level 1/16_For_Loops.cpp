// 15_For_Loops.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
using namespace std;

// Fonction pour lire les données dans un tableau
void RedArrData(int Arr[100], int& length) {
    // Demander à l'utilisateur combien de nombres il veut entrer
    cout << "How many numbers do you want to enter: ";
    cin >> length;

    // Lire les nombres dans le tableau
    for (int i = 0; i <= length - 1; i++) {
        cout << " Enter Number " << i + 1 << ": ";
        cin >> Arr[i];
    }
}

// Fonction pour afficher les données du tableau
void PrintArrData(int Arr[100], int length) {
    // Parcourir le tableau et afficher chaque élément
    for (int i = 0; i <= length - 1; i++) {
        cout << Arr[i] << " "; // Correction : ajout d'une sortie pour les éléments
    }
    cout << endl; // Nouvelle ligne après avoir affiché tous les éléments
}

int main() {
    int Arr[100], length = 0;

    // Appeler la fonction pour lire les données du tableau
    RedArrData(Arr, length);

    // Appeler la fonction pour afficher les données du tableau
    PrintArrData(Arr, length);

    // Exemple de boucle "for" simple
    // for (int i = 0; i <= 10; i++) { cout << "ANAS" << endl; }

    return 0;
}


