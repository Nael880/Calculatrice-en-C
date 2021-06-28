#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ( int argc, char** argv )
{
int choix;
int choix2 = 0;
int choix1 = 0;
short m = 0 ;
double resultat = 0;
srand(time(NULL));
  printf("CALCULATRICE AVEC RESULTATS ARRONDIS A L'UNITE\n");
  printf("1. Multiplication\n");
  printf("2. Division\n");
  printf("3. Addition\n");
  printf("4. Soustraction\n");
while (1)
{
  system("color B");
  printf("\nSelectionnez l'option (1-4) : ");
  scanf("%d", &choix);
  
  printf("\n");
  switch (choix)
  { 
      case 1:
      printf("Veuillez saisir le premier nombre : ");
      scanf("%d", &choix1);
      printf("\nVeuillez saisir le second nombre : ");
      scanf("%d", &choix2);
      resultat = choix1 * choix2;
      printf ("///// %d x %d = %lf /////\n", choix1, choix2, resultat);
      break;

      case 2:
      printf("Veuillez saisir le premier nombre : ");
      scanf("%d", &choix1);
      printf("\nVeuillez saisir le second nombre : ");
      scanf("%d", &choix2);
      resultat = choix1 / choix2;
      printf ("///// %d / %d = %lf /////\n", choix1, choix2, resultat);
      break;

      case 3:
      printf("Veuillez saisir le premier nombre : ");
      scanf("%d", &choix1);
      printf("\nVeuillez saisir le second nombre : ");
      scanf("%d", &choix2);
      resultat = choix1 + choix2;
      printf ("///// %d + %d = %lf /////\n", choix1, choix2, resultat);
      break;

      case 4:
      printf("Veuillez saisir le premier nombre : ");
      scanf("%d", &choix1);
      printf("\nVeuillez saisir le second nombre : ");
      scanf("%d", &choix2);
      resultat = choix1 - choix2;
      printf ("///// %d - %d = %lf /////\n", choix1, choix2, resultat);
      break;

      default:
      printf("Vous n'avez pas rentre un nombre correct");
      break;
  }
  printf("\n\n");
  

  }
}