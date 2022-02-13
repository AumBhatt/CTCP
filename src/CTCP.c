#include <CTCP.h>

int socket_desc = socket(AF_INET, SOCK_STREAM, 0);
struct sockaddr_in server_addr;

int openCTCPSocket(char *ip, int port, bool enableMessages) {
    char *connFailed = "\nTCPClient error: Connection Failed: Could not connect to server.";
    
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    server_addr.sin_addr.s_addr = inet_addr(ip);

    int connectResult = connect(
        socket_desc, 
        (struct sockaddr*)&server_addr, 
        sizeof(server_addr)
    );

    if(connectResult == -1) {
        // Socket Connection Failed :(
        printf(connFailed);
    }
    printf("\nTCPClient: Connected to Server...");
    return 0;
}

int closeCTCPSocket(bool enableMessages) {
    close(socket_desc);
    return 0;
}

int sendCTCPSocket(char *message, bool enableMessages) {
    char *sendFailed = "\nTCPClient error: unable to send message to server...";

    int sendResult = sendto(
        socket_desc, 
        message, 
        strlen(message), 0, 
        (struct sockaddr*)&server_addr, 
        sizeof(struct sockaddr)
    );

    if(sendResult < 0) {
        // Sending Message Failed :(
        printf(sendFailed);
        return -1;
    }
    printf("\nTCPClient: Message sent successfully...");
    return 0;
}

char* recvCTCPSocket(bool enableMessages) {
    
    socklen_t recvLen;
    char *recvFailed = "\nTCPClient error: unable to receive message from server...";
    recvLen = sizeof server_addr;

    char recv_buf[4096];
    recvLen = sizeof server_addr;
    
    int recvResult = recvfrom(socket_desc, recv_buf, sizeof recv_buf, 0, (struct sockaddr*)&server_addr, &recvLen);
    if(recvResult < 0) {
        // printf("\nTCPClient error: unable to receive message from server...");
        return recvFailed;
    }

    char *rtrptr = recv_buf;
    return rtrptr;
}
