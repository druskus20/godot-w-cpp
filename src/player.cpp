#include "player.h"
#include "GDNative.hpp"
#include "Input.hpp"
#include "Node.hpp"
#include <iostream>

using namespace godot;

void Player::_register_methods() {
  register_method("_process", &Player::_process);
  register_method("_physics_process", &Player::_physics_process);
}

Player::Player() {}

Player::~Player() {
  // add your cleanup here
}

void Player::_init() {
  // initialize any variables here
  time_passed = 0.0;
}

void Player::_process(float delta) {}

void Player::_physics_process(float delta) {
  Input *input = Input::get_singleton();

  if (input->is_action_pressed("move_left")) {
    move_and_slide(Vector3(0, 0, 25));
  }
  if (input->is_action_pressed("move_right")) {
    move_and_slide(Vector3(0, 0, -25));
  }
  if (input->is_action_pressed("move_backward")) {
    move_and_slide(Vector3(25, 0, 0));
  }
  if (input->is_action_pressed("move_forward")) {
    move_and_slide(Vector3(-25, 0, 0));
  }
}
