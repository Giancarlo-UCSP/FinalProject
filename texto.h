#ifndef TEXTO_H_INCLUDED
#define TEXTO_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <string.h>

using namespace std;

class Texto : sf::Text
{
public:
    Texto();
    void Parametros(string Palabras);
};

#endif // TEXTO_H_INCLUDED
