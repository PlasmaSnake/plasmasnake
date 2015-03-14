/* Created by Michael Sy
 	for CS335. March 5th, 2015
 	*/

#ifndef SEQUENCE_MAP_INTERFACE_H
#define SEQUENCE_MAP_INTERFACE_H

class SequenceMap
{
public:
	SequenceMap();
	virtual SequenceMap(const vector<string> &set) = "";	
	~SequenceMap();
	virtual bool Begin() = 0;
	virtual bool End() = 0;
	virtual int Size() = 0;
	virtual bool Empty() = 0;
	virtual bool Insert(const pair <string, vector<string> > &item) = 0;
	virtual iterator Find(const string& key);
	virtual bool Merge(SequenceMap other) = 0;
};

#endif