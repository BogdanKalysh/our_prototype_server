#ifndef IJSONPARSER_H
#define IJSONPARSER_H

#include <iostream>
#include <vector>

using namespace std;

template <typename  T>
class IJsonParser
{
public:
    virtual T parse(string json) = 0;
    virtual vector<T> parseVector(string jsonArray) = 0;
};

#endif // IJSONPARSER_H
