#include <SFML/Graphics.hpp>
sf::RectangleShape bar(sf::Vector2f(1,0));
sf::RectangleShape pixel(sf::Vector2f(1,1));

int main()
{
    sf::RenderWindow window(sf::VideoMode(1366, 768), "");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
