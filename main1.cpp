/*
    ------------------------------------------------
    ------------------- Partie 1 -------------------
    ------------------------------------------------
*/

#include <iostream>
#include <vector>

/*
------------------ Namespace ------------------
*/
using namespace std;


/*
------------------ Main ------------------
*/
int main ()
{
    vector<int> v; // déclaration d'un vecteur d'entiers
    vector<int> v1;
    vector<int> v2;
    v.resize(3); // redimensionnement du vecteur
    v.assign(3,4); // affectation 3 valeurs qui sont 4
    for(int i = 0; i < v.size(); i++) // affichage avec les indices
    {
        cout << v[i] << endl;
    }
    cout << endl;
    for(auto j : v) // affichage avec la boucle de nombres
    {
        cout << j << endl;
    }
    cout << endl;
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) // affichage avec les itérateurs
    {
        cout << *it << endl;
    }
    cout << endl;
    cout << "Avant modification : " << v.size() << endl;
    v.push_back(1); // Ajout d'un entier dans le vecteur
    cout << "Après modification : " << v.size() << endl << endl;
    std::vector<int>::iterator it2 = v.begin();
    cout << "V1" << endl;
    copy(it2,v.end(), back_inserter(v1)); // copie avec la méthode copie
    for(auto j : v1) // affichage de v1 avec la boucle de nombres
    {
        cout << j << endl;
    }
    cout << endl << "V2" << endl;
    v2.assign(it2, v.end()); // copie avec la méthode assign
    for(auto j : v2) // affichage de v2 avec la boucle de nombres
    {
        cout << j << endl;
    }
    return 0;
}

