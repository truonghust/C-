#ifndef NODE_H
#define NODE_H
#include<vehicle.h>
#include<car.h>
#include<motorBike.h>
#include<truck.h>
class Node{
public:
    vehicle* veh;
    Node*pnext;
public:
    Node();

    ~Node();
};
#endif // NODE_H
