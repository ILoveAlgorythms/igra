#include "animal.hpp"
#include "resources.hpp"
#include "farm.hpp"
#include "player.hpp"

void Animal::Feed() {
  if (bellyful <= 2) {
    bellyful += 2;
  } else {
    bellyful = 5;
  }
}

Base b;

void Animal::Sell() { // только снимаем с вектора животного, а функция получения денег будет связана с этой за счет паттерна composite
  b.Base::RemoveAnimal(name_);
}

void Animal::GiveResources() {
  b.p_.r_ = r1 + b.p_.r_;
}

void Animal::Die() {
  b.Base::RemoveAnimal(name_);
}
