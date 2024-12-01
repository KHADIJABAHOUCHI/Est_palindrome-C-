// est_palindrome.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <vector>
#include <string>

int main() {
    // Saisie du mot
    std::string input;
    std::cout << "Entrez un mot : ";
    std::getline(std::cin, input);

    // Stockage des caractères dans un vecteur
    std::vector<char> vec;
    for (char c : input) {
        vec.push_back(c);
    }

    // Vérification si le mot est un palindrome
    bool isPalindrome = true;
    for (size_t i = 0; i < vec.size() / 2; ++i) {
        if (vec[i] != vec[vec.size() - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    // Affichage du résultat
    if (isPalindrome) {
        std::cout << "Le mot \"" << input << "\" est un palindrome." << std::endl;
    }
    else {
        std::cout << "Le mot \"" << input << "\" n'est pas un palindrome." << std::endl;
    }

    return 0;
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
