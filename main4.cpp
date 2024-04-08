/*
    ------------------------------------------------
    ------------------- Partie 4 -------------------
    ------------------------------------------------
*/

#include <list>
#include <map>
#include <string>
#include <iostream>

/*
------------------ Fonctions ------------------
*/

/*
    Ajoute des événements dans le dictionnaire
*/
void ajoute_evenement(int annee, const std::string& evenement, std::map<int, std::list<std::string>>& evenements) {
    if (evenements.find(annee) != evenements.end()) {
        // L'année existe déjà dans la map, ajoutez l'événement à la liste existante
        evenements[annee].push_back(evenement);
    } else {
        // L'année n'existe pas encore dans la map, créez une nouvelle liste avec l'événement
        evenements.insert(std::make_pair(annee, std::list<std::string>{evenement}));
    }
}

/*
    Affiche les événements dans le dictionaire
*/
void affiche_evenements(const std::map<int, std::list<std::string>>& evenements) {
    for (const auto& pair : evenements) {
        std::cout << "Année : " << pair.first << std::endl;
        for (const auto& evenement : pair.second) {
            std::cout << "  Événement : " << evenement << std::endl;
        }
    }
}


/*
------------------ Main ------------------
*/
int main ()
{
    std::map<int, std::list<std::string>> evenements;

    // Ajouter des événements pour l'année 2020
    evenements[2020].push_back("Evénement 1 en 2020");
    evenements[2020].push_back("Evénement 2 en 2020");

    // Ajouter des événements pour l'année 2021
    evenements[2021].push_back("Evénement 1 en 2021");
    evenements[2021].push_back("Evénement 2 en 2021");

    ajoute_evenement(2020, "Evénement 3 en 2020", evenements);
    ajoute_evenement(2020, "Evénement 4 en 2020", evenements);
    ajoute_evenement(2021, "Evénement 3 en 2021", evenements);
    ajoute_evenement(2021, "Evénement 4 en 2021", evenements);

    affiche_evenements(evenements);

    return 0;
}