#include <iostream>
#include <set>
#include <vector>
#include <list>

template <class T>
void print_container(const T& cont)
{
	for (auto it = cont.cbegin(); it != cont.cend(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set);

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list);


	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector);
	return 0;
}
