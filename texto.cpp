#include "juego.h"

void Juego::CrearTextos()
{
    Titulo.setString("PONG!");
    Titulo.setPosition(190,100);
    Titulo.setCharacterSize(150);
    Titulo.setColor(sf::Color(125,158,192));
    Titulo.setFont(FuenteTitulo);

    Press.setString("Presione cualquier Tecla.");
    Press.setPosition(180,400);
    Press.setCharacterSize(30);
    Press.setColor(sf::Color::White);
    Press.setFont(FuenteJuego);

    Lista.setString("1. Jugar.\t\t2. Instrucciones.\n\n3. Creditos.\t  4. Salir.");
    Lista.setPosition(155,350);
    Lista.setCharacterSize(30);
    Lista.setColor(sf::Color::White);
    Lista.setFont(FuenteJuego);

    Instrucciones.setString("Bienvenido a PONG!, seleccione el Modo de Juego.\nUse las teclas 'Arriba' y 'Abajo' para mover al Jugador 1.\nUse las teclas 'W' y 'S' para mover al Jugador 2.\n\nPara regresar al Menu Principal presione 'B'.");
    Instrucciones.setPosition(50,250);
    Instrucciones.setCharacterSize(20);
    Instrucciones.setColor(sf::Color::White);
    Instrucciones.setFont(FuenteJuego);

    Creditos.setString("Juego creado por:\nGiancarlo Andre Anco Valdivia.\n\ngiancarlo.anco@ucsp.edu.pe\n\nPresione 'B' para regresar al Menu Principal.");
    Creditos.setPosition(50,250);
    Creditos.setCharacterSize(20);
    Creditos.setColor(sf::Color::White);
    Creditos.setFont(FuenteJuego);
}

