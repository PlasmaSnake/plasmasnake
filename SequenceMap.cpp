/* Created by Michael Sy
 	for CS335. March 5th, 2015
 	*/
#include "AVL_Tree.h"
#include "BSTree.h"
#include "AVL_Lazy.h"
#include "SequenceMap.h"

#include <iostream>
#include <cstdlib>
#include <iterator>
#include <vector>
#include <string> 		

SequenceMap::SequenceMap() : data_ = "", data_set_
{
} // End Constructor

SequenceMap::SequenceMap(const string &item) : data_ = item, data_set_
{
} // End copy Constructor

SequenceMap::SequenceMap(const pair<string, vector<string>> &set) : data_=set.first(), data_set_=set.second()
{
} // End pair copy constructor

SequenceMap::~SequenceMap()
{

} // End Destructor

vector<string> SequenceMap::Begin()
{
	return data_set_[0];
} // end Begin

vector<string> SequenceMap::End()
{
	return data_set[data_set.Size()];
} // end End

int SequenceMap::Size()
{
	return data_set_.size_;
} // end Size

bool SequenceMap::Empty()
{
	if (this->Size() == 0) return true;
	else return false;
} // end Empty

bool SequenceMap::Insert(const string &item)
{
	if (this->Find(item)	
	{  // Case if duplicate sequence found, adds the enzyme to vector. 
		this->Merge(item);
		return false;
	} // end if 

	else
		SequenceMap(item); //constructs new object with argument
	return true;
} // end Insert

SequenceMap SequenceMap::Find(const string& object) // need to fix
{ // Tries to find existing string in vector
	for(int i = 0; i < this->Size(); i++)
	{ // Returns

		if (object == this->Second()[i]) return this; 
 	} // end for

	return itr; // Should return nothing;
} // end Find

bool SequenceMap::Erase(string &object)
{
	return 0;
} // end Erase


bool SequenceMap::Merge(SequenceMap other)
{
	// if insert finds dupe, merge with other map

	return false;
} // end Merge

string& SequenceMap::operator[] (const string& key)
{
	if (this->Find(key) == this->End()) 
		{ // If key does not exist, it creates one
			this->Insert(key);
			return ;
		}
	
} // end operator[]

bool SequenceMap:: operator < (const SequenceMap &rhs)
{ // Checks if rhs is equal to a private member of the object
	if (this->data_ == rhs.data_) 
		return true;
	return false;
} // end operator<

string SequenceMap::First()
{
	return data_;
} //end First

vector<string> SequenceMap::Second()
{
	return data_set_;
} // end Second