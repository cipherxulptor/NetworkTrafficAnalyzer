# Network Traffic Analyzer

A C++ based network packet analysis tool using raw sockets.  
It can capture and analyze TCP/UDP traffic in real-time, dissect HTTP/DNS/custom protocols, and process 10,000+ packets/sec with minimal latency.

## Features
- Real-time TCP/UDP traffic capture
- Protocol dissection for HTTP, DNS, and custom protocols
- Multithreaded packet processing
- Integration with networking stack for connection monitoring
- Security vulnerability detection

## Build Instructions
```bash
make
./analyzer
```

## Dependencies
- C++11 or later
- POSIX sockets (Linux)
- Wireshark (optional, for packet comparison)
