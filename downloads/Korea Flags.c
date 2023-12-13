#include <stdio.h>
#include <gd.h>
#include <math.h>

  void draw_KoreaFlag_flag(gdImagePtr img);
  void draw_white_sun(gdImagePtr img, int center_x, int center_y, int sun_radius, int white, int red, int blue);

int main() {
    int width = 1200;
    int height = width * 3 / 5;

    // 白色背景
    sf::RectangleShape background(sf::Vector2f(width, height));
    background.setFillColor(sf::Color::White);

    // 红藍色圆
    sf::CircleShape circle(width / 5);
    circle.setFillColor(sf::Color(0, 0, 153)); // 藍色
    circle.setPosition(width / 2 - width / 5, height / 2 - width / 5);

    sf::CircleShape circle2(width / 10);
    circle2.setFillColor(sf::Color::Red);
    circle2.setPosition(width / 2 - width / 10, height / 2 - width / 10);

    // 十八個紅色線條
    sf::RectangleShape line(sf::Vector2f(width, 10));
    line.setFillColor(sf::Color::Red);
    line.setPosition(0, height / 2 - 5);
    line.rotate(45);

    // 將所有形狀繪製到窗口中
    window.draw(background);
    window.draw(circle);
    window.draw(circle2);

    for (int i = 0; i < 4; ++i) {
        window.draw(line);
        line.rotate(90);
    }
}

int main() {
    int width = 1200;
    int height = width * 3 / 5;

    sf::RenderWindow window(sf::VideoMode(width, height), "Korean Flag");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // 繪製韓國國旗
        drawKoreanFlag(window);

        window.display();
    }

    return 0;
}