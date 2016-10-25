#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "matrixHandler.h"
#include "movementHandler.h"

// Var globales
squareDef Squareblock;
ZDef Zblock;
LDef Lblock;
IDef Iblock;
JDef Jblock;
TDef Tblock;
SDef Sblock;
int XCenter;
int YCenter;

int main() {
  int gameOn =0;
  int oldNumber = -1;
  initMatrix(mat); //on initialise la matrice

  while (gameOn != 1) { //On boucle tant que le jeu est lancé
    do {
      randomNumber = randomize();
    } while(randomNumber == oldNumber);
    oldNumber = randomNumber;
    //On met le bloc dans la matrice
    putBlockInMat(4/*randomNumber*/,mat,1);
    Affiche(mat); //on l'affiche
    movementHandler(mat, 4/*randomNumber*/); //On gère les mouvements du bloc
    Affiche(mat); //on réaffiche la matrice une fois que le bloc est placé

    // scanf("%d", &gameOn);
  }
  return 0;
}
