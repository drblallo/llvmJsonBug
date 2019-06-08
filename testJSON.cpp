#include <iostream>
#include <llvm/Support/JSON.h>
#include <sstream>

int testLLVMJSON()
{
	std::string json = "[ 1, 2, 3]";
	auto js = llvm::json::parse(json)->getAsArray();

	for (auto& v : *js)
		std::cout << v.getAsNumber().hasValue() << "\n";

	return 0;
}

int main(int argc, char* argv[]) { return testLLVMJSON(); }
