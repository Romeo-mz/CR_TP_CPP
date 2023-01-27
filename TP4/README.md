# TP4 : Chiffrement

Ce TP a pour objectif de mettre en pratique les différentes techniques de chiffrement vues en cours. Il se compose de plusieurs classes qui permettent de chiffrer et de déchiffrer des messages en utilisant différents algorithmes.

## Classes

- **BasicEncrypt** : Cette classe permet de chiffrer un message en utilisant une clé de chiffrement. Elle possède des méthodes pour encoder et décoder un message.

- **Encrypt** : Cette classe hérite de BasicEncrypt et permet d'écrire et de lire des fichiers pour stocker les messages cryptés et décryptés.

- **Caesar** : Cette classe permet de chiffrer et de déchiffrer un message en utilisant la technique de chiffrement de César.

- **Caesar2** : Version complexe de `Caesar`. Elle possède des méthodes pour encoder et décoder un message en utilisant une clé de décalage.

- **Vigenere** : Cette classe permet de chiffrer et de déchiffrer un message en utilisant la technique de chiffrement de Vigenère. Elle possède des méthodes pour encoder et décoder un message en utilisant une clé de chiffrement sous forme de vecteur ou de texte.

## Exécution

Le fichier `main.cpp` contient un exemple d'utilisation de ces classes pour effectuer des tests de chiffrement. Il utilise également des fonctions pour lire et écrire des fichiers pour stocker les messages cryptés et décryptés.
