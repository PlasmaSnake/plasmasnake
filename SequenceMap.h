/* Created by Michael Sy
 	for CS335. March 5th, 2015
 	*/

#ifndef SEQUENCE_MAP_H
#define SEQUENCE_MAP_H

#include "SequenceMap.cpp"
#include <iostream>
#include <cstdlib>
#include <iterator>
#include <vector>
#include <string> 
#include <utility>		

class SequenceMap
{
public:
	SequenceMap();
	SequenceMap(const std::string &item);
	SequenceMap(const std::pair <std::string, std::vector<std::string>> &set);	
	~SequenceMap();
	std::vector<std::string> Begin();
	std::vector<std::string> End();
	int Size();
	bool Empty();// checks if empty
	bool Insert(const std::string &item);
	SequenceMap Find(const std::string& object); // Returns object by KEY(first)
	bool Erase(std::string &object);
	bool Merge(SequenceMap other);
	std::string& operator[] (const std::string& key);
	bool operator< (const SequenceMap &rhs);
	std::string First();
	std::vector<std::string> Second();

private:
	std::string sequence_;
	std::vector<std::string> enzyme_;
};

#endif