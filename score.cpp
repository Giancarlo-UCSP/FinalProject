#include "score.h"

Score::Score()
{
    PuntosJugador1=-1;
    PuntosJugador2=0;

    FuenteScore.loadFromFile("daville.ttf");

    ScoreJugador1.setFont(FuenteScore);
    ScoreJugador1.setCharacterSize(40);
    ScoreJugador1.setColor(sf::Color::White);
    ScoreJugador1.setPosition(330,20);
    ScoreJugador2.setFont(FuenteScore);
    ScoreJugador2.setCharacterSize(40);
    ScoreJugador2.setColor(sf::Color::White);
    ScoreJugador2.setPosition(450,20);
}

void Score::AnadirPuntoJugador1()
{
    PuntosJugador1++;
}

void Score::AnadirPuntoJugador2()
{
    PuntosJugador2++;
}

void Score::MostrarScore(sf::RenderWindow& Ventana)
{
    stringstream TextoPuntosJ1;
    stringstream TextoPuntosJ2;

    TextoPuntosJ1 << PuntosJugador1;
    TextoPuntosJ2 << PuntosJugador2;

    ScoreJugador1.setString(TextoPuntosJ1.str());
    ScoreJugador2.setString(TextoPuntosJ2.str());

    Ventana.draw(ScoreJugador1);
    Ventana.draw(ScoreJugador2);
}

int Score::getPuntosJugador1()
{
    return PuntosJugador1;
}

int Score::getPuntosJugador2()
{
    return PuntosJugador2;
}

void Score::MostrarScoreFinal(sf::RenderWindow& Ventana)
{
    ScoreJugador1.setPosition(350,400);
    ScoreJugador1.setCharacterSize(60);
    ScoreJugador1.setColor(sf::Color::Green);
    ScoreJugador2.setPosition(450,410);
    ScoreJugador2.setCharacterSize(40);
    ScoreJugador2.setColor(sf::Color::Red);

    stringstream TextoPuntosJ1;
    stringstream TextoPuntosJ2;

    TextoPuntosJ1 << PuntosJugador1;
    TextoPuntosJ2 << PuntosJugador2;

    ScoreJugador1.setString(TextoPuntosJ1.str());
    ScoreJugador2.setString(TextoPuntosJ2.str());

    Ventana.draw(ScoreJugador1);
    Ventana.draw(ScoreJugador2);
}
