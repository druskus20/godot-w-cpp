#ifndef PLAYER_H
#define PLAYER_H

#include <Godot.hpp>
#include <KinematicBody.hpp>

namespace godot {

class Player : public KinematicBody {
  GODOT_CLASS(Player, KinematicBody)

private:
  float time_passed;

public:
  static void _register_methods();

  Player();
  ~Player(); // Is this the destructor?

  void _init(); // our initializer called by Godot

  void _process(float delta);
  void _physics_process(float delta);
};

} // namespace godot

#endif
