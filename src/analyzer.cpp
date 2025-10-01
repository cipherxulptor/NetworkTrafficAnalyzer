#include "analyzer.h"
#include <iostream>

void Analyzer::process(const Packet& packet) {
    std::cout << "[Packet] Length: " << packet.length << " bytes" << std::endl;
    // TODO: Add protocol dissection (HTTP, DNS, etc.)
}
