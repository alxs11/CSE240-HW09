
// CSE240 Spring 2023 HW9
// Alexis Urias
// Write the compiler used: Visual studio

#include "enemy.h"
#include <iostream>
#include <string>

using namespace std;

// Q1 Enemy (2 points)
// Enemy() constructor assigns the following default values to class data members
// name: Goblin
// level: 1
// Health: 4
// Damage: 2
Enemy::Enemy()
{
	// Write the code below
	name = "Goblin";	// assigned values to class data members
	level = 1;
	health = 4;
	damage = 2;
}

// Q2 (18 points)
// 2 points for each function. Setters and getters will be tested together.

// Define all the class member functions.
// While defining member functions, note that these functions will be called using 
// an 'Enemy' object which will represent one enemy.
// Eg-  Enemy p[10]; creates 10 Enemy objects
//		p[2].setLevel(19); will set 3rd Enemy's level to 19

// setName assigns 'name_input' to class data member 'name'
void Enemy::setName(string name_input)
{
	// Write the code below
	name = name_input;		// assigned name_input to name
}

// setLevel assigns level_input to class data member 'level'
void Enemy::setLevel(int level_input)
{
	// Write the code below
	level = level_input;		// assigned level_input to level
}

// setHealth assigns 'health_input' to class data member 'health'
void Enemy::setHealth(int health_input)
{
	// Write the code below
	health = health_input;		// assigned health_input to health
}

// setDamage assigns 'damage_input' to class data member 'damage'
void Enemy::setDamage(int damage_input)
{
	// Write the code below
	damage = damage_input;			// assigned damage_input to damage
}

// displayEnemy displays the name, level, health, and damage of the enemy
// See expected output in question file. Put each attribute on one line.
// Hint: End each line with an endl.
void Enemy::displayEnemy()
{
	// Write the code below
	cout << "Name: " << name << endl;		// display values of enemy
	cout << "Level: " << level << endl;
	cout << "Health: " << health << endl;
	cout << "Damage: " << damage << endl;
}

// getName returns the class data member 'name'.
string Enemy::getName()
{
	// Write the code below
	return name;		// return name
}

// getLevel returns the class data member 'level'.
int Enemy::getLevel()
{
	// Write the code below
	return level;		// return level
}

// getHealth returns the class data member 'health'.
int Enemy::getHealth()
{
	// Write the code below
	return health;		//return health
}

// getDamage returns the class data member 'damage'.
int Enemy::getDamage()
{
	// Write the code below
	return damage;		//retrun damage
}