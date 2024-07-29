# cpp01
cpp01
# Guide de Programmation C++

## . Opérateurs `new` et `delete`

Les opérateurs `new` et `delete` sont utilisés pour gérer la mémoire dynamique en C++.

- **Opérateur `new`** : Alloue dynamiquement de la mémoire sur le tas (heap) pour créer des objets ou des tableaux d'objets dont la durée de vie dépasse la portée de la fonction dans laquelle ils ont été créés.


  **Exemples :**

  ```cpp
  int* ptr = new int; 
  *ptr = 10;
  delete ptr;

  int* array = new int[10];
  array[0] = 1;
  delete[] array;
`
- **Opérateur `delete`** :
Libère la mémoire allouée par `new`.

## . Différence entre `malloc` et `new`, `free` et `delete`

- **`new`** : Utilisé en C++ pour allouer de la mémoire et initialiser des objets, avec gestion automatique des constructeurs et destructeurs.
- **`malloc`** : Utilisé en C pour allouer de la mémoire brute, sans appel aux constructeurs par défaut.
- **`delete`** : Appelle le destructeur de l'objet, tandis que `free` ne l'appelle pas.


## . Passage par Adresse et Passage par Référence

En C++, il existe deux méthodes principales pour passer des arguments aux fonctions :

- ** 1 Passage par adresse** : Passe l'adresse d'une variable en utilisant un pointeur. La fonction peut accéder et modifier directement la variable d'origine via ce pointeur.

- **2 Passage par référence** : Passe une référence directe à la variable. La référence agit comme un alias pour la variable d'origine, permettant à la fonction d'accéder et de modifier directement cette variable.

```cpp
#include <iostream>

void incrementRef(int &ref) { 
    ref++; 
} 

void incrementAdress(int* ptr) { 
    (*ptr)++; 
} 

int main() {
    int a = 5;
    incrementAdress(&a); 
    std::cout << "Valeur de a après increment par adresse: " << a << std::endl; 
    incrementRef(a);
    std::cout << "Valeur de a après increment par référence : " << a << std::endl; 
}
```
## . Surcharge de Fonction

La surcharge de fonction en C++ permet d'avoir plusieurs fonctions avec le même nom mais des signatures différentes dans la même portée.
## Points Clés de la Surcharge de Fonction

- **Types de Paramètres Différents**
- **Nombre de Paramètres Différents**
- **Ordre des Paramètres Différents**

```cpp
#include <iostream>

int add(int a, int b) { 
    return a + b;
}

int add(int a, int b, int c) { 
    return a + b + c;
}

double add(double a, double b) { 
    return a + b;
}

int main() {
    int result1 = add(3, 4); 
    int result2 = add(3, 4, 5);
    double result3 = add(3.0, 4.0);
    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result2: " << result2 << std::endl;
    std::cout << "result3: " << result3 << std::endl;
    return 0;
}
```
## . Paramètres par Défaut

Les paramètres par défaut permettent de spécifier des valeurs par défaut pour les paramètres d'une fonction. Si la fonction est appelée sans fournir ces paramètres, les valeurs par défaut sont utilisées.

```cpp
#include <iostream>

void displayMessage(std::string message = "Hello, World!", int times = 1); 

int main() { 
    displayMessage();
    displayMessage("Bonjour!");
    displayMessage("Salut!", 3);
    return 0;
} 

void displayMessage(std::string message, int times) { 
    for (int i = 0; i < times; ++i) {
        std::cout << message << std::endl; 
    } 
}
```

## Droits d'Accès

Les spécificateurs d'accès contrôlent la visibilité et l'accessibilité des membres d'une classe :

- **public** : Accessible depuis n'importe où dans le programme.
- **protected** : Accessible depuis la classe elle-même et les classes dérivées, mais pas depuis l'extérieur.
- **private** : Accessible uniquement depuis la classe elle-même.


