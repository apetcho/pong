#include<ncurses.h>
#include<iostream>

// Ball
class Ball {
public:
    Ball(double x, double y, int speed);

    //
    double getX() const{ return x; }
    double getY() const { return y; }
    // XXX: double speed; ???
    int get_speed() const { return speed; }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    void set_speed(int speed){ this->speed = speed; }

    //
    void draw_ball(double x, double y){
        mvaddch(x, y, 'o');
    }

private:
    double x;
    double y;
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
