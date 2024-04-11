/*
    ------------------------------------------------
    ------------------- Partie 3 -------------------
    ------------------------------------------------
*/

#include <list>
#include <iostream>

/*
------------------ Fonctions ------------------
*/

/*
    Affiche une liste
*/
void affichList(std::list<int> & l)
{
    for(std::list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

/*
------------------ Main ------------------
*/
int main ()
{
    std::list<int> l = {1,2,3,4,5,6,7,8}; // Création d'une liste de 8 entiers
    std::cout << "Création de la liste" << std::endl;
    affichList(l); // Affichage de la liste
    std::list<int>::iterator it = l.begin();
    std::advance(it, 2); // Déplace l'itérateur vers le troisième élément
    l.erase(it); // Supprime le troisième élément
    std::cout << "Suppression du troisième élément" << std::endl;
    affichList(l); // Affiche la liste
    return 0;
}