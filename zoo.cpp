#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Interface
class Animal{
protected:
    string name;
    string age;
public:
    Animal(string u_name, string u_age):name(u_name), age(u_age){}

    virtual void makeSound() const = 0;
    virtual void eat() const = 0;

    string info(){
        return "Animal: " + name + " " + age;
    }
};

class Lion: public Animal{
public:
    Lion(string u_name, string age): Animal(u_name,age){}

    void makeSound() const override{
        cout<<"Roar! "<<endl;
    }
    void eat() const override{
        cout<<"Lion is eating meat. "<<endl;
    }

};
class Elephant : public Animal{
public:
    Elephant(string u_name, string age): Animal(u_name,age){}

    void makeSound() const override{
        cout<<"Trumpet! "<<endl;
    }
    void eat() const override{
        cout<<"Elephant is eating leaves and grass. "<<endl;
    }

};
class Bird : public Animal{
public:
    Bird(string u_name, string age): Animal(u_name,age){}

    void makeSound() const override{
        cout<<"Chirp! "<<endl;
    }

    void eat() const override{
        cout<<"Bird is eating seeds "<<endl;
    }
};

class Zoo{
private:
    vector<Animal*> animals;
public:
    void addAnimal(Animal* animal){
        animals.push_back(animal);
    }

    void simulateDay(){
        for(int i = 0 ; i < animals.size(); i++){
            cout<<animals[i]->info()<<endl;
            animals[i]->makeSound();
            animals[i]->eat();
        }
    }
};

int main() {
    // Creating instances of animal classes
    Lion lion("Leo", "5");
    Elephant elephant("Ellie", "10");
    Bird bird("Tweetie", "2");

    // Creating a Zoo and adding animals
    Zoo zoo;
    zoo.addAnimal(&lion);
    zoo.addAnimal(&elephant);
    zoo.addAnimal(&bird);

    // Simulating a day at the zoo
    zoo.simulateDay();

    return 0;
}