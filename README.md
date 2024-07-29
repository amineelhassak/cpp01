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

### . Définition des Points Fixes

Un nombre en virgule fixe est représenté par un entier, mais interprété comme s'il avait une virgule fixe à une certaine position. Par exemple, avec 8 bits fractionnaires (aussi appelés Q8), cela signifie que la partie fractionnaire a 8 bits.

## Conversion d'un Nombre Flottant en Virgule Fixe


### 1. Multiplier par une Puissance de 2

Pour convertir un nombre flottant en virgule fixe, il faut multiplier ce nombre flottant par \(2^N\), où \(N\) est le nombre de bits de la partie fractionnaire. Par exemple, si vous avez 8 bits fractionnaires, \(N = 8\), donc vous multipliez par \(2^8 = 256\).

### 2. Arrondir à l'Entier le Plus Proche

Après avoir multiplié le nombre flottant par \(2^N\), il faut arrondir le résultat à l'entier le plus proche pour obtenir le nombre en virgule fixe.

### 3. Stocker en Tant qu'Entier

Le résultat arrondi est ensuite stocké en tant qu'entier. Cet entier représente la valeur en virgule fixe.

### Exemple

Supposons que nous voulons convertir le nombre flottant 3.75 en virgule fixe avec 8 bits fractionnaires :

- **Multiplier par \(2^8\)** :
  \[
  3.75 \times 256 = 960
  \]

- **Arrondir à l'entier le plus proche** :
  \[
  960 \text{ (déjà un entier)}
  \]

- **Stocker en tant qu'entier** :
  \[
  960
  \]

Ainsi, le nombre flottant 3.75 est représenté par l'entier 960 en virgule fixe avec 8 bits fractionnaires.

### Conversion Inverse : Virgule Fixe à Flottant

Pour convertir un nombre en virgule fixe en nombre flottant, il suffit de diviser l'entier par \(2^N\).

### Exemple

Pour convertir l'entier 960 (qui est en format Q8) en nombre flottant :

- **Diviser par \(2^8\)** :
  \[
  \frac{960}{256} = 3.75
  \]

Ainsi, l'entier 960 en virgule fixe avec 8 bits fractionnaires représente le nombre flottant 3.75.
