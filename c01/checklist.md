## Ex00
- Implement a Zombie class
- Private attribute `name`
- Add a member function void announce(void); that announces themselves as `<name>: BraiiiiiinnnzzzZ...`
- Without printing the `< and >`. If zombie named Foo, message should be `Foo: BraiiiiinnnzzzZ...`
- Which case is better to allocate zombies on heap or stack
- Zombie must be destoryed when no use, Destuctor must print log message with the name of the zombie for debugging

## Ex01
- Implement the following function: `Zombie *zombieHoard(int N, std::string name);`
- Must allocate N-th zombie in a single memory allocation
- Each of them must be initialize with the name passed as a parameter
- The function return the pointer pointing to the first Zombie
- No memory leaks

## Ex02
- A string variable initialize to "HI THIS IS BRAIN"
- `stringPTR`: a pointer to string
- `stringREF`: a reference to string
- Program must print:
	- Memory address of the string variable
	- Memory address held by stringPTR
	- Memory address held by stringREF
	- Value of string variable
	- Value pointed by stringPTR
	- Value pointed by stringREF
- Difference between Pointer and reference

## Ex03
- A Weapon class
	- Private std::string attribute `type`
	- `getType()` member function that returns a const reference to `type`
	- `setType()` member function that sets `type` using the new value passed as parameter
- Create HumanA and HumanB
	- Both of them have a Weapon and a name(std::string)
	- Member function Attack()
		- Displays `<name>` attacks with their `<attack type>`
- `HumanA` takes it weapon in the constructor while `HumanB` dont, `HumanA` will **always** be armed
- `HumanB` may **Not always** have a weapon
- **No Memory leaks**
- **Bonus**: `In which case do you think it would be best to use a pointer to
Weapon? And a reference to Weapon? Why? Think about it before starting this exercise.`

Ex04
- Create a program that takes in **3 parameters**, which is `filename` and `2 strings` which is `s1` and `s2`
- It **Must** open the file `<filename>` and copy i's content into the a new file `<filename>.replace`, replacing every occurrence of s1 with s2
- Using C file manipulation is **forbidden**
- All member function of `std::string` is allowed except `replace`
- Handle unexpected inputs and error eg. `Empty file, Missing file` etc.

## Ex04
