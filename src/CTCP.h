// Standard C Libraries
#include <stdio.h>
#include <string.h>
#include <unistd.h>
// Socket C Libraries
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>

int openCTCPSocket(char *ip, int port, bool enableMessages);

int closeCTCPSocket(bool enableMessages);

int sendCTCPSocket(char * message, bool enableMessages);

char* recvCTCPSocket(bool enableMessages);