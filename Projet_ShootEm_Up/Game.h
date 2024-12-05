#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;

class Game
{
public:
    Game();
    void run();

private:
    void event(Event& _event);
    // void update();
    void drawPlayer(float width, float height);
    void rendu();

protected:
    CircleShape _player;
    RenderWindow window; // Changement ici : pas de r�f�rence
};

#endif // !GAME_H
