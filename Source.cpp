#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace sf;
using namespace std;

int winner(int game[]) {
    if (game[0] == game[1] && game[0] == game[2] && game[0]!=0) {
        return game[0];
    }
    if (game[3] == game[4] && game[3] == game[5] && game[5] != 0) {
        return game[3];
    }
    if (game[6] == game[7] && game[6] == game[8] && game[8] != 0) {
        return game[6];
    }
    if (game[0] == game[3] && game[0] == game[6] && game[6] != 0) {
        return game[0];
    }
    if (game[1] == game[4] && game[1] == game[7] && game[7] != 0) {
        return game[1];
    }
    if (game[8] == game[2] && game[5] == game[2] && game[2] != 0) {
        return game[8];
    }
    if (game[0] == game[4] && game[0] == game[8] && game[8] != 0) {
        return game[0];
    }
    if (game[6] == game[2] && game[4] == game[2] && game[2] != 0) {
        return game[6];
    }
    return 0;
}

int main() {
    sf::RenderWindow homewindow(sf::VideoMode(800, 800), "main window");

    sf::Font mainfont;
    if (!mainfont.loadFromFile("C:\\Users\\USER\\Downloads\\Amatic-Bold.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("", mainfont, 100);
    text.setFillColor(sf::Color::White);
    text.setStyle(sf::Text::Regular);
    text.setPosition(200, 650);

    Texture cross;
    if (!cross.loadFromFile("C:\\Users\\USER\\Pictures\\Screenshots\\cross.png")) {
        return EXIT_FAILURE;
    }
    Texture circle;
    if (!circle.loadFromFile("C:\\Users\\USER\\Pictures\\Screenshots\\circle.png")) {
        return EXIT_FAILURE;
    }
    Sprite sprite1, sprite2, sprite3, sprite4, sprite5, sprite6, sprite7, sprite8, sprite9;
    sprite1.setPosition(100, 30);
    sprite2.setPosition(306,30);
    sprite3.setPosition(513,30);
    sprite4.setPosition(100,236);
    sprite5.setPosition(306,236);
    sprite6.setPosition(513,236);
    sprite7.setPosition(100,442);
    sprite8.setPosition(306,442);
    sprite9.setPosition(513,442);
    int game[9] = { 0 };


    RectangleShape line1(sf::Vector2f(10, 610));
    line1.setFillColor(Color::White);
    line1.setPosition(291, 20);

    RectangleShape line2(sf::Vector2f(10, 610));
    line2.setFillColor(Color::White);
    line2.setPosition(497, 20);

    RectangleShape line3(sf::Vector2f(610, 10));
    line3.setFillColor(Color::White);
    line3.setPosition(95, 216);

    RectangleShape line4(sf::Vector2f(610, 10));
    line4.setFillColor(Color::White);
    line4.setPosition(95, 422);

    int count = 1;

    //*****************************MAIN LOOP*************************************//    
    while (homewindow.isOpen()) {
        // Event handling
        sf::Event homeevent;
        while (homewindow.pollEvent(homeevent)) {
            if (homeevent.type == sf::Event::Closed)
                homewindow.close();
            
            if (homeevent.type == sf::Event::MouseButtonPressed) {
                if (homeevent.mouseButton.button == sf::Mouse::Left) {
                    sf::Vector2i mousePos = sf::Mouse::getPosition(homewindow);

                    // Check if the mouse click is inside the button
                    if (mousePos.x >= 95 && mousePos.x <= 291 && mousePos.y >= 20 && mousePos.y <= 216 && !game[0]) {
                        cout << "box 1 pressed\n";
                        if (count==1)
                            sprite1.setTexture(cross);
                        else if(count==2)
                            sprite1.setTexture(circle);
                        game[0] = count;
                    }
                    else if (mousePos.x >= 301 && mousePos.x <= 497 && mousePos.y >= 20 && mousePos.y <= 216 && !game[1]) {
                        cout << "box 2 pressed\n";
                        if (count == 1)
                            sprite2.setTexture(cross);
                        else if (count == 2)
                            sprite2.setTexture(circle);
                        game[1] = count;
                    }
                    else if (mousePos.x >= 507 && mousePos.x <= 703 && mousePos.y >= 20 && mousePos.y <= 216 && !game[2]) {
                        cout << "box 3 pressed\n";
                        if (count == 1)
                            sprite3.setTexture(cross);
                        else if (count == 2)
                            sprite3.setTexture(circle);
                        game[2] = count;
                    }
                    else if (mousePos.x >= 95 && mousePos.x <= 291 && mousePos.y >= 226 && mousePos.y <= 422 && !game[3]) {
                        cout << "box 4 pressed\n";
                        if (count == 1)
                            sprite4.setTexture(cross);
                        else if (count == 2)
                            sprite4.setTexture(circle);
                        game[3] = count;
                    }
                    else if (mousePos.x >= 301 && mousePos.x <= 497 && mousePos.y >= 226 && mousePos.y <= 422 && !game[4]) {
                        cout << "box 5 pressed\n";
                        if (count == 1)
                            sprite5.setTexture(cross);
                        else if (count == 2)
                            sprite5.setTexture(circle);
                        game[4] = count;
                    }
                    else if (mousePos.x >= 507 && mousePos.x <= 703 && mousePos.y >= 226 && mousePos.y <= 422 && !game[5]) {
                        cout << "box 6 pressed\n";
                        if (count == 1)
                            sprite6.setTexture(cross);
                        else if (count == 2)
                            sprite6.setTexture(circle);
                        game[5] = count;
                    }
                    else if (mousePos.x >= 95 && mousePos.x <= 291 && mousePos.y >= 432 && mousePos.y <= 628 && !game[6]) {
                        cout << "box 7 pressed\n";
                        if (count == 1)
                            sprite7.setTexture(cross);
                        else if (count == 2)
                            sprite7.setTexture(circle);
                        game[6] = count;
                    }
                    else if (mousePos.x >= 301 && mousePos.x <= 497 && mousePos.y >= 432 && mousePos.y <= 628 && !game[7]) {
                        cout << "box 8 pressed\n";
                        if (count == 1)
                            sprite8.setTexture(cross);
                        else if (count == 2)
                            sprite8.setTexture(circle);
                        game[7] = count;
                    }
                    else if (mousePos.x >= 507 && mousePos.x <= 703 && mousePos.y >= 432 && mousePos.y <= 628 && !game[8]) {
                        cout << "box 9 pressed\n";
                        if (count == 1)
                            sprite9.setTexture(cross);
                        else if (count == 2)
                            sprite9.setTexture(circle);
                        game[8] = count;
                    }
                }
                int win = winner(game);
                if (win == 1) {
                    count = 0;
                    text.setString("Player 1 Wins");
                    cout << "PLAYER 1 WINS\n";
                }
                else if(win==2) {
                    count = 0;
                    text.setString("Player 2 Wins");
                    cout << "PLAYER 2 WINS\n";
                }
                if (count == 1)
                    count = 2;
                else if(count==2)
                    count = 1;
            }
            if (count == 1) {
                text.setString("Player 1 turn");
            }
            else if(count==2) {
                text.setString("Player 2 turn");
                cout << "player 2 turn\n";
            }

                homewindow.clear(sf::Color::Black); // Set background color to teal
                homewindow.draw(line1);
                homewindow.draw(line2);
                homewindow.draw(line3);
                homewindow.draw(line4);
                homewindow.draw(text);
                homewindow.draw(sprite1);
                homewindow.draw(sprite2);
                homewindow.draw(sprite3);
                homewindow.draw(sprite4);
                homewindow.draw(sprite5);
                homewindow.draw(sprite6);
                homewindow.draw(sprite7);
                homewindow.draw(sprite8);
                homewindow.draw(sprite9);
                homewindow.display();
            
        }
    }
}