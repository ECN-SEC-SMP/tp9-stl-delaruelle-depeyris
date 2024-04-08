

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
    v.resize(3); // redimensionnement du vecteur
    v.assign(3,4); // affectation 3 valeurs qui sont 4
    for(int i = 0; i < v.size(); i++) // affichage avec les indices
    {
        cout << v[i] << endl;
    }
    for(auto j : v) // affichage avec la boucle de nombres
    {
        cout << j << endl;
    }
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) // affichage avec les itérateurs
    {
        cout << *it << endl;
    }
    return 0;
}

