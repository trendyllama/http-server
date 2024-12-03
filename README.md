# http-server


## How Sockets Work

If a program (or process) running on a host is like a house, a socket is like a door that lets mails go in and out. When a person in the house receives or delivers a letter, he or she can be agnostic to how the mail is being delivered in the outside world.


| Server | Client |
| ------ | ------ |
| Create the socket for the incoming request | |
| Wait for incoming request | Create socket to connect to the server IP |
| Read request | Send Request |
| Write Reply | Read Reply |
| Close Connection | Close Connection |