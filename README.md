# Zoo Simulation Program

This C++ program simulates a day at the zoo using object-oriented principles. It features a basic zoo management system with animal classes, an interface, and a Zoo class to manage and simulate the activities of different animals.

## Overview

The program consists of the following classes:

### Animal

The `Animal` class is an abstract class serving as an interface for different types of animals. It defines common attributes like `name` and `age` and abstract methods `makeSound` and `eat`. The `info` method provides general information about the animal.

### Lion

The `Lion` class is a concrete implementation of the `Animal` class, representing a lion. It overrides the `makeSound` and `eat` methods with specific behaviors for a lion.

### Elephant

The `Elephant` class is another concrete implementation of the `Animal` class, representing an elephant. It also overrides the `makeSound` and `eat` methods with specific behaviors for an elephant.

### Bird

The `Bird` class is yet another concrete implementation of the `Animal` class, representing a bird. It provides specific implementations for the `makeSound` and `eat` methods.

### Zoo

The `Zoo` class manages a collection of animals and provides methods to add animals and simulate a day at the zoo. It uses a vector to store pointers to `Animal` objects.

## Usage

The program demonstrates the use of polymorphism and abstraction through the `Animal` interface and its concrete implementations. It creates instances of different animal types, adds them to the zoo, and simulates a day, showcasing their unique behaviors.

## How to Run

To run the program, compile the source code and execute the resulting executable. The program will output information about each animal in the zoo, including their sounds and eating habits.

```bash
g++ zoo_simulation.cpp -o zoo_simulation
./zoo_simulation
