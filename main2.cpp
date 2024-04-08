#include <iostream>
#include <vector>
#include <algorithm>

/*
------------------ Namespace ------------------
*/
using namespace std;

/*
------------------ Fonctions ------------------
*/

/*
    Fonction qui permet l'affichage d'un vecteur en le passant par référence
*/
void affiche(vector<string> const& vs)
{
    for(auto i : vs) // Affichage du contenu du vecteur sur une ligne, séparé par des virgules
    {
        cout << i << " + ";
    }
    cout << endl;
}

/*
    Fonction qui permet de concaténer un vecteur string dans une variable
*/
string concatene(vector<string> const& vs)
{
    string out;
    for(auto i : vs)
    {
        out += i + " ";
    }
    return out;
}

/*
    Fonction qui permet d'ajouter une virgule après chaque string
*/
void ajouteVirgule(vector<string> &vs)
{
    auto ajout = [](string& s) { s += ","; }; // prédicat
    for_each(vs.begin(), vs.end(), ajout);
}


/*
------------------ Main ------------------
*/
int main ()
{
    vector<string> vs; // Déclaration du vecteur de string
    vs.push_back("Bonjour"); // Ajout des strings
    vs.push_back("comment");
    vs.push_back("allez");
    vs.push_back("vous");
    vs.push_back("?");
    cout << "taille du vecteur : " << vs.size() << endl; // Affichage de la taille du vecteur
    cout << "capacité du vecteur : " << vs.capacity() << endl; // Affichage de la capacité du vecteur
    for(vector<string>::iterator it = vs.begin(); it != vs.end(); it++) // Affichage du contenu du vecteur sur une ligne
    {
        cout << *it << " ";
    } 
    cout << endl;
    vs[1].swap(vs[3]); // Echange entre les valeurs des cases 1 et 3
    vs.insert(vs.begin() + 1, "a tous"); // Ajout de la valeur "a tous" entre les cellules 1 et 3
    vs.back() = "???"; // Remplace le dernier élément "?" par "???"
    cout << "Dernier élément : " << *(vs.end() - 1) << endl; // Affichage du dernier élément
    for(vector<string>::iterator it = vs.begin(); it != vs.end(); it++) // Affichage du contenu du vecteur sur une ligne, séparé par des virgules
    {
        cout << *it << ", ";
    }
    cout << endl; 
    sort(vs.begin(), vs.end()); // Trie des valeurs dans l'ordre alphabétique en fonction des priorités
    for(vector<string>::iterator it = vs.begin(); it != vs.end(); it++) // Affichage du contenu du vecteur sur une ligne, séparé par des virgules
    {
        cout << *it << ", ";
    }
    cout << endl;
    cout << "Test de la fonction affiche : ";
    affiche(vs);
    cout << "Test de la fonction concatene : " << concatene(vs) << endl;
    cout << "Test de la fonction ajouteVirgule : ";
    ajouteVirgule(vs);
    affiche(vs);
}




