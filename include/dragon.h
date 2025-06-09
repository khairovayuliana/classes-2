#include <string>
// declare Dragon class here
class Dragon {
  private:
    // your code here

  public:
    // your code here

    Dragon();
    void registerDragon(const std::string& name, int tail_length, int age, int magic, Type type);
    void registerDragon();
    // методы для твоей реализации
    void train();
    void ageUp();
    void printInfo() const;
    bool canBreatheFire() const;
    void rename();
    void celebrateBirthday();
    bool canFight();

    // геттеры (не обращай внимания, они нужны мне для написания тестов)
    std::string getName() const;
    int getTailLength() const;
    int getAge() const;
    int getMagicPower() const;
    bool isRegistered() const;
    Type getType() const;
    AgeCategory getAgeCategory() const;
};
