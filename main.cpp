#include "juego.h"

int main()
{
    Juego* Pong = Juego::getSingleton();
    Pong->EmpezarJuego();
    delete Juego::getSingleton();
}
