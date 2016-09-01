#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "AssociativeArrays01" << endl;

    unordered_map<string,float> map;

    // insert some elements into the collection
    // - using the syntax of an associative array
    map["VAST1"] = 0.16;
    map["VAST2"] = 0.07;
    map["Pi"] = 3.1415;
    map["an arbitrary number"] = 4983.223;
    map["Null"] = 0;

    // change value
    map["VAT1"] += 0.03;
    // print difference of VAT values
    cout << "VAT difference: " << map["VAT1"] - map["VAT2"] << endl;

    return 0;
}
