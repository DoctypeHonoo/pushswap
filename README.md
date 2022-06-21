<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174804091-5cfff4f6-f080-4330-97d9-315f4103c6c9.png"/>
</p>
<h1 align="center">
   Pushswap
</h1>

---

## Motivation : 

Le **Pushswap** est un projet de début d'année à Epitech à réaliser en solo, dont le principe est de trier une série de nombre en utilisant seulement certaines méthodes et en respectant certaines contraintes.

---

## Description :

Pour trier les nombres qui lui sont donnés, le programme doit respecter certaines contraintes de "mouvements" des nombres. Pour faire simple, le programme dispose de 2 listes, au tout début, la deuxieme liste est vide et la première est rempli avec tout les chiffres reçu dans le désordre. Voici les seuls "mouvements" autorisés : 
- sa : Echange les deux premier éléments de la première liste
- sb : Echange les deux premier éléments de la deuxième liste
- sc : Fait sa et sb en même temps
- pa : Prend le premier élément de la deuxieme liste et le place en première position dans la première liste
- pb : Prend le premier élément de la première liste et le place en première position dans la deuxieme liste
- ra : Le premier élément de la première liste devient le dernier de cette même liste
- rb : Le premier élément de la deuxième liste devient le dernier de cette même liste
- rr : Fait ra et rb en même temps
- rra : Le dernier élément de la première liste devient le premier de cette même liste
- rrb : Le dernier élément de la deuxième liste devient le premier de cette même liste
- rrr : Fait rra et rrb en même temps

Le but du programme va donc être d'écrire toute les opérations nécessaires au triage de la première liste, dans le terminal.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174807646-24e47b49-2b1e-441c-a5c3-a3fdcdaec19d.png">
</p>

---

## Fonctions Autorisées : 

- write
- malloc
- free

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/pushswap.git
$ cd pushswap
$ make
```
Le binaire se trouvera alors à la racine du projet, et il vous suffira de le lancer comme ceci : 
```bash
$ ./push_swap [Autant de nombres que voulu]
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174805173-b0107a64-c9ff-4fe6-8bbe-265cd5956a7a.png">
</p>

---

## Comment l'utiliser ? : 



<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174799176-a45a4b49-f91e-4a41-8a89-fac3bc0fa187.png">
  <img src="https://user-images.githubusercontent.com/91092610/174799379-ab9a3744-7a6e-4550-9d3d-5057d72e9c81.png">
</p>
