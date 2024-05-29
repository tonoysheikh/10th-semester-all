male(mahmud).
male(rahim).
male(malek).
male(tonoy).
male(shakil).
male(ovi).

female(fatema).
female(khaleda).
female(tonima).
female(trisha).

parents(mahmud,rahim).
parents(rahim,malek).
parents(rahim,fatema).
parents(rahim,khaleda).
parents(malek,tonoy).
parents(malek,shakil).
parents(fatema,ovi).
parents(khaleda,tonima).
parents(khaleda,trisha).

father(X,Y):- parents(X,Y),male(X).
mother(X,Y):- parents(X,Y),female(X).

sibling(X,Y):- parents(Z,X),parents(Z,Y),X \== Y.

grandparent(X,Y) :- parents(X,Z), parents(Z,Y).
grandgrandparent(A,B) :- parents(A,X), grandparent(X,B).

uncle(X,Z):-sibling(X,Y),parents(Y,Z),male(X).
aunty(X,Z):-sibling(X,Y),parents(Y,Z),female(X).

cousin(X,Z):-sibling(W,Y),parents(W,X),parents(Y,Z).