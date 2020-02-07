#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>
#include <sys/types.h>

#include <unistd.h>

struct room{
    int id;
    char* name;
};

struct RoomInfo{
    const char* roomName;
    const char* roomType;
    int connections[6];
    int numConnections;
};



int main()
{
    printf("Hello World!\n");


    int status;
     status = getpid();

     int pid;
    pid = getpid();

    char filepath [] = "pettiboa.buildrooms.";
    printf("%s\n", filepath);

    char mypid[6];   // ex. 34567
    sprintf(mypid, "%d", pid);

    printf("%d\n", status);
    printf("My pid:%d\n", pid);

    strcat(filepath, mypid);


    mkdir(filepath);

    return 0;

}
    //room names
//    const char* roomNames[10] = {"Bubble_room", "Galaxy_room", "Bounce_room"
//                                 "Animal_room","Color_room", "Sports_room", "Cake_room",
//                                 "Beach_room", "BlakHole_room", "Freedom_room"};
//    //room types
//    const char* roomType[3] = {"START_ROOM", "MID_ROOM", "END_ROOM"};



    // Create all connections in graph
//    while (IsGraphFull() == false)
//    {
//      AddRandomConnection();
//    }
    // Returns true if all rooms have 3 to 6 outbound connections, false otherwise
//    bool IsGraphFull()
//    {
//      ...
//    }

    // Adds a random, valid outbound connection from a Room to another Room
//    void AddRandomConnection()
//    {
//      Room A;  // Maybe a struct, maybe global arrays of ints
//      Room B;

//      while(true)
//      {
//        A = GetRandomRoom();

//        if (CanAddConnectionFrom(A) == true)
//          break;
//      }

//      do
//      {
//        B = GetRandomRoom();
//      }
//      while(CanAddConnectionFrom(B) == false || IsSameRoom(A, B) == true || ConnectionAlreadyExists(A, B) == true);

//      ConnectRoom(A, B);  // TODO: Add this connection to the real variables,
//      ConnectRoom(B, A);  //  because this A and B will be destroyed when this function terminates
//    }

    // Returns a random Room, does NOT validate if connection can be added
//    Room GetRandomRoom()
//    {
//      ...
//    }

    // Returns true if a connection can be added from Room x (< 6 outbound connections), false otherwise
//    bool CanAddConnectionFrom(Room x)
//    {
//      ...
//    }
    // Returns true if a connection from Room x to Room y already exists, false otherwise
//    bool ConnectionAlreadyExists(x, y)
//    {
//      ...
//    }

    // Connects Rooms x and y together, does not check if this connection is valid
//    void ConnectRoom(Room x, Room y)
//    {
//      ...
//    }

    // Returns true if Rooms x and y are the same Room, false otherwise
//    bool IsSameRoom(Room x, Room y)
//    {
//      ...
//    }

