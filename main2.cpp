/*
    ------------------------------------------------
    ------------------- Partie 2 -------------------
    ------------------------------------------------
*/

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
        cout << i << " ";
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
    cout << "Déclaration et affection du vecteur" << endl;
    cout << "Taille du vecteur -->" << vs.size() << endl; // Affichage de la taille du vecteur
    cout << "Capacité du vecteur --> " << vs.capacity() << endl; // Affichage de la capacité du vecteur
    vs.push_back("Fiiiiire !!!");
    cout << "Taille du vector après ajout --> " << vs.size() << endl;
    cout << "Capacité du vector après ajout --> " << vs.capacity() << endl;
    vs.pop_back();
    cout << "Contenu du vecteur séparation par espace :" << endl;
    cout << "Affichage avec la manière 1 :" << endl;
    for(int i=0; i<vs.size(); i++){
        cout << vs[i] << " ";
    }
    cout << endl;
    cout << "Affichage avec la manière 2 :" << endl;
    for(string& v : vs){
        cout << v << " ";
    }
    cout << endl;
    cout << "Affichage avec la manière 3 :" << endl;
    for(vector<string>::iterator it = vs.begin(); it!=vs.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    vs[1].swap(vs[3]); // Echange entre les valeurs des cases 1 et 3
    cout << "Échange de la case d'incice 1 avec celle d'indice 3 :" << endl;
    for(string& v : vs){
        cout << v << " ";
    }
    cout << endl;
    vs.insert(vs.begin() + 1, "a tous"); // Ajout de la valeur "a tous" entre les cellules 1 et 3
    cout << "Ajout de la valeur 'a tous' après le premier élément :" << endl;
    for(string& v : vs){
        cout << v << " ";
    }
    cout << endl;
    vs.back() = "???"; // Remplace le dernier élément "?" par "???"
    cout << "Remplace le dernier élément '?' par '???' :" << endl;
    for(string& v : vs){
        cout << v << " ";
    }
    cout << endl;
    cout << "Dernier élément --> " << *(vs.end() - 1) << endl; // Affichage du dernier élément
    cout << "Affichage des chaines séparées des virgules :" << endl;
    for(vector<string>::iterator it = vs.begin(); it != vs.end(); it++) // Affichage du contenu du vecteur sur une ligne, séparé par des virgules
    {
        cout << *it << ", ";
    }
    cout << endl; 
    sort(vs.begin(), vs.end()); // Trie des valeurs dans l'ordre alphabétique en fonction des priorités
    cout << "Tri des valeurs dans l'ordre alphabétique :" << endl;
    for(vector<string>::iterator it = vs.begin(); it != vs.end(); it++) // Affichage du contenu du vecteur sur une ligne, séparé par des virgules
    {
        cout << *it << ", ";
    }
    cout << endl;
    cout << "Test de la fonction affiche --> ";
    affiche(vs);
    cout << "Test de la fonction concatene --> " << concatene(vs) << endl;
    cout << "Test de la fonction ajouteVirgule --> ";
    ajouteVirgule(vs);
    affiche(vs);
    return 0;
}




