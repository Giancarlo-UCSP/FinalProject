#include "juego.h"

//Singleton
Juego* Juego::Singleton = nullptr;

Juego::Juego()
{
    VentanaPrincipal.create(sf::VideoMode(Ancho,Alto),"Pong!");
    VentanaPrincipal.setVerticalSyncEnabled(true);

    TextureJuegoMenu.loadFromFile("Imagenes/FondoMenu1.png");
    FondoMenu.setTexture(TextureJuegoMenu);

    TextureJuego.loadFromFile("Imagenes/FondoEspacialJuego1.png");
    FondoJuego.setTexture(TextureJuego);

    MusicaJuego.openFromFile("Musica/back_music.ogg");
    MusicaJuego.setLoop(true);
    MusicaJuego.play();

    FuenteTitulo.loadFromFile("deadjim.ttf");
    FuenteJuego.loadFromFile("daville.ttf");

    CrearTextos();
}

void Juego::EmpezarJuego()
{
    while (VentanaPrincipal.isOpen())
    {
        VentanaPrincipal.clear(sf::Color::White);

        SeleccionarOpciones();

        RestriccionesMenu();

        VentanaPrincipal.display();
    }
}

//Singleton
Juego* Juego::getSingleton()
{
    if(!Singleton)
        Singleton = new Juego();
    return Singleton;
}

