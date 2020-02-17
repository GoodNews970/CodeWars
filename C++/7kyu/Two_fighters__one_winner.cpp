/* Two fighters, one winner

Create a function that returns the name of the winner in a fight between two fighters.

Each fighter takes turns attacking the other and whoever kills the other first is victorious.
Death is defined as having health <= 0.

Each fighter will be a Fighter object/instance. See the Fighter class below in your chosen language.

Both health and damagePerAttack (damage_per_attack for python) will be integers larger than 0.
You can mutate the Fighter objects.
Example:

class Fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter(){};

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
}
*/

class Fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter(){};

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
}

#include <string>

std::string declareWinner(Fighter *fighter1, Fighter *fighter2, std::string firstAttacker)
{
    while (fighter1->getHealth() > 0 && fighter2->getHealth() > 0)
    {
        if (fighter1->getName() == firstAttacker)
        {
            fighter2->setHealth(fighter2->getHealth() - fighter1->getDamagePerAttack());
            if (fighter2->getHealth() > 0)
            {
                fighter1->setHealth(fighter1->getHealth() - fighter2->getDamagePerAttack());
            }
        }
        else if (fighter2->getName() == firstAttacker)
        {
            fighter1->setHealth(fighter1->getHealth() - fighter2->getDamagePerAttack());
            if (fighter1->getHealth() > 0)
            {
                fighter2->setHealth(fighter2->getHealth() - fighter1->getDamagePerAttack());
            }
        }
        else
        {
            return "First attacker not found";
        }
    }
    return (fighter2->getHealth() <= 0) ? fighter1->getName() : fighter2->getName();
}