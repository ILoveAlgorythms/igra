#pragma once

enum TypeOfAnimals { Hen, Cow, Pig };

class Animal {
 private:
  int time_ = 0;  // время жизни
  int bellyful = 0;
 public:
  virtual void Feed();
  virtual void Sell();
  virtual void GiveResources();
  virtual void Die();
  virtual ~Animal() = default;
};

class Pig : public Animal {

};

class Hen : public Animal {};

class Cow : public Animal {};
