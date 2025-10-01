#include "packet_capture.h"
#include <iostream>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <netinet/if_ether.h>
#include <unistd.h>

void PacketCapture::start(std::function<void(const Packet&)> callback) {
    int sock = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
    if (sock < 0) {
        perror("Socket creation failed");
        return;
    }

    while (true) {
        uint8_t buffer[65536];
        int len = recvfrom(sock, buffer, sizeof(buffer), 0, nullptr, nullptr);
        if (len > 0) {
            Packet p{std::vector<uint8_t>(buffer, buffer+len), len};
            callback(p);
        }
    }
    close(sock);
}
