#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <string>
#include <sstream>

using namespace std;

class Score
{
private:
    sf::Font FuenteScore;
    sf::Text ScoreJugador1;
    sf::Text ScoreJugador2;
    int PuntosJugador1;
    int PuntosJugador2;

public:
    Score();
    void MostrarScore(sf::RenderWindow& Ventana);
    void MostrarScoreFinal(sf::RenderWindow& Ventana);
    void AnadirPuntoJugador1();
    void AnadirPuntoJugador2();
    int getPuntosJugador1();
    int getPuntosJugador2();
};

#endif // SCORE_H_INCLUDED
