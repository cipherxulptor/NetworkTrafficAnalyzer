#include "packet_capture.h"
#include "analyzer.h"
#include <iostream>

int main() {
    std::cout << "Starting Network Traffic Analyzer..." << std::endl;
    
    PacketCapture capture;
    Analyzer analyzer;

    capture.start([&](const Packet& packet){
        analyzer.process(packet);
    });

    return 0;
}
