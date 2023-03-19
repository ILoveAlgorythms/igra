#include "farm.hpp"

void Base::GetAnimal(std::string s, Animal* t) {
  Pets_[s] = t;
}

void Base::RemoveAnimal(std::string s) {
  Pets_.erase(s);
}

void Base::Build(std::string s, TypeOfBuildings t) {
  Buildings_[s] = t;
}

void Base::RemoveBuilding(std::string s) {
  Buildings_.erase(s);
}

void Base::TakeAnimalRes(Animal* t) {
  player_res[Milk] += t->anim_res[Milk];
  player_res[Eggs] += t->anim_res[Eggs];
}

void Base::BreedAnimals(std::string son, Animal* a, Animal*b) {
  if (a->gender != b->gender) {
    ::Animal* t;
    Pets_[son] = t;
  }
}

void Base::SellAnimal(std::string s, Animal* t) {
  player_res[Money] += t->anim_res[Money];
  Base::RemoveAnimal(s);
}













