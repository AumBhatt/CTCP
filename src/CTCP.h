// Standard C Libraries
#include <stdio.h>
#include <string.h>
#include <unistd.h>
// Socket C Libraries
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>

int socket_desc;
struct sockaddr_in server_addr;

int openCTCPSocket(char *ip, int port, int enableMessages);

int closeCTCPSocket();

int sendCTCPSocket(char * message, int enableMessages);

char* recvCTCPSocket(int enableMessages);