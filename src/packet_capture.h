#ifndef PACKET_CAPTURE_H
#define PACKET_CAPTURE_H

#include <functional>
#include <vector>
#include <cstdint>

struct Packet {
    std::vector<uint8_t> data;
    int length;
};

class PacketCapture {
public:
    void start(std::function<void(const Packet&)> callback);
};

#endif
