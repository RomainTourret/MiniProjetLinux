#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void Projet();
void AffichageMenu();
void Cd(char tab[100], int iCpt);
void ListerRepC(char tab[100], int iCpt);
void Lister();
void Supprimer(char tab[100], int iCpt);
void Renommer(char tab[100], int iCpt);
void ChangerPrompt(char tab[100], int iCpt);


int main()
{
    Projet();
    return 0;
}

void Cd(char tab[100], int iCpt)
{
    char* carac;

    ///On lit l'entrer de commande
    while(tab[iCpt] =! ' ')
    {
        carac = carac + tab[iCpt];
        iCpt++;
    }
    //On effectue la commande
    fork();
    execl("/bin/sh", "-c", "cd", carac, NULL);
    kill();
}

void ListerRepC(char tab[100], int iCpt)
{
    char* carac;

    ///On lit l'entrer de commande
    while(tab[iCpt] =! ' ')
    {
        carac = carac + tab[iCpt];
        iCpt++;
    }
}

void Lister()
{
    fork();
    execl("/bin/ls","ls","-l",NULL);
    kill();
}

void Supprimer(char tab[100], int iCpt)
{
    char* carac;

    ///On lit l'entrer de commande
    while(tab[iCpt] =! ' ')
    {
        carac = carac + tab[iCpt];
        iCpt++;
    }
}

void Renommer(char tab[100], int iCpt)
{
    char* carac;

    ///On lit l'entrer de commande
    while(tab[iCpt] =! ' ')
    {
        carac = carac + tab[iCpt];
        iCpt++;
    }
}

void ChangerPrompt(char tab[100], int iCpt)
{
    char* carac;

    ///On lit l'entrer de commande
    while(tab[iCpt] =! ' ')
    {
        carac = carac + tab[iCpt];
        iCpt++;
    }
}


void Projet()
{

    //On initialise qq variable
    int iCpt = 0, iSortie = 0;
    char phrase[100];
    char* carac;

    //Boucle de projet
    while(iSortie == 0)
    {

        //On affiche le menu
        AffichageMenu();

        //On lit la phrase rentrer
        fgets(phrase, 100, stdin);

        ///On lit l'entrer de commande
        while(phrase[iCpt] =! ' ')
        {
            carac = carac + phrase[iCpt];
            iCpt++;
        }
        ///On lacent les fonctions Linux
        if(carac == "cd")
        {
            Cd(phrase, iCpt);
        }
        else if(carac == "Lister_RepC")
        {
            ListerRepC(phrase, iCpt);
        }
        else if(carac == "changePrompt")
        {
            ChangerPrompt(phrase, iCpt);
        }
        else if(carac == "Lister")
        {
            Lister(phrase, iCpt);
        }
        else if(carac == "supprimer")
        {
            Supprimer(phrase, iCpt);
        }
        else if(carac == "renommer")
        {
            Renommer(phrase, iCpt);
        }
        else if(carac == "exit")
        {
            iSortie = 1;
        }
        else
        {
            ///On affiche un message d'erreur
            //On réinitialise l'affichage console
        }
    }
}

///Fonction affichant le menu de choix
void AffichageMenu()
{

}

