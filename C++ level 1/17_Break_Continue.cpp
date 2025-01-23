#include <iostream>
using namespace std;

int main()
{
    int sum = 0;       // Variable pour stocker la somme des nombres
    int number = 0;    // Variable pour stocker le nombre entré par l'utilisateur
    int i = 1;         // Compteur pour le nombre d'itérations

    // Boucle pour un maximum de 20 itérations
    while (i <= 20) {
        // Demander à l'utilisateur d'entrer un nombre
        cout << "Enter note " << i << ": ";
        cin >> number;

        // Si le nombre est égal à 0, passer à l'itération suivante
        if (number == 0) {
            continue;
        }

        // Demander à l'utilisateur s'il veut arrêter ou continuer
        int x;
        cout << "Enter -1 to stop, or 0 to continue: ";
        cin >> x;

        // Ajouter le nombre à la somme
        sum += number;

        // Si l'utilisateur choisit d'arrêter, quitter la boucle
        if (x == -1) {
            break;
        }

        // Si l'utilisateur choisit de continuer, incrémenter le compteur
        if (x == 0) {
            i += 1;
        }
    }

    // Afficher la somme finale
    cout << "The sum = " << sum << endl;

    return 0;
}
