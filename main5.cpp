#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

class CSVHandler {
private:
    std::map<std::string, std::string> data;
    std::string filename;

public:
    CSVHandler(const std::string& filename) : filename(filename) {}

    void readCSV() {
        std::ifstream file(filename);
        std::string line, date, description;

        if (file.is_open()) {
            while (getline(file, line)) {
                std::istringstream sstream(line);
                getline(sstream, date, ';');
                getline(sstream, description);
                data[date] = description;
            }
            file.close();
        } else {
            std::cerr << "Unable to open file for reading." << std::endl;
        }
    }

    void writeCSV() {
        std::ofstream file(filename);

        if (file.is_open()) {
            for (const auto& pair : data) {
                file << pair.first << ";" << pair.second << std::endl;
            }
            file.close();
        } else {
            std::cerr << "Unable to open file for writing." << std::endl;
        }
    }

    void addEvent(const std::string& date, const std::string& description) {
        // Assurez-vous que la date n'est pas déjà utilisée pour maintenir l'unicité des clés.
        if (data.find(date) == data.end()) {
            data[date] = description;
        } else {
            std::cerr << "Event already exists for this date." << std::endl;
        }
    }

    void displayEvents() {
        for (const auto& pair : data) {
            std::cout << "Date: " << pair.first << ", Description: " << pair.second << std::endl;
        }
    }
};

int main() {
    CSVHandler handler("events.csv");

    handler.readCSV(); // Lire les événements depuis le fichier
    handler.displayEvents(); // Afficher les événements existants

    handler.addEvent("2024-04-11", "C++ CSV Handler Example"); // Ajouter un nouvel événement
    handler.displayEvents(); // Réafficher les événements après ajout

    handler.writeCSV(); // Écrire les modifications dans le fichier CSV

    return 0;
}
