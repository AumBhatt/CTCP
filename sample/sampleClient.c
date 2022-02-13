#include <stdio.h>
#include <CTCP.h>

int main() {
    char *ip = "127.0.0.1";
    int port = 3000;
    char *message = "Hi from CTCP Client!!!";
    
    int socketStatus = openTCPSocket(ip, port);
    if(socketStatus < 0) {
        return -1;
    }

    int sendStatus = sendTCPSocket(message);
    if(sendStatus < 0) {
        return -1;
    }

    char *response = recvTCPSocket();
    printf("\n%s\n", response);

    closeTCPSocket();
    
    return 0;
}