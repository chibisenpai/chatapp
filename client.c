#include <studio.h>
#include <sys/socket.h>
#include <netinet/in.h>

int int client()
{
  int socketFD = socket(domain: AF_INET, type: SOCK_STREAM, protocol: 0);
  char* ip = "64.233.180.26"
  struct sockaddr_in address;
  address.sin_farmily = AF_INET;
  address.sin_port = htons(hostshort: 80);
  address.sin_addr;
  inet_pton(af: AF_INET,cp: ip, buf:&address.sin_addr.s_addr);


  int result = connect(fd:socketFD, addr:&address, len:sizeof address);
  
  if (result == 0)
    printf(format:"connection was successful\n");

  return 0;
} 
