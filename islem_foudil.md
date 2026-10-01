# Comet Buster

## Introduction

Dans le cadre du mini projet en programmation C de l'UE INF150, nous avons du implémenter le jeu du Commet Buster. Le principe de ce projet : nous apprendre à comprendre un programme existant, à nous adapter à celui-ci ainsi qu'a implémenter des fonctions pour faire marcher le jeu correctement tout en appliquant les règles de programmation apprisent en cours. 

## Contribution :

### Contributeurs :
- Elena Poll
- Islem Foudi

### Nos participations :

| Fichier    | Fonction                       | Contributeur |
|------------|--------------------------------|--------------|
| linkedlist | `list_add`                     | islem        |
| linkedlist | `list_is_empty`                | elena        |
| linkedlist | `list_next`                    | elena        |
| linkedlist | `list_head_sprite`             | elena        |
| linkedlist | `list_pop_sprite`              | islem        |
| linkedlist | `list_remove`                  | islem        |
| linkedlist | `list_free`                    | elena        |
| linkedlist | `list_length`                  | elena        |
| linkedlist | `list_reverse`                 | islem        |
| linkedlist | `list_clone`                   | islem        |
| main       | `save_score`                   | islem        |
| main       | `load_score`                   | islem        |
| main       | `add_nb_morceaux`              | elena        |
| main       | `replace int to float for angle` | elena      |
| level      | `replace int to float for angle` | elena      |

## Bilan :

J'ai mis un peu de temps à comprendre le code au départ, mais en lisant tous les fichiers (avec les commentaires), avec l'IA et à l'aide du readme j'ai pu comprendre globalement le fonctionnement du jeu. J'ai encore un peu de mal, notamment sur la partie des colliders mais cela ne m'a pas empêché de coder !
Nous nous sommes aidé des corrections des TD et TP pour implémenter les fonctions.

Lors du lancement du jeu, nous avons remarqué avec Elena que les asteroïdes n'apparaissaient pas et que le vaisseau avait du mal à tourner. Nous avons donc implémenter ces parties (voir contribution).

- Pour la fonction list_pop_sprite, nous avons décidé de récupéré le sprite du premier élément, puis de retirer le noeud de la liste et de libérer la mémoire occupée par ce noeud pour éviter d'empiler des données dont on ne veut plus se servir (fuite de mémoire).

- Pour la fonction list_reverse, nous avons choisi d'utiliser une liste temporaire appelé next pour stocker la suite de la liste le temps qu'on crée la nouvelle liste inversé avec current et previous. Previous nous permet de stocker la liste inversé. Nous avons fait ce choix car selon nous c'était la façon de faire la plus simple. En effet, utiliser plusieurs listes, cela nous permet de garder la liste d'origine (current) en dissociant la tête au fur et à mesure pour l'ajouter à la nouvelle liste (previous).

- Pour la fonction list_clone, nous avons décidé de créé de nouveaux noeuds avec malloc pour que le clone soit indépendant de la liste originale. Comme ça, dans le cas où on supprimerait la liste originale, le clone garderait toujours ses données.

C'était un bonne exercice d'application sur un sujet plus concret de ce que nous voyons en cours pour mieux comprendre les structures, les listes et leur manipulation. C'était également un bonne exercice d'entrainement pour le DS !


