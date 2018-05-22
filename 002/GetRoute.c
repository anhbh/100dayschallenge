#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>


int main(void)
{
    int pid = getpid();
    printf("Program start at process %d:\n");

    /* create the socket netlink here */
    int sock_fdi = 0;

    sock_fd = socket(AF_NETLINK, SOCK_RAW, NETLINK_ROUTE);
    if (-1 == sock_fd)
        return;


    /* prepare the header */
    struct sockaddr_nl nl_addr;
    nl_addr.nl_family = AF_NETLINK;
    nl_addr.nl_pad = 0;
    nl_addr.nl_pid = pid;
    nl_addr.nl_groups = 1;


    /* bind the created socket */
    bind(sock_fd, (struct sockaddr *)&nl_addr, sizeof(nl_addr));

    /* send the netlink packet */


    /* receive and process the result */
}
