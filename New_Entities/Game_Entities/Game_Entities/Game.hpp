#pragma once

#include "Map.hpp"
#include "Troop.hpp"
#include "Building.hpp"

class Game {
private:
  Game();
  static Game* game_instance;
  void create_troop_on_map(int, int, json);
  void create_building_on_map(int, int, json);
public:
  Map* map = NULL;
  void update_map_from_json(json);
  void write_json_to_file(json);
  static Game* get_game_instance();
  static void delete_game();
  ~Game();
};

