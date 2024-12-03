
#include <sys/socket.h>


class Socket {


    public:
        int fd;

        Socket(int fd);

        void bind(int port); // the socket will listen to any clients trying to connect to the port 8080
        void listen(int max_connections); // sets a limit on the number of connections that can be made to the socket



};


class HttpServer {

    public:
        int port;

        HttpServer(int port);

        void start();
        void stop();

};
