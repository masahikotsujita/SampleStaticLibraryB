#include <SampleStaticLibraryB.h>
#include <iostream>
#include <SampleStaticLibraryA.h>

namespace SampleStaticLibraryB {

void SampleStaticLibraryB::HelloWorld() {
	SampleStaticLibraryA::SampleStaticLibraryA::HelloWorld();
	std::cout << "Hello, world! This is SampleStaticLibraryB!!" << std::endl;
}

}
