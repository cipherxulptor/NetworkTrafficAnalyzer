#ifndef ANALYZER_H
#define ANALYZER_H

#include "packet_capture.h"

class Analyzer {
public:
    void process(const Packet& packet);
};

#endif
