#include "pipe_networking.h"

int server_handshake(int* fromClient){
  mkfifo("mario", 0644); //WKP

}

int client_handshake(int* toServer){
  int fd = open("mario", O_WRONLY);
  char priName[6] = "luigi";
  mkfifo(priName, 0644); //private FIFO
  write(fd, priName, sizeof(priName));
}
  
     