#include <stdio.h>
#include <CTCP.h>

int main() {
    char *ip = "127.0.0.1";
    int port = 3000;
    char *message = "Hi from CTCP Client!!!";
    
    int socketStatus = openCTCPSocket(ip, port, 0);
    if(socketStatus < 0) {
        return -1;
    }

    int sendStatus = sendCTCPSocket(message, 0);
    if(sendStatus < 0) {
        return -1;
    }

    char *response = recvCTCPSocket(0);
    printf("\n%s\n", response);

    closeCTCPSocket();
    
    return 0;
}