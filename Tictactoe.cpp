#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>

    Tictactoe::Tictactoe() : _symboleCourant ('X')

    }

    void Tictactoe::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Tictactoe::testeVictoireVerticale(){
        for(int i=0;1<2;1++){
        if(_grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(1,0)
        && _grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(2,0)
        && -_grilleDeJeu.getContent(0,0)!' ')
        {return true;}
        }
        return : false;
    }

    bool Tictactoe::testeVictoireHorizontale(){
        return : false
    }

    bool Tictactoe::testeVictoireDiagonale(){

    }

    bool Tictactoe::testeJeuNul(){

    }

    void Tictactoe::finTour(){
     _symboleCourant== ‘X’?_symboleCourant =‘O’:_symboleCourant =’X’;
    }

#endif