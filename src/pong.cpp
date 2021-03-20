#include<ncurses.h>
#include<iostream>

// Ball
class Ball {
public:
    Ball(double x, double y, int speed);

    //
    double getX();
    double getY();
    int get_speed();
    void setX(double x);
    void setY(double y);
    void set_speed(int speed);
    void draw_ball(double x, double y);

private:
    double x; // XXX Check the type
    double y; // XXX Check the type
    int speed;
};

// TODO: Use abstract base class Location
// Player
class Player {
public:
    Player(int x, int y);
    int getX();
    int getY();
    int get_height();
    void setX(int x);
    void setY(int y);

    void draw_player(int x, int y);

private:
    int x;
    int y;
    int height;
};

// PongEngine
class PongEngine {
public:
    // Player player[2];
    // Ball ball;
    //
    // setup()
    // mainloop()
    // terminate()

private:
    // ch
    // width
    // height
    // dir
    // playerPts[2] = {0, 0};
    // quit
    // wallTexture, playerTexture;
    // playerServe[2] = {false, false};

    // input()
    // draw()
    // logic()
};


/**
 * MAIN DRIVER
 */
int main(){
    // create game object, ex: pong = new PongEngine;
    // pong->setup()
    // pong->mainloop()
    // pong->terminate()

    return 0;
}
