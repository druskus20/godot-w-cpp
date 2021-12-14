#include "player.h"
#include "GDNative.hpp"
#include "Input.hpp"
#include "Node.hpp"
#include <iostream>

using namespace godot;

void Player::_register_methods() {
  register_method("_process", &Player::_process);
}

Player::Player() {}

Player::~Player() {
  // add your cleanup here
}

void Player::_init() {
  // initialize any variables here
  time_passed = 0.0;
}

void Player::_process(float delta) {
  time_passed += delta;

  // Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 10.0
  // + (10.0 * cos(time_passed * 1.5))); set_position(new_position);

  // Godot::print("Hello from C++!");

  Input *input = Input::get_singleton();

  // move the character when the user presses the arrow keys
  if (input->is_action_pressed("move_right")) {
    std::cout << "moving right" << std::endl;
    move_and_slide(Vector2(200.0, 0.0));
  }
  if (input->is_action_pressed("move_left")) {
    std::cout << "moving left" << std::endl;
    move_and_slide(Vector2(-200.0, 0.0));
  }
  if (input->is_action_pressed("move_forward")) {
    std::cout << "moving up" << std::endl;
    move_and_slide(Vector2(0.0, -200.0));
  }
  if (input->is_action_pressed("move_backward")) {
    std::cout << "moving down" << std::endl;
    move_and_slide(Vector2(0.0, +200.0));
  }
}
