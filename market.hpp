#pragma once
#include "resources.hpp"
#include "farm.hpp"
#include "player.hpp"
#include "animal.hpp"
#include <vector>
#include <ctime>

class Market {
 private:
  float bonus_ = 1.0;
  Player* p_;
  std::time_t last_price_update_;
  std::vector<std::pair<TypeOfAnimals, int>> animal_prices_; // животное будет рандомно генерироваться при покупке
  std::vector<int> resources_prices_;
  void UpdatePrices();
 public:
  Market() = default;
  ~Market() = default;

  void UpdateBonus(float f);
  std::vector<std::pair<Animal&, int>> GetAnimalPrices(); // to buy animals
  std::vector<int> GetResorcesPrices();
  bool BuyAnimal(Animal& a); // false, если не получилось
  bool SellResource(ResourceType r, int amount);

  // void SwitchPlayer(Player& newplayer);  чтобы можно было переключить игрока (хз зачем но мб понадобится)
};
