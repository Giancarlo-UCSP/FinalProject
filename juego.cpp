#include "juego.h"

Juego::Juego()
{
    VentanaPrincipal.create(sf::VideoMode(Ancho,Alto),"Pong!");
    VentanaPrincipal.setVerticalSyncEnabled(true);

    TextureJuego.loadFromFile("Imagenes/FondoMenu.png");
    Fondo.setTexture(TextureJuego);

    MusicaJuego.openFromFile("Musica/back_music.ogg");
    MusicaJuego.setLoop(true);
    MusicaJuego.play();

    Fuente.loadFromFile("TOMB.ttf");

    Titulo.setString("PONG!");
    Titulo.setPosition(260,100);
    Titulo.setCharacterSize(100);
    Titulo.setColor(sf::Color::Green);
    Titulo.setFont(Fuente);

    Press.setString("Presione cualquier Tecla.");
    Press.setPosition(180,300);
    Press.setCharacterSize(30);
    Press.setColor(sf::Color::White);
    Press.setFont(Fuente);

    Lista.setString("1. Jugar.\n\n2. Instrucciones.\n\n3. Creditos.\n\n4. Salir.");
    Lista.setPosition(280,250);
    Lista.setCharacterSize(30);
    Lista.setColor(sf::Color::White);
    Lista.setFont(Fuente);

}

void Juego::EmpezarJuego()
{
    while (VentanaPrincipal.isOpen())
    {
        VentanaPrincipal.clear(sf::Color::White);

        switch (Estado)
        {
        case Espera:
            VentanaPrincipal.draw(Fondo);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Press);
            break;

        case Menu:
            VentanaPrincipal.draw(Fondo);
            VentanaPrincipal.draw(Titulo);
            VentanaPrincipal.draw(Lista);
            break;
        }

        while (VentanaPrincipal.pollEvent(EventoJuego))
        {
            if((EventoJuego.type == sf::Event::Closed) || ((EventoJuego.type == sf::Event::KeyPressed) && (EventoJuego.key.code==sf::Keyboard::Escape)))
            {
                VentanaPrincipal.close();
            }

            if ((EventoJuego.type == sf::Event::KeyPressed) && (Estado == Espera))
            {
                Estado = Menu;
            }

        }

        VentanaPrincipal.display();
    }
}
