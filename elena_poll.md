# Comet Buster

==================
READ ME Eléna POLL
==================

====================================================
Contributeurs au projet : Islem FOUDIL et Eléna POLL
====================================================

============
Introduction
============

Dans le cadre de l'INF150, nous avons implementé un mini-projet déjà pré-configuré. Le principe a été de compléter le code. Le jeu consiste à incarner un pilote de vaisseau spatial et survivre au milieu de l'espace en détruisant et évitant les astérïdes et les extra-terrestres chat. 
Comet-buster est un projet qui a pour objectif de nous familiariser avec le codage et comprendre le mécanisme d'un jeu déjà pré-configuré pour le compléter par la suite.
Ce projet a mobilisé nos capacités d'analyse et de comprenhension ainsi que les compétences techniques acquises lors des TD et TP.

==============
Participations
==============

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

=====
Bilan
=====

J'ai eu du mal à comprendre le fonctionnement global du jeu avec le nombre important de fichiers car je n'avais jamais travaillé sur un jeu aussi dense. J'ai essayé tout d'abord de comprendre le fonctionnement de chaque fichier et j'ai consulté le readme, ce qui m'a permis de comprendre quel fichier était utilisé pour quelle fonction. Je n'ai pas compris entièrement le code pour les collisions. 

J'ai ensuite compilé le code pour voir le fonctionnement et me suis rendue compte du non-affichage des astéroïdes. J'ai ensuite pu commencer à compléter le code. Avec Islem, on a décidé de se séparer les tâches selon nos affinités. 

Pour le fichier linkedlist.c, j'ai effectué les fonctions après qu'Islem a complété la fonction list_add pour mieux assimiler la structure des éléments. J'ai réalisé mes fonctions en vérifiant au préalable si la liste fournie était vide ou pas. Pour la fonction list_free, j'ai fait le choix d'ajouter une liste nommée next pour mettre temporairement la suite de la liste au fur et à mesure que je supprime l'élement en tete et libère la mémoire en utilisant les fonctions free() et sprite_free() pour libérer la cellule et le sprite.

Une fois ce fichier complété, j'ai également modifié les informations erronnées que j'avais repérées (int angle = (float) que j'ai modifié en float angle = (float)) dans les fichiers main et level. Apres le changement, le vaisseau tournait plus fluidement. Nous avons ensuite choisi de rajouter la possibilité que les astéroïdes se séparent en 2,3 ou 4 éléments de manière aléatoire en utilisant rand() utilisé déjà dans le jeu. J'ai recherché des renseignements au sujet de la fonction car je ne la connaissais pas. 

Ce projet m'a permis de mieux comprendre la programmation en C et de découvrir de nouvelles fonctionnalités. Cela m'a permis de me rendre compte concrètement de ce qu'on peut faire avec le langage C. Les fonctions que nous avons réalisées, m'ont permis de réviser le contrôle ainsi que de mieux comprendre certains TP. 

De plus, nous avons utilisé l'IA pour nous aider à comprendre le jeu et certaines fonctions plus complexes. Nous avons également repris les corrections de TD et TP pour réaliser les fonctions.