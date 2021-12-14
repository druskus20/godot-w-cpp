#ifndef PLAYER_H
#define PLAYER_H

#include <Godot.hpp>
#include <KinematicBody2D.hpp>

namespace godot {

class Player : public KinematicBody2D {
  GODOT_CLASS(Player, KinematicBody2D)

private:
  float time_passed;

public:
  static void _register_methods();

  Player();
  ~Player(); // Is this the destructor?

  void _init(); // our initializer called by Godot

  void _process(float delta);
  void _process2(float delta);
};

} // namespace godot

#endif
