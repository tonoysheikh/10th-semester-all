male(fojorali).
male(siraj).
male(kader).
male(hasem).
male(bacchu).
male(monir).
male(saiful).
male(taiful).
male(tufayel).
male(foysal).

parents(fojorali,siraj).
parents(siraj,kader).
parents(siraj,hasem).
parents(siraj,bacchu).
parents(kader,monir).
parents(kader,saiful).
parents(hasem,taiful).
parents(bacchu,tufayel).
parents(bacchu,foysal).


father(X,Y):- parents(X,Y),male(X).
mother(X,Y):- parents(X,Y),female(X).

sibling(X,Y):- parents(Z,X),parents(Z,Y),X \== Y.

grandparent(X,Y) :- parents(X,Z), parents(Z,Y).
grandgrandparent(A,B) :- parents(A,X), grandparent(X,B).

uncle(X,Z):-sibling(X,Y),parents(Y,Z),male(X).
aunty(X,Z):-sibling(X,Y),parents(Y,Z),female(X).

cousin(X,Z):-sibling(W,Y),parents(W,X),parents(Y,Z).


