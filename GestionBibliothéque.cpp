#include <iostream>
#include <string>
using namespace std;

class Article {
private:
    string titre;
    string auteur;
    int annee;
    bool disponible;

public:
    Article(string _titre, string _auteur, int _annee, bool _disponible) : titre(_titre), auteur(_auteur), annee(_annee), disponible(_disponible) {}

    string getTitre() const { return titre; }
    string getAuteur() const { return auteur; }
    int getAnnee() const { return annee; }
    bool getDisponible() const { return disponible; }

    void setTitre(string _titre) { titre = _titre; }
    void setAuteur(string _auteur) { auteur = _auteur; }
    void setAnnee(int _annee) { annee = _annee; }
    void setDisponible(bool _disponible) { disponible = _disponible; }

    void emprunter() {
        if (disponible) {
            disponible = false;
            cout << "L'article \"" << titre << "\" a été emprunté." << endl;
        } else {
            cout << "Désolé, l'article \"" << titre << "\" n'est pas disponible pour l'emprunt." << endl;
        }
    }

    void retourner() {
        if (!disponible) {
            disponible = true;
            cout << "L'article \"" << titre << "\" a été retourné." << endl;
        } else {
            cout << "L'article \"" << titre << "\" est déjà disponible." << endl;
        }
    }

    void afficherDetails() const {
        cout << "Titre : " << titre << endl;
        cout << "Auteur : " << auteur << endl;
        cout << "Année de publication : " << annee << endl;
        cout << "Et disponible ? : " << (disponible ? "Oui" : "Non") << endl;
    }
};

class Livre : public Article {
private:
    string genre;

public:
    Livre(string _titre, string _auteur, int _annee, bool _disponible, string _genre): Article(_titre, _auteur, _annee, _disponible), genre(_genre) {}

    void afficherDetails() const {
        Article::afficherDetails(); // Call base class method
        cout << "Genre : " << genre << endl;
    }
};

class Magazine : public Article {
private:
    int mois;

public:
    Magazine(string _titre, string _auteur, int _annee, bool _disponible, int _mois) : Article(_titre, _auteur, _annee, _disponible), mois(_mois) {}

    void afficherDetails() const {
        Article::afficherDetails(); // Call base class method
        cout << "Mois de publication : " << mois << endl;
    }
};

int main() {
    Livre livre("Le Petit Prince", "Antoine de Saint-Exupéry", 1943, true, "Roman");
    livre.afficherDetails();
    cout << endl;

    Magazine magazine("National Geographic", "Various", 2023, true, 12);
    magazine.afficherDetails();
    cout << endl;

    return 0;
}
