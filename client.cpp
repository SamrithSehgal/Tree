// client.cpp
#include "./include/client.h"

int main(int argc, char const *argv[])
{
    try {
        boost::asio::io_service service;
        boost::asio::ip::tcp::acceptor acceptor(service, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 8080));
        
        boost::asio::ip::tcp::socket socket(service);
        acceptor.accept(socket);

        attrVector attrIds;

        boost::asio::streambuf recieveBuffer;
        boost::asio::read_until(socket, recieveBuffer, "\n");
        istream recieveStream(&recieveBuffer);
        boost::archive::text_iarchive recieveArchive(recieveStream);
        recieveArchive >> attrIds;
        /*for(int i = 0; i < attrIds.attrVector.size(); i++){
            for(int j = 0; j < attrIds.attrVector[i].size(); j++){
                cout << "Root #" << i+1 << " Attr Id: " << attrIds.attrVector[i][j] << endl;
            }
        } */

        Sensor sensor;
        tree nodeTree;
        PGconn *con = attributeTable::connect();
        if(attrIds.attrVector.size() == 1){
            nodeTree = sensor.createOneTree(attrIds.attrVector[0], con);
        }
        else{
            nodeTree = sensor.createManyTrees(attrIds.attrVector, con);  
        }   
        boost::asio::streambuf sendBuffer;
        ostream sendStream(&sendBuffer);
        boost::archive::text_oarchive sendArchive(sendStream);
        sendArchive << nodeTree;
        sendStream << "\n";
        boost::asio::write(socket, sendBuffer);

        socket.close();
       return 0;
    } catch (exception &e) {
        cerr << e.what() << endl;
    }   
}
