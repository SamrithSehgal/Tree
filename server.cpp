#include "./include/server.h"

int main(int argc, char const *argv[])
{
    try {
        boost::asio::io_service service;
        boost::asio::ip::tcp::socket socket(service);
        //boost::asio::ip::tcp::resolver resolver(io_context);
        //boost::asio::ip::tcp::resolver::results_type endpoint = resolver.resolve("localhost", "8080");
        
        //boost::asio::ip::tcp::socket socket(io_context);
        //boost::asio::connect(socket, endpoint);
        
        socket.connect(boost::asio::ip::tcp::endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 8080));
        
        attrVector attrIds;
        attrIds.attrVector = {
            {2, 3},
            {1, 3},
            {1, 2, 3}
        };
        
        boost::asio::streambuf sendBuffer;
        ostream sendStream(&sendBuffer);
        boost::archive::text_oarchive sendArchive(sendStream);

        sendArchive << attrIds;
        sendStream << "\n";
        boost::asio::write(socket, sendBuffer);
        
        tree nodeTree;

        boost::asio::streambuf recieverBuffer;
        boost::asio::read_until(socket, recieverBuffer, "\n");
        istream recieveStream(&recieverBuffer);
        boost::archive::text_iarchive recieveArchive(recieveStream);
        recieveArchive >> nodeTree;

        map<int, map<int, int>> flattenedTree = nodeTree.flattenTree();
        decode::decodeTree(nodeTree, flattenedTree); 

        socket.close();
    } catch (exception &e) {
        cerr << e.what() << endl;
    }
}

