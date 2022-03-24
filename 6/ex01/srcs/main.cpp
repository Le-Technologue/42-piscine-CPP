#include <iostream>
#include <stdint.h>

struct Data {
	int some_integer;
};

uintptr_t serialize(Data* ptr) {

    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {

    return (reinterpret_cast<Data*>(raw));
}

int main ( void )
{
	std::cout << "\"Data		data;\"" << std::endl;
	std::cout << "v" << std::endl;
	Data		data;
	std::cout << std::endl;

	std::cout << "\"uintptr_t	ptr_to_data;\"" << std::endl;
	std::cout << "v" << std::endl;
	uintptr_t	ptr_to_data;
	std::cout << std::endl;

	std::cout << "\"Data		*ptr_to_data_container;\"" << std::endl;
	std::cout << "v" << std::endl;
	Data		*ptr_to_data_container;
	std::cout << std::endl;

	std::cout << "\"data.some_integer = 8;\"" << std::endl;
	std::cout << "v" << std::endl;
	data.some_integer = 8;
	std::cout << std::endl;

	std::cout << "\"ptr_to_data = serialize(&data);\"" << std::endl;
	std::cout << "v" << std::endl;
	ptr_to_data = serialize(&data);
	std::cout << std::endl;

	std::cout << "\"ptr_to_data_container = deserialize(ptr_to_data);\"" <<
	std::endl;
	std::cout << "v" << std::endl;
	ptr_to_data_container = deserialize(ptr_to_data);
	std::cout << std::endl;

	std::cout <<
	"\"std::cout << ptr_to_data_container->some_integer << std::endl;\"" <<
	std::endl;
	std::cout << "v" << std::endl;
	std::cout << ptr_to_data_container->some_integer << std::endl;
	std::cout << std::endl;
}
