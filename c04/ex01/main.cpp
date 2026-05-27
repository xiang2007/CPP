#include "Dog.hpp"
#include "Cats.hpp"
#include "WrongCats.hpp"

int main()
{
	const Animal *arr[100];

	cout << "---Begin initializing Cats and Dogs---\n" << endl;
	for (int i = 0; i < 50; i++)
		arr[i] = new Dog();
	cout << "---50 Dogs initialized---" << endl;
	for (int i = 50; i < 100; i++)
		arr[i] = new Cat();
	cout << "---50 Cats initialzied---" << endl;
	cout << "---Finished initializing 100 Animals---\n" << endl;
	cout << "Animals making some sounds:" << endl;
	for (int i = 0; i < 100; i++) {
		cout << "Animal " << i << ' ';
		arr[i]->makeSound();
	}
	cout << "\n---Begin releasing Animals to the wild---\n" << endl;
	for (int i = 0; i < 100; i++)
		delete arr[i];
	cout << "\n---All animals are released to the wild---" << endl;
	return 0;
}
