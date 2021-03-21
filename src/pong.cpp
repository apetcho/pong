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

// Constructor
Ball::Ball(double y, double x, int speed){
    setY(y);
    setX(x);
    set_speed(speed);
}

//---------------------------------------
// TODO: Use abstract base class Location
// --------------------------------------

// Player
class Player {
public:
    Player(int x, int y);
    int getX() const { return x; }
    int getY() const { return y; }
    int get_height() const { return height; }
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    void draw_player(int x, int y){
        mvaddch(y+2, x, '|');
        mvaddch(y+1, x, '|');
        mvaddch( y,  x, '|');
        mvaddch(y-1, x, '|');
        mvaddch(y-2, x, '|');
    }

private:
    int x;
    int y;
    int height;
};


Player::Player(int y, int x){
    setX(x);
    setY(y);
}

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
