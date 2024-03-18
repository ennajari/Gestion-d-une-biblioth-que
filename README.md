## Gestion d'une bibliothèque

Ce projet consiste en une application de gestion de bibliothèque, avec les spécifications suivantes :

### Classes

#### Classe de base Article
- Caractéristiques : titre, auteur, année, disponible (indique si l'article est disponible pour l'emprunt).
- Comportements :
  - Constructeur d'initialisation.
  - `void emprunter()`: marque l'article comme emprunté.
  - `void retourner()`: marque l'article comme retourné.
  - `void afficherDetails()`: affiche les détails de l'article.

#### Classe dérivée Livre
- Attribut supplémentaire : genre.

#### Classe dérivée Magazine
- Attribut supplémentaire : mois (mois de publication du magazine).

### Tester l'application
L'application doit être testée pour vérifier son bon fonctionnement.
