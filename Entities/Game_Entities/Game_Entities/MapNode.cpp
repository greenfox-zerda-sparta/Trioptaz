#include "MapNode.hpp"



string MapNode::get_tile_image_path() {
  return tile_image_path;
}

MapNode::MapNode() {
}
/*
void MapNode::setpath(string tile_path) {
  tile_image_path = tile_path;
}*/

bool MapNode::get_click_status() {
  return click_status;
}

void MapNode::set_click_status() {
  click_status ? click_status = false : click_status = true;
}

pair<int, int> MapNode::get_cordinates() {
  pair<int, int> coords = { x_coord , y_coord };
  return coords;
}

Node_Types MapNode::get_node_type() {
  return node_type;
}


MapNode::~MapNode() {
}
