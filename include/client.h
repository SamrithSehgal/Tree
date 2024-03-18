// client.hpp
#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <boost/serialization/vector.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/asio.hpp>
#include <boost/serialization/export.hpp>
#include <chrono>
#include <thread>
#include <sstream>
#include <vector>
#include "sensor.h"

using namespace std;

class attrVector{
    public:
        vector<vector<int>> attrVector;
        template<class Archive>
        void serialize(Archive & ar, const unsigned int version){
            ar & attrVector;
        }
};

class Client {
    public:
        void run();
};

#endif // CLIENT_HPP
