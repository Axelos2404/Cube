#pragma once
#include <sstream>
#include <fstream>
#include <Windows.h>
#include <vector>
class cube {
private:
    float A, B, C;
    // A, B, and C will be the different angles we use to rotate the ecluidian
    // planes.
    
    float cube_width; // Controls the width of the cube
    float speed; // Controls how fast the cube rotates.
    int _window_width; // Controls the width of the window the cube will be positioned in
    int _window_height; // Controls the height of the window the cube will be positioned in
    
    std::vector<float> _z_buffer; // this vector will contain scalars used to add depth std::vector<char> _buffer; // this vector will contain position indexes of characters
    std::vector<char> _buffer;

    char _background_character;
    
    int _horizontal_offset; // Controls the horizontal offset of the cube from the screen
    
    //"_depth_scaling factor Controls how far away (smaller value) or close float_depth_scaling_factor;
    // (Larger value) the cube is to the screen. You can also think of this as // simple a scalar we use to either make the rotating cube smaller or larger.
    float _depth_scaling_factor;

    float calculate_x_pos(int i, int j,int k);
    float calculate_y_pos(int i, int j, int k);
    float calculate_z_pos(int i, int j, int k);
    
    void calculate_for_surface(float cube_x, float cube_y, float cube_z, char symbol);
    
    public:
    cube(float cube_size = 20, int window_width = 160, int window_height = 44, float speed = 1);
    
    int get_window_width() const { return _window_width; }
    int get_window_height() const { return _window_height; }
    
    bool::set_speed(float speed);
    bool::set_background(char c);
    bool::set_size(float factor);
    bool::set_window_width(int width);
    bool::set_window_height(int height);
    
    void rotate();
};
