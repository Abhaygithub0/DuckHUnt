#include<SFML/Graphics.hpp>


int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Red Circle");

    // Create a circle shape
    sf::CircleShape circle(50.0f); // Radius of 50
    circle.setFillColor(sf::Color::Red); // Set the circle color to red
    circle.setPosition(375.0f, 275.0f); // Set position to roughly center the circle in the window

    // Main loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window
        window.clear();

        // Draw the circle
        window.draw(circle);

        // Display the window contents on the screen
        window.display();
    }

    return 0;
}
