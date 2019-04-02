Labo 4 - ArrayDeque
===================

Pour ce laboratoire, il vous suffit de rendre le codecheck suivant:

http://codecheck.it/files/1903220853auhdpziefdqxaq2eqbbihx7vt

Vous disposez de 2 semaines pour rendre ce travail, mais il ne représente qu'une semaine de travail. Un nouveau laboratoire vous sera présenté dès la prochaine séance de laboratoire. 


Buffer circulaire
-----------------

Complétez la classe générique ArrayDeque pour qu'elle passe ce codecheck.

Cette classe met en oeuvre le comportement de double-ended queue en utilisant un buffer circulaire de capacité variable. Les données sont stockées dans un std::vector que vous redimensionnerez quand c'est nécessaire. Maintenez en permanence les relations

```
buffer.size() == buffer.capacity()
```

et

```
this->capacity() == buffer.size()
```

Vous ne pouvez ajouter **aucun attribut privé à la classe ni modifier les attributs et le constructeur fourni**. Vous ne pouvez ajouter comme méthodes publiques que celles nécessaires pour passer les tests d'API. Vous pouvez ajouter toute méthode privée dont vous auriez besoin

Pour ce laboratoire, *il n'est pas nécessaire de générer des exceptions*. En cas de mauvaise utilisation, le comportement est non spécifié.

Complete the following file:
