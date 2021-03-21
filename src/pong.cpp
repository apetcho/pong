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
    PongEngine();
    // Player player[2];
    // Ball ball;
    //
    void setup();
    void mainloop();
    void terminate();

    ~PongEngine(){}
private:
    int ch;
    int width = 80;     // Board/Field/Screen width
    int height = 24;    // Board/Field/Screen height
    int dir = 1;        // --
    int playerPts[2] = {0, 0}; // XXX
    bool quit;          // Termination flag
    char wallTexture, playerTexture;
    bool playerServe[2] = {false, false}; // XXX

    // Two players
    Player players[] = {Player(height/2, 2), Player(height/2, width-3)};
    Ball ball = Ball(height/2, 3, 1);


    void input();
    void draw();
    void logic();
};


PongEngine::PongEngine(){
    //int ch;
    //int width = 80;     // Board/Field/Screen width
    //int height = 24;    // Board/Field/Screen height
    //int dir = 1;        // --
    //int playerPts[2] = {0, 0}; // XXX
    //bool quit;          // Termination flag
    //char wallTexture, playerTexture;
    //bool playerServe[2] = {false, false}; // XXX

    // Two players
    //Player players[] = {Player(height/2, 2), Player(height/2, width-3)};
    //Ball ball = Ball(height/2, 3, 1);

}

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
